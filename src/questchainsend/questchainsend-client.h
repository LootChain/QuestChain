// Copyright (c) 2014-2019 The QuestChain Core developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef PRIVCYSENDCLIENT_H
#define PRIVCYSENDCLIENT_H

#include <questchainsend/questchainsend-util.h>
#include <questchainsend/questchainsend.h>
#include <wallet/wallet.h>

#include <evo/deterministicmns.h>

class CQuestChainSendClientManager;
class CConnman;
class CNode;
class UniValue;

static const int MIN_PRIVCYSEND_SESSIONS = 1;
static const int MIN_PRIVCYSEND_ROUNDS = 2;
static const int MIN_PRIVCYSEND_AMOUNT = 2;
static const int MIN_PRIVCYSEND_DENOMS_GOAL = 10;
static const int MIN_PRIVCYSEND_DENOMS_HARDCAP = 10;
static const int MAX_PRIVCYSEND_SESSIONS = 10;
static const int MAX_PRIVCYSEND_ROUNDS = 16;
static const int MAX_PRIVCYSEND_DENOMS_GOAL = 100000;
static const int MAX_PRIVCYSEND_DENOMS_HARDCAP = 100000;
static const int MAX_PRIVCYSEND_AMOUNT = MAX_MONEY / COIN;
static const int DEFAULT_PRIVCYSEND_SESSIONS = 4;
static const int DEFAULT_PRIVCYSEND_ROUNDS = 4;
static const int DEFAULT_PRIVCYSEND_AMOUNT = 1000;
static const int DEFAULT_PRIVCYSEND_DENOMS_GOAL = 50;
static const int DEFAULT_PRIVCYSEND_DENOMS_HARDCAP = 300;

static const bool DEFAULT_PRIVCYSEND_AUTOSTART = false;
static const bool DEFAULT_PRIVCYSEND_MULTISESSION = false;

// How many new denom outputs to create before we consider the "goal" loop in CreateDenominated
// a final one and start creating an actual tx. Same limit applies for the "hard cap" part of the algo.
// NOTE: We do not allow txes larger than 100kB, so we have to limit the number of outputs here.
// We still want to create a lot of outputs though.
// Knowing that each CTxOut is ~35b big, 400 outputs should take 400 x ~35b = ~17.5kb.
// More than 500 outputs starts to make qt quite laggy.
// Additionally to need all 500 outputs (assuming a max per denom of 50) you'd need to be trying to
// create denominations for over 3000 questchain!
static const int PRIVCYSEND_DENOM_OUTPUTS_THRESHOLD = 500;

// Warn user if mixing in gui or try to create backup if mixing in daemon mode
// when we have only this many keys left
static const int PRIVCYSEND_KEYS_THRESHOLD_WARNING = 100;
// Stop mixing completely, it's too dangerous to continue when we have only this many keys left
static const int PRIVCYSEND_KEYS_THRESHOLD_STOP = 50;
// Pseudorandomly mix up to this many times in addition to base round count
static const int PRIVCYSEND_RANDOM_ROUNDS = 3;

// The main object for accessing mixing
extern CQuestChainSendClientManager questchainSendClient;

class CPendingDsaRequest
{
private:
    static const int TIMEOUT = 15;

    CService addr;
    CQuestChainSendAccept dsa;
    int64_t nTimeCreated;

public:
    CPendingDsaRequest() :
        addr(CService()),
        dsa(CQuestChainSendAccept()),
        nTimeCreated(0)
    {
    }

    CPendingDsaRequest(const CService& addr_, const CQuestChainSendAccept& dsa_) :
        addr(addr_),
        dsa(dsa_),
        nTimeCreated(GetTime())
    {
    }

    CService GetAddr() { return addr; }
    CQuestChainSendAccept GetDSA() { return dsa; }
    bool IsExpired() { return GetTime() - nTimeCreated > TIMEOUT; }

    friend bool operator==(const CPendingDsaRequest& a, const CPendingDsaRequest& b)
    {
        return a.addr == b.addr && a.dsa == b.dsa;
    }
    friend bool operator!=(const CPendingDsaRequest& a, const CPendingDsaRequest& b)
    {
        return !(a == b);
    }
    explicit operator bool() const
    {
        return *this != CPendingDsaRequest();
    }
};

class CQuestChainSendClientSession : public CQuestChainSendBaseSession
{
private:
    std::vector<COutPoint> vecOutPointLocked;

    std::string strLastMessage;
    std::string strAutoDenomResult;

    CDeterministicMNCPtr mixingMasternode;
    CMutableTransaction txMyCollateral; // client side collateral
    CPendingDsaRequest pendingDsaRequest;

    CKeyHolderStorage keyHolderStorage; // storage for keys used in PrepareDenominate

    /// Create denominations
    bool CreateDenominated(CAmount nBalanceToDenominate);
    bool CreateDenominated(CAmount nBalanceToDenominate, const CompactTallyItem& tallyItem, bool fCreateMixingCollaterals);

    /// Split up large inputs or make fee sized inputs
    bool MakeCollateralAmounts();
    bool MakeCollateralAmounts(const CompactTallyItem& tallyItem, bool fTryDenominated);

    bool JoinExistingQueue(CAmount nBalanceNeedsAnonymized, CConnman& connman);
    bool StartNewQueue(CAmount nBalanceNeedsAnonymized, CConnman& connman);

    /// step 0: select denominated inputs and txouts
    bool SelectDenominate(std::string& strErrorRet, std::vector<std::pair<CTxDSIn, CTxOut> >& vecPSInOutPairsRet);
    /// step 1: prepare denominated inputs and outputs
    bool PrepareDenominate(int nMinRounds, int nMaxRounds, std::string& strErrorRet, const std::vector<std::pair<CTxDSIn, CTxOut> >& vecPSInOutPairsIn, std::vector<std::pair<CTxDSIn, CTxOut> >& vecPSInOutPairsRet, bool fDryRun = false);
    /// step 2: send denominated inputs and outputs prepared in step 1
    bool SendDenominate(const std::vector<std::pair<CTxDSIn, CTxOut> >& vecPSInOutPairsIn, CConnman& connman);

    /// Process Masternode updates about the progress of mixing
    void ProcessPoolStateUpdate(CQuestChainSendStatusUpdate psssup);
    // Set the 'state' value, with some logging and capturing when the state changed
    void SetState(PoolState nStateNew);

    void CompletedTransaction(PoolMessage nMessageID);

    /// As a client, check and sign the final transaction
    bool SignFinalTransaction(const CTransaction& finalTransactionNew, CNode* pnode, CConnman& connman);

    void RelayIn(const CQuestChainSendEntry& entry, CConnman& connman);

    void SetNull();

public:
    CQuestChainSendClientSession() :
        vecOutPointLocked(),
        strLastMessage(),
        strAutoDenomResult(),
        mixingMasternode(),
        txMyCollateral(),
        pendingDsaRequest(),
        keyHolderStorage()
    {
    }

    void ProcessMessage(CNode* pfrom, const std::string& strCommand, CDataStream& vRecv, CConnman& connman);

    void UnlockCoins();

    void ResetPool();

    std::string GetStatus(bool fWaitForBlock);

    bool GetMixingMasternodeInfo(CDeterministicMNCPtr& ret) const;

    /// Passively run mixing in the background according to the configuration in settings
    bool DoAutomaticDenominating(CConnman& connman, bool fDryRun = false);

    /// As a client, submit part of a future mixing transaction to a Masternode to start the process
    bool SubmitDenominate(CConnman& connman);

    bool ProcessPendingDsaRequest(CConnman& connman);

    bool CheckTimeout();

    void GetJsonInfo(UniValue& obj) const;
};

/** Used to keep track of current status of mixing pool
 */
class CQuestChainSendClientManager : public CQuestChainSendBaseManager
{
private:
    // Keep track of the used Masternodes
    std::vector<COutPoint> vecMasternodesUsed;

    // TODO: or map<denom, CQuestChainSendClientSession> ??
    std::deque<CQuestChainSendClientSession> deqSessions;
    mutable CCriticalSection cs_deqsessions;

    int nCachedLastSuccessBlock;
    int nMinBlocksToWait; // how many blocks to wait after one successful mixing tx in non-multisession mode
    std::string strAutoDenomResult;

    // Keep track of current block height
    int nCachedBlockHeight;

    bool WaitForAnotherBlock();

    // Make sure we have enough keys since last backup
    bool CheckAutomaticBackup();

public:
    int nQuestChainSendSessions;
    int nQuestChainSendRounds;
    int nQuestChainSendRandomRounds;
    int nQuestChainSendAmount;
    int nQuestChainSendDenomsGoal;
    int nQuestChainSendDenomsHardCap;
    bool fEnableQuestChainSend;
    bool fQuestChainSendRunning;
    bool fQuestChainSendMultiSession;

    int nCachedNumBlocks;    // used for the overview screen
    bool fCreateAutoBackups; // builtin support for automatic backups

    CQuestChainSendClientManager() :
        vecMasternodesUsed(),
        deqSessions(),
        nCachedLastSuccessBlock(0),
        nMinBlocksToWait(1),
        strAutoDenomResult(),
        nCachedBlockHeight(0),
        nQuestChainSendRounds(DEFAULT_PRIVCYSEND_ROUNDS),
        nQuestChainSendRandomRounds(PRIVCYSEND_RANDOM_ROUNDS),
        nQuestChainSendAmount(DEFAULT_PRIVCYSEND_AMOUNT),
        nQuestChainSendDenomsGoal(DEFAULT_PRIVCYSEND_DENOMS_GOAL),
        nQuestChainSendDenomsHardCap(DEFAULT_PRIVCYSEND_DENOMS_HARDCAP),
        fEnableQuestChainSend(false),
        fQuestChainSendRunning(false),
        fQuestChainSendMultiSession(DEFAULT_PRIVCYSEND_MULTISESSION),
        nCachedNumBlocks(std::numeric_limits<int>::max()),
        fCreateAutoBackups(true)
    {
    }

    void ProcessMessage(CNode* pfrom, const std::string& strCommand, CDataStream& vRecv, CConnman& connman);

    void ResetPool();

    std::string GetStatuses();
    std::string GetSessionDenoms();

    bool GetMixingMasternodesInfo(std::vector<CDeterministicMNCPtr>& vecDmnsRet) const;

    /// Passively run mixing in the background according to the configuration in settings
    bool DoAutomaticDenominating(CConnman& connman, bool fDryRun = false);

    void CheckTimeout();

    void ProcessPendingDsaRequest(CConnman& connman);

    void AddUsedMasternode(const COutPoint& outpointMn);
    CDeterministicMNCPtr GetRandomNotUsedMasternode();

    void UpdatedSuccessBlock();

    void UpdatedBlockTip(const CBlockIndex* pindex);

    void DoMaintenance(CConnman& connman);

    void GetJsonInfo(UniValue& obj) const;
};

#endif

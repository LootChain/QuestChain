/********************************************************************************
** Form generated from reading UI file 'debugwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUGWINDOW_H
#define UI_DEBUGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/trafficgraphwidget.h"

QT_BEGIN_NAMESPACE

class Ui_RPCConsole
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_Buttons_2;
    QPushButton *btnInfo;
    QPushButton *btnConsole;
    QPushButton *btnNetTraffic;
    QPushButton *btnPeers;
    QPushButton *btnRepair;
    QStackedWidget *stackedWidgetRPC;
    QWidget *pageInfo;
    QGridLayout *gridLayout;
    QLabel *label_9;
    QLabel *label_6;
    QLabel *clientVersion;
    QLabel *labelClientUserAgent;
    QLabel *clientUserAgent;
    QLabel *label_berkeleyDBVersion;
    QLabel *berkeleyDBVersion;
    QLabel *label_12;
    QLabel *dataDir;
    QLabel *label_13;
    QLabel *startupTime;
    QLabel *labelNetwork;
    QLabel *label_8;
    QLabel *networkName;
    QLabel *label_7;
    QLabel *numberOfConnections;
    QLabel *masternodeCountLabel;
    QLabel *masternodeCount;
    QLabel *label_10;
    QLabel *label_3;
    QLabel *numberOfBlocks;
    QLabel *labelLastBlockTime;
    QLabel *lastBlockTime;
    QLabel *lastBlockHashLabel;
    QLabel *lastBlockHash;
    QLabel *labelMempoolTitle;
    QLabel *labelNumberOfTransactions;
    QLabel *mempoolNumberTxs;
    QLabel *labelMemoryUsage;
    QLabel *mempoolSize;
    QVBoxLayout *verticalLayoutDebugButton;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelDebugLogfile;
    QPushButton *openDebugLogfileButton;
    QSpacerItem *verticalSpacer;
    QLabel *labelInstantSendLockCount;
    QLabel *instantSendLockCount;
    QWidget *pageConsole;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *fontSmallerButton;
    QToolButton *fontBiggerButton;
    QToolButton *clearButton;
    QTextEdit *messagesWidget;
    QHBoxLayout *horizontalLayoutPrompt;
    QPushButton *promptIcon;
    QLineEdit *lineEdit;
    QWidget *pageNetTraffic;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    TrafficGraphWidget *trafficGraph;
    QHBoxLayout *horizontalLayout_2;
    QSlider *sldGraphRange;
    QLabel *lblGraphRange;
    QPushButton *btnClearTrafficGraph;
    QWidget *pagePeers;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_101;
    QTableView *peerWidget;
    QLabel *banHeading;
    QTableView *banlistWidget;
    QLabel *peerHeading;
    QWidget *detailWidget;
    QGridLayout *gridLayout_3;
    QLabel *label_30;
    QLabel *peerWhitelisted;
    QLabel *label_23;
    QLabel *peerDirection;
    QLabel *label_21;
    QLabel *peerVersion;
    QLabel *label_28;
    QLabel *peerSubversion;
    QLabel *label_4;
    QLabel *peerServices;
    QLabel *label_29;
    QLabel *peerHeight;
    QLabel *label_27;
    QLabel *peerSyncHeight;
    QLabel *label_25;
    QLabel *peerCommonHeight;
    QLabel *label_24;
    QLabel *peerBanScore;
    QLabel *label_22;
    QLabel *peerConnTime;
    QLabel *label_15;
    QLabel *peerLastSend;
    QLabel *label_19;
    QLabel *peerLastRecv;
    QLabel *label_18;
    QLabel *peerBytesSent;
    QLabel *label_20;
    QLabel *peerBytesRecv;
    QLabel *label_26;
    QLabel *peerPingTime;
    QLabel *peerPingWaitLabel;
    QLabel *peerPingWait;
    QLabel *peerMinPingLabel;
    QLabel *peerMinPing;
    QLabel *label_timeoffset;
    QLabel *timeoffset;
    QSpacerItem *verticalSpacer_3;
    QWidget *pageRepair;
    QPushButton *btn_salvagewallet;
    QPushButton *btn_rescan;
    QPushButton *btn_zapwallettxes1;
    QPushButton *btn_zapwallettxes2;
    QPushButton *btn_upgradewallet;
    QLabel *label_repair_helptext;
    QLabel *label_repair_salvage;
    QLabel *label_repair_rescan;
    QLabel *label_repair_zap1;
    QLabel *label_repair_zap2;
    QLabel *label_repair_upgrade;
    QLabel *label_repair_header;
    QPushButton *btn_reindex;
    QLabel *label_repair_reindex;
    QLabel *wallet_path;

    void setupUi(QWidget *RPCConsole)
    {
        if (RPCConsole->objectName().isEmpty())
            RPCConsole->setObjectName(QStringLiteral("RPCConsole"));
        RPCConsole->resize(769, 485);
        verticalLayout_2 = new QVBoxLayout(RPCConsole);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_Buttons_2 = new QHBoxLayout();
        horizontalLayout_Buttons_2->setSpacing(0);
        horizontalLayout_Buttons_2->setObjectName(QStringLiteral("horizontalLayout_Buttons_2"));
        horizontalLayout_Buttons_2->setContentsMargins(-1, 0, -1, -1);
        btnInfo = new QPushButton(RPCConsole);
        btnInfo->setObjectName(QStringLiteral("btnInfo"));
        btnInfo->setCheckable(true);

        horizontalLayout_Buttons_2->addWidget(btnInfo);

        btnConsole = new QPushButton(RPCConsole);
        btnConsole->setObjectName(QStringLiteral("btnConsole"));
        btnConsole->setCheckable(true);

        horizontalLayout_Buttons_2->addWidget(btnConsole);

        btnNetTraffic = new QPushButton(RPCConsole);
        btnNetTraffic->setObjectName(QStringLiteral("btnNetTraffic"));
        btnNetTraffic->setCheckable(true);

        horizontalLayout_Buttons_2->addWidget(btnNetTraffic);

        btnPeers = new QPushButton(RPCConsole);
        btnPeers->setObjectName(QStringLiteral("btnPeers"));
        btnPeers->setCheckable(true);

        horizontalLayout_Buttons_2->addWidget(btnPeers);

        btnRepair = new QPushButton(RPCConsole);
        btnRepair->setObjectName(QStringLiteral("btnRepair"));
        btnRepair->setCheckable(true);

        horizontalLayout_Buttons_2->addWidget(btnRepair);


        verticalLayout_2->addLayout(horizontalLayout_Buttons_2);

        stackedWidgetRPC = new QStackedWidget(RPCConsole);
        stackedWidgetRPC->setObjectName(QStringLiteral("stackedWidgetRPC"));
        stackedWidgetRPC->setMinimumSize(QSize(0, 0));
        pageInfo = new QWidget();
        pageInfo->setObjectName(QStringLiteral("pageInfo"));
        gridLayout = new QGridLayout(pageInfo);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(12);
        label_9 = new QLabel(pageInfo);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        label_6 = new QLabel(pageInfo);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        clientVersion = new QLabel(pageInfo);
        clientVersion->setObjectName(QStringLiteral("clientVersion"));
        clientVersion->setCursor(QCursor(Qt::IBeamCursor));
        clientVersion->setTextFormat(Qt::PlainText);
        clientVersion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(clientVersion, 1, 1, 1, 2);

        labelClientUserAgent = new QLabel(pageInfo);
        labelClientUserAgent->setObjectName(QStringLiteral("labelClientUserAgent"));
        labelClientUserAgent->setIndent(10);

        gridLayout->addWidget(labelClientUserAgent, 2, 0, 1, 1);

        clientUserAgent = new QLabel(pageInfo);
        clientUserAgent->setObjectName(QStringLiteral("clientUserAgent"));
        clientUserAgent->setCursor(QCursor(Qt::IBeamCursor));
        clientUserAgent->setTextFormat(Qt::PlainText);
        clientUserAgent->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(clientUserAgent, 2, 1, 1, 2);

        label_berkeleyDBVersion = new QLabel(pageInfo);
        label_berkeleyDBVersion->setObjectName(QStringLiteral("label_berkeleyDBVersion"));
        label_berkeleyDBVersion->setIndent(10);

        gridLayout->addWidget(label_berkeleyDBVersion, 3, 0, 1, 1);

        berkeleyDBVersion = new QLabel(pageInfo);
        berkeleyDBVersion->setObjectName(QStringLiteral("berkeleyDBVersion"));
        berkeleyDBVersion->setCursor(QCursor(Qt::IBeamCursor));
        berkeleyDBVersion->setTextFormat(Qt::PlainText);
        berkeleyDBVersion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(berkeleyDBVersion, 3, 1, 1, 2);

        label_12 = new QLabel(pageInfo);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 4, 0, 1, 1);

        dataDir = new QLabel(pageInfo);
        dataDir->setObjectName(QStringLiteral("dataDir"));
        dataDir->setCursor(QCursor(Qt::IBeamCursor));
        dataDir->setTextFormat(Qt::PlainText);
        dataDir->setWordWrap(true);
        dataDir->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(dataDir, 4, 1, 1, 2);

        label_13 = new QLabel(pageInfo);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 5, 0, 1, 1);

        startupTime = new QLabel(pageInfo);
        startupTime->setObjectName(QStringLiteral("startupTime"));
        startupTime->setCursor(QCursor(Qt::IBeamCursor));
        startupTime->setTextFormat(Qt::PlainText);
        startupTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(startupTime, 5, 1, 1, 2);

        labelNetwork = new QLabel(pageInfo);
        labelNetwork->setObjectName(QStringLiteral("labelNetwork"));

        gridLayout->addWidget(labelNetwork, 6, 0, 1, 1);

        label_8 = new QLabel(pageInfo);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 7, 0, 1, 1);

        networkName = new QLabel(pageInfo);
        networkName->setObjectName(QStringLiteral("networkName"));
        networkName->setCursor(QCursor(Qt::IBeamCursor));
        networkName->setTextFormat(Qt::PlainText);
        networkName->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(networkName, 7, 1, 1, 2);

        label_7 = new QLabel(pageInfo);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 8, 0, 1, 1);

        numberOfConnections = new QLabel(pageInfo);
        numberOfConnections->setObjectName(QStringLiteral("numberOfConnections"));
        numberOfConnections->setCursor(QCursor(Qt::IBeamCursor));
        numberOfConnections->setTextFormat(Qt::PlainText);
        numberOfConnections->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(numberOfConnections, 8, 1, 1, 2);

        masternodeCountLabel = new QLabel(pageInfo);
        masternodeCountLabel->setObjectName(QStringLiteral("masternodeCountLabel"));

        gridLayout->addWidget(masternodeCountLabel, 9, 0, 1, 1);

        masternodeCount = new QLabel(pageInfo);
        masternodeCount->setObjectName(QStringLiteral("masternodeCount"));
        masternodeCount->setCursor(QCursor(Qt::IBeamCursor));
        masternodeCount->setTextFormat(Qt::PlainText);
        masternodeCount->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(masternodeCount, 9, 1, 1, 1);

        label_10 = new QLabel(pageInfo);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 10, 0, 1, 1);

        label_3 = new QLabel(pageInfo);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 11, 0, 1, 1);

        numberOfBlocks = new QLabel(pageInfo);
        numberOfBlocks->setObjectName(QStringLiteral("numberOfBlocks"));
        numberOfBlocks->setCursor(QCursor(Qt::IBeamCursor));
        numberOfBlocks->setTextFormat(Qt::PlainText);
        numberOfBlocks->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(numberOfBlocks, 11, 1, 1, 2);

        labelLastBlockTime = new QLabel(pageInfo);
        labelLastBlockTime->setObjectName(QStringLiteral("labelLastBlockTime"));

        gridLayout->addWidget(labelLastBlockTime, 12, 0, 1, 1);

        lastBlockTime = new QLabel(pageInfo);
        lastBlockTime->setObjectName(QStringLiteral("lastBlockTime"));
        lastBlockTime->setCursor(QCursor(Qt::IBeamCursor));
        lastBlockTime->setTextFormat(Qt::PlainText);
        lastBlockTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(lastBlockTime, 12, 1, 1, 2);

        lastBlockHashLabel = new QLabel(pageInfo);
        lastBlockHashLabel->setObjectName(QStringLiteral("lastBlockHashLabel"));

        gridLayout->addWidget(lastBlockHashLabel, 13, 0, 1, 1);

        lastBlockHash = new QLabel(pageInfo);
        lastBlockHash->setObjectName(QStringLiteral("lastBlockHash"));
        lastBlockHash->setCursor(QCursor(Qt::IBeamCursor));
        lastBlockHash->setTextFormat(Qt::PlainText);
        lastBlockHash->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(lastBlockHash, 13, 1, 1, 1);

        labelMempoolTitle = new QLabel(pageInfo);
        labelMempoolTitle->setObjectName(QStringLiteral("labelMempoolTitle"));

        gridLayout->addWidget(labelMempoolTitle, 14, 0, 1, 1);

        labelNumberOfTransactions = new QLabel(pageInfo);
        labelNumberOfTransactions->setObjectName(QStringLiteral("labelNumberOfTransactions"));

        gridLayout->addWidget(labelNumberOfTransactions, 15, 0, 1, 1);

        mempoolNumberTxs = new QLabel(pageInfo);
        mempoolNumberTxs->setObjectName(QStringLiteral("mempoolNumberTxs"));
        mempoolNumberTxs->setCursor(QCursor(Qt::IBeamCursor));
        mempoolNumberTxs->setTextFormat(Qt::PlainText);
        mempoolNumberTxs->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(mempoolNumberTxs, 15, 1, 1, 1);

        labelMemoryUsage = new QLabel(pageInfo);
        labelMemoryUsage->setObjectName(QStringLiteral("labelMemoryUsage"));

        gridLayout->addWidget(labelMemoryUsage, 16, 0, 1, 1);

        mempoolSize = new QLabel(pageInfo);
        mempoolSize->setObjectName(QStringLiteral("mempoolSize"));
        mempoolSize->setCursor(QCursor(Qt::IBeamCursor));
        mempoolSize->setTextFormat(Qt::PlainText);
        mempoolSize->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(mempoolSize, 16, 1, 1, 1);

        verticalLayoutDebugButton = new QVBoxLayout();
        verticalLayoutDebugButton->setSpacing(3);
        verticalLayoutDebugButton->setObjectName(QStringLiteral("verticalLayoutDebugButton"));
        verticalSpacer_2 = new QSpacerItem(10, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutDebugButton->addItem(verticalSpacer_2);

        labelDebugLogfile = new QLabel(pageInfo);
        labelDebugLogfile->setObjectName(QStringLiteral("labelDebugLogfile"));

        verticalLayoutDebugButton->addWidget(labelDebugLogfile);

        openDebugLogfileButton = new QPushButton(pageInfo);
        openDebugLogfileButton->setObjectName(QStringLiteral("openDebugLogfileButton"));
        openDebugLogfileButton->setAutoDefault(false);

        verticalLayoutDebugButton->addWidget(openDebugLogfileButton);


        gridLayout->addLayout(verticalLayoutDebugButton, 13, 2, 3, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 18, 0, 1, 1);

        labelInstantSendLockCount = new QLabel(pageInfo);
        labelInstantSendLockCount->setObjectName(QStringLiteral("labelInstantSendLockCount"));

        gridLayout->addWidget(labelInstantSendLockCount, 17, 0, 1, 1);

        instantSendLockCount = new QLabel(pageInfo);
        instantSendLockCount->setObjectName(QStringLiteral("instantSendLockCount"));
        instantSendLockCount->setCursor(QCursor(Qt::IBeamCursor));
        instantSendLockCount->setTextFormat(Qt::PlainText);
        instantSendLockCount->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(instantSendLockCount, 17, 1, 1, 1);

        gridLayout->setColumnStretch(1, 1);
        stackedWidgetRPC->addWidget(pageInfo);
        pageConsole = new QWidget();
        pageConsole->setObjectName(QStringLiteral("pageConsole"));
        verticalLayout_3 = new QVBoxLayout(pageConsole);
        verticalLayout_3->setSpacing(3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, -1, 5);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        fontSmallerButton = new QToolButton(pageConsole);
        fontSmallerButton->setObjectName(QStringLiteral("fontSmallerButton"));

        horizontalLayout->addWidget(fontSmallerButton);

        fontBiggerButton = new QToolButton(pageConsole);
        fontBiggerButton->setObjectName(QStringLiteral("fontBiggerButton"));

        horizontalLayout->addWidget(fontBiggerButton);

        clearButton = new QToolButton(pageConsole);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setShortcut(QStringLiteral("Ctrl+L"));

        horizontalLayout->addWidget(clearButton);


        verticalLayout_3->addLayout(horizontalLayout);

        messagesWidget = new QTextEdit(pageConsole);
        messagesWidget->setObjectName(QStringLiteral("messagesWidget"));
        messagesWidget->setMinimumSize(QSize(0, 100));
        messagesWidget->setReadOnly(true);
        messagesWidget->setProperty("tabKeyNavigation", QVariant(false));
        messagesWidget->setProperty("columnCount", QVariant(2));

        verticalLayout_3->addWidget(messagesWidget);

        horizontalLayoutPrompt = new QHBoxLayout();
        horizontalLayoutPrompt->setSpacing(3);
        horizontalLayoutPrompt->setObjectName(QStringLiteral("horizontalLayoutPrompt"));
        promptIcon = new QPushButton(pageConsole);
        promptIcon->setObjectName(QStringLiteral("promptIcon"));
        promptIcon->setEnabled(false);
        promptIcon->setMaximumSize(QSize(16, 24));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/prompticon"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/icons/prompticon"), QSize(), QIcon::Disabled, QIcon::Off);
        promptIcon->setIcon(icon);
        promptIcon->setIconSize(QSize(14, 14));
        promptIcon->setAutoDefault(false);
        promptIcon->setFlat(true);

        horizontalLayoutPrompt->addWidget(promptIcon);

        lineEdit = new QLineEdit(pageConsole);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayoutPrompt->addWidget(lineEdit);


        verticalLayout_3->addLayout(horizontalLayoutPrompt);

        stackedWidgetRPC->addWidget(pageConsole);
        pageNetTraffic = new QWidget();
        pageNetTraffic->setObjectName(QStringLiteral("pageNetTraffic"));
        horizontalLayout_3 = new QHBoxLayout(pageNetTraffic);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        trafficGraph = new TrafficGraphWidget(pageNetTraffic);
        trafficGraph->setObjectName(QStringLiteral("trafficGraph"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(trafficGraph->sizePolicy().hasHeightForWidth());
        trafficGraph->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(trafficGraph);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        sldGraphRange = new QSlider(pageNetTraffic);
        sldGraphRange->setObjectName(QStringLiteral("sldGraphRange"));
        sldGraphRange->setMinimum(0);
        sldGraphRange->setMaximum(9);
        sldGraphRange->setPageStep(1);
        sldGraphRange->setValue(3);
        sldGraphRange->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(sldGraphRange);

        lblGraphRange = new QLabel(pageNetTraffic);
        lblGraphRange->setObjectName(QStringLiteral("lblGraphRange"));
        lblGraphRange->setMinimumSize(QSize(100, 0));
        lblGraphRange->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lblGraphRange);

        btnClearTrafficGraph = new QPushButton(pageNetTraffic);
        btnClearTrafficGraph->setObjectName(QStringLiteral("btnClearTrafficGraph"));
        btnClearTrafficGraph->setAutoDefault(false);

        horizontalLayout_2->addWidget(btnClearTrafficGraph);


        verticalLayout_4->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_4);

        stackedWidgetRPC->addWidget(pageNetTraffic);
        pagePeers = new QWidget();
        pagePeers->setObjectName(QStringLiteral("pagePeers"));
        gridLayout_2 = new QGridLayout(pagePeers);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_101 = new QVBoxLayout();
        verticalLayout_101->setSpacing(0);
        verticalLayout_101->setObjectName(QStringLiteral("verticalLayout_101"));
        peerWidget = new QTableView(pagePeers);
        peerWidget->setObjectName(QStringLiteral("peerWidget"));
        peerWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        peerWidget->setTabKeyNavigation(false);
        peerWidget->setSortingEnabled(true);
        peerWidget->horizontalHeader()->setHighlightSections(false);

        verticalLayout_101->addWidget(peerWidget);

        banHeading = new QLabel(pagePeers);
        banHeading->setObjectName(QStringLiteral("banHeading"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(banHeading->sizePolicy().hasHeightForWidth());
        banHeading->setSizePolicy(sizePolicy1);
        banHeading->setMinimumSize(QSize(300, 32));
        banHeading->setMaximumSize(QSize(16777215, 32));
        banHeading->setCursor(QCursor(Qt::IBeamCursor));
        banHeading->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        banHeading->setWordWrap(true);
        banHeading->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout_101->addWidget(banHeading);

        banlistWidget = new QTableView(pagePeers);
        banlistWidget->setObjectName(QStringLiteral("banlistWidget"));
        sizePolicy.setHeightForWidth(banlistWidget->sizePolicy().hasHeightForWidth());
        banlistWidget->setSizePolicy(sizePolicy);
        banlistWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        banlistWidget->setTabKeyNavigation(false);
        banlistWidget->setSortingEnabled(true);
        banlistWidget->horizontalHeader()->setHighlightSections(false);

        verticalLayout_101->addWidget(banlistWidget);


        gridLayout_2->addLayout(verticalLayout_101, 0, 0, 2, 1);

        peerHeading = new QLabel(pagePeers);
        peerHeading->setObjectName(QStringLiteral("peerHeading"));
        sizePolicy1.setHeightForWidth(peerHeading->sizePolicy().hasHeightForWidth());
        peerHeading->setSizePolicy(sizePolicy1);
        peerHeading->setMinimumSize(QSize(300, 32));
        peerHeading->setCursor(QCursor(Qt::IBeamCursor));
        peerHeading->setAlignment(Qt::AlignCenter);
        peerHeading->setWordWrap(true);
        peerHeading->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(peerHeading, 0, 1, 1, 1);

        detailWidget = new QWidget(pagePeers);
        detailWidget->setObjectName(QStringLiteral("detailWidget"));
        detailWidget->setMinimumSize(QSize(300, 0));
        gridLayout_3 = new QGridLayout(detailWidget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_30 = new QLabel(detailWidget);
        label_30->setObjectName(QStringLiteral("label_30"));

        gridLayout_3->addWidget(label_30, 0, 0, 1, 1);

        peerWhitelisted = new QLabel(detailWidget);
        peerWhitelisted->setObjectName(QStringLiteral("peerWhitelisted"));
        peerWhitelisted->setCursor(QCursor(Qt::IBeamCursor));
        peerWhitelisted->setTextFormat(Qt::PlainText);
        peerWhitelisted->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerWhitelisted, 0, 2, 1, 1);

        label_23 = new QLabel(detailWidget);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout_3->addWidget(label_23, 1, 0, 1, 1);

        peerDirection = new QLabel(detailWidget);
        peerDirection->setObjectName(QStringLiteral("peerDirection"));
        peerDirection->setCursor(QCursor(Qt::IBeamCursor));
        peerDirection->setTextFormat(Qt::PlainText);
        peerDirection->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerDirection, 1, 2, 1, 1);

        label_21 = new QLabel(detailWidget);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_3->addWidget(label_21, 2, 0, 1, 1);

        peerVersion = new QLabel(detailWidget);
        peerVersion->setObjectName(QStringLiteral("peerVersion"));
        peerVersion->setCursor(QCursor(Qt::IBeamCursor));
        peerVersion->setTextFormat(Qt::PlainText);
        peerVersion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerVersion, 2, 2, 1, 1);

        label_28 = new QLabel(detailWidget);
        label_28->setObjectName(QStringLiteral("label_28"));

        gridLayout_3->addWidget(label_28, 3, 0, 1, 1);

        peerSubversion = new QLabel(detailWidget);
        peerSubversion->setObjectName(QStringLiteral("peerSubversion"));
        peerSubversion->setCursor(QCursor(Qt::IBeamCursor));
        peerSubversion->setTextFormat(Qt::PlainText);
        peerSubversion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerSubversion, 3, 2, 1, 1);

        label_4 = new QLabel(detailWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 4, 0, 1, 1);

        peerServices = new QLabel(detailWidget);
        peerServices->setObjectName(QStringLiteral("peerServices"));
        peerServices->setCursor(QCursor(Qt::IBeamCursor));
        peerServices->setTextFormat(Qt::PlainText);
        peerServices->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerServices, 4, 2, 1, 1);

        label_29 = new QLabel(detailWidget);
        label_29->setObjectName(QStringLiteral("label_29"));

        gridLayout_3->addWidget(label_29, 5, 0, 1, 1);

        peerHeight = new QLabel(detailWidget);
        peerHeight->setObjectName(QStringLiteral("peerHeight"));
        peerHeight->setCursor(QCursor(Qt::IBeamCursor));
        peerHeight->setTextFormat(Qt::PlainText);
        peerHeight->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerHeight, 5, 2, 1, 1);

        label_27 = new QLabel(detailWidget);
        label_27->setObjectName(QStringLiteral("label_27"));

        gridLayout_3->addWidget(label_27, 6, 0, 1, 1);

        peerSyncHeight = new QLabel(detailWidget);
        peerSyncHeight->setObjectName(QStringLiteral("peerSyncHeight"));
        peerSyncHeight->setCursor(QCursor(Qt::IBeamCursor));
        peerSyncHeight->setTextFormat(Qt::PlainText);
        peerSyncHeight->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerSyncHeight, 6, 2, 1, 1);

        label_25 = new QLabel(detailWidget);
        label_25->setObjectName(QStringLiteral("label_25"));

        gridLayout_3->addWidget(label_25, 7, 0, 1, 1);

        peerCommonHeight = new QLabel(detailWidget);
        peerCommonHeight->setObjectName(QStringLiteral("peerCommonHeight"));
        peerCommonHeight->setCursor(QCursor(Qt::IBeamCursor));
        peerCommonHeight->setTextFormat(Qt::PlainText);
        peerCommonHeight->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerCommonHeight, 7, 2, 1, 1);

        label_24 = new QLabel(detailWidget);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout_3->addWidget(label_24, 8, 0, 1, 1);

        peerBanScore = new QLabel(detailWidget);
        peerBanScore->setObjectName(QStringLiteral("peerBanScore"));
        peerBanScore->setCursor(QCursor(Qt::IBeamCursor));
        peerBanScore->setTextFormat(Qt::PlainText);
        peerBanScore->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerBanScore, 8, 2, 1, 1);

        label_22 = new QLabel(detailWidget);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_3->addWidget(label_22, 9, 0, 1, 1);

        peerConnTime = new QLabel(detailWidget);
        peerConnTime->setObjectName(QStringLiteral("peerConnTime"));
        peerConnTime->setCursor(QCursor(Qt::IBeamCursor));
        peerConnTime->setTextFormat(Qt::PlainText);
        peerConnTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerConnTime, 9, 2, 1, 1);

        label_15 = new QLabel(detailWidget);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_3->addWidget(label_15, 10, 0, 1, 1);

        peerLastSend = new QLabel(detailWidget);
        peerLastSend->setObjectName(QStringLiteral("peerLastSend"));
        peerLastSend->setCursor(QCursor(Qt::IBeamCursor));
        peerLastSend->setTextFormat(Qt::PlainText);
        peerLastSend->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerLastSend, 10, 2, 1, 1);

        label_19 = new QLabel(detailWidget);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_3->addWidget(label_19, 11, 0, 1, 1);

        peerLastRecv = new QLabel(detailWidget);
        peerLastRecv->setObjectName(QStringLiteral("peerLastRecv"));
        peerLastRecv->setCursor(QCursor(Qt::IBeamCursor));
        peerLastRecv->setTextFormat(Qt::PlainText);
        peerLastRecv->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerLastRecv, 11, 2, 1, 1);

        label_18 = new QLabel(detailWidget);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_3->addWidget(label_18, 12, 0, 1, 1);

        peerBytesSent = new QLabel(detailWidget);
        peerBytesSent->setObjectName(QStringLiteral("peerBytesSent"));
        peerBytesSent->setCursor(QCursor(Qt::IBeamCursor));
        peerBytesSent->setTextFormat(Qt::PlainText);
        peerBytesSent->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerBytesSent, 12, 2, 1, 1);

        label_20 = new QLabel(detailWidget);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_3->addWidget(label_20, 13, 0, 1, 1);

        peerBytesRecv = new QLabel(detailWidget);
        peerBytesRecv->setObjectName(QStringLiteral("peerBytesRecv"));
        peerBytesRecv->setCursor(QCursor(Qt::IBeamCursor));
        peerBytesRecv->setTextFormat(Qt::PlainText);
        peerBytesRecv->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerBytesRecv, 13, 2, 1, 1);

        label_26 = new QLabel(detailWidget);
        label_26->setObjectName(QStringLiteral("label_26"));

        gridLayout_3->addWidget(label_26, 14, 0, 1, 1);

        peerPingTime = new QLabel(detailWidget);
        peerPingTime->setObjectName(QStringLiteral("peerPingTime"));
        peerPingTime->setCursor(QCursor(Qt::IBeamCursor));
        peerPingTime->setTextFormat(Qt::PlainText);
        peerPingTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerPingTime, 14, 2, 1, 1);

        peerPingWaitLabel = new QLabel(detailWidget);
        peerPingWaitLabel->setObjectName(QStringLiteral("peerPingWaitLabel"));

        gridLayout_3->addWidget(peerPingWaitLabel, 15, 0, 1, 1);

        peerPingWait = new QLabel(detailWidget);
        peerPingWait->setObjectName(QStringLiteral("peerPingWait"));
        peerPingWait->setCursor(QCursor(Qt::IBeamCursor));
        peerPingWait->setTextFormat(Qt::PlainText);
        peerPingWait->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerPingWait, 15, 2, 1, 1);

        peerMinPingLabel = new QLabel(detailWidget);
        peerMinPingLabel->setObjectName(QStringLiteral("peerMinPingLabel"));

        gridLayout_3->addWidget(peerMinPingLabel, 16, 0, 1, 1);

        peerMinPing = new QLabel(detailWidget);
        peerMinPing->setObjectName(QStringLiteral("peerMinPing"));
        peerMinPing->setCursor(QCursor(Qt::IBeamCursor));
        peerMinPing->setTextFormat(Qt::PlainText);
        peerMinPing->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(peerMinPing, 16, 2, 1, 1);

        label_timeoffset = new QLabel(detailWidget);
        label_timeoffset->setObjectName(QStringLiteral("label_timeoffset"));

        gridLayout_3->addWidget(label_timeoffset, 17, 0, 1, 1);

        timeoffset = new QLabel(detailWidget);
        timeoffset->setObjectName(QStringLiteral("timeoffset"));
        timeoffset->setCursor(QCursor(Qt::IBeamCursor));
        timeoffset->setTextFormat(Qt::PlainText);
        timeoffset->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(timeoffset, 17, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 18, 1, 1, 1);


        gridLayout_2->addWidget(detailWidget, 1, 1, 1, 1);

        stackedWidgetRPC->addWidget(pagePeers);
        pageRepair = new QWidget();
        pageRepair->setObjectName(QStringLiteral("pageRepair"));
        btn_salvagewallet = new QPushButton(pageRepair);
        btn_salvagewallet->setObjectName(QStringLiteral("btn_salvagewallet"));
        btn_salvagewallet->setGeometry(QRect(10, 100, 301, 23));
        btn_salvagewallet->setMinimumSize(QSize(180, 23));
        btn_rescan = new QPushButton(pageRepair);
        btn_rescan->setObjectName(QStringLiteral("btn_rescan"));
        btn_rescan->setGeometry(QRect(10, 150, 301, 23));
        btn_rescan->setMinimumSize(QSize(180, 23));
        btn_zapwallettxes1 = new QPushButton(pageRepair);
        btn_zapwallettxes1->setObjectName(QStringLiteral("btn_zapwallettxes1"));
        btn_zapwallettxes1->setGeometry(QRect(10, 200, 301, 23));
        btn_zapwallettxes1->setMinimumSize(QSize(180, 23));
        btn_zapwallettxes2 = new QPushButton(pageRepair);
        btn_zapwallettxes2->setObjectName(QStringLiteral("btn_zapwallettxes2"));
        btn_zapwallettxes2->setGeometry(QRect(10, 250, 301, 23));
        btn_zapwallettxes2->setMinimumSize(QSize(180, 23));
        btn_upgradewallet = new QPushButton(pageRepair);
        btn_upgradewallet->setObjectName(QStringLiteral("btn_upgradewallet"));
        btn_upgradewallet->setGeometry(QRect(10, 300, 301, 23));
        btn_upgradewallet->setMinimumSize(QSize(180, 23));
        label_repair_helptext = new QLabel(pageRepair);
        label_repair_helptext->setObjectName(QStringLiteral("label_repair_helptext"));
        label_repair_helptext->setGeometry(QRect(10, 30, 711, 41));
        label_repair_helptext->setWordWrap(true);
        label_repair_salvage = new QLabel(pageRepair);
        label_repair_salvage->setObjectName(QStringLiteral("label_repair_salvage"));
        label_repair_salvage->setGeometry(QRect(330, 90, 411, 41));
        label_repair_salvage->setWordWrap(true);
        label_repair_rescan = new QLabel(pageRepair);
        label_repair_rescan->setObjectName(QStringLiteral("label_repair_rescan"));
        label_repair_rescan->setGeometry(QRect(330, 140, 411, 41));
        label_repair_rescan->setWordWrap(true);
        label_repair_zap1 = new QLabel(pageRepair);
        label_repair_zap1->setObjectName(QStringLiteral("label_repair_zap1"));
        label_repair_zap1->setGeometry(QRect(330, 190, 411, 41));
        label_repair_zap1->setWordWrap(true);
        label_repair_zap2 = new QLabel(pageRepair);
        label_repair_zap2->setObjectName(QStringLiteral("label_repair_zap2"));
        label_repair_zap2->setGeometry(QRect(330, 240, 411, 41));
        label_repair_zap2->setWordWrap(true);
        label_repair_upgrade = new QLabel(pageRepair);
        label_repair_upgrade->setObjectName(QStringLiteral("label_repair_upgrade"));
        label_repair_upgrade->setGeometry(QRect(330, 290, 411, 41));
        label_repair_upgrade->setWordWrap(true);
        label_repair_header = new QLabel(pageRepair);
        label_repair_header->setObjectName(QStringLiteral("label_repair_header"));
        label_repair_header->setGeometry(QRect(10, 10, 711, 16));
        label_repair_header->setWordWrap(true);
        btn_reindex = new QPushButton(pageRepair);
        btn_reindex->setObjectName(QStringLiteral("btn_reindex"));
        btn_reindex->setGeometry(QRect(10, 350, 301, 23));
        label_repair_reindex = new QLabel(pageRepair);
        label_repair_reindex->setObjectName(QStringLiteral("label_repair_reindex"));
        label_repair_reindex->setGeometry(QRect(330, 340, 411, 41));
        label_repair_reindex->setWordWrap(true);
        wallet_path = new QLabel(pageRepair);
        wallet_path->setObjectName(QStringLiteral("wallet_path"));
        wallet_path->setGeometry(QRect(10, 70, 731, 21));
        stackedWidgetRPC->addWidget(pageRepair);

        verticalLayout_2->addWidget(stackedWidgetRPC);


        retranslateUi(RPCConsole);

        stackedWidgetRPC->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RPCConsole);
    } // setupUi

    void retranslateUi(QWidget *RPCConsole)
    {
        RPCConsole->setWindowTitle(QApplication::translate("RPCConsole", "Tools window", Q_NULLPTR));
        btnInfo->setText(QApplication::translate("RPCConsole", "&Information", Q_NULLPTR));
        btnConsole->setText(QApplication::translate("RPCConsole", "&Console", Q_NULLPTR));
        btnNetTraffic->setText(QApplication::translate("RPCConsole", "&Network Traffic", Q_NULLPTR));
        btnPeers->setText(QApplication::translate("RPCConsole", "&Peers", Q_NULLPTR));
        btnRepair->setText(QApplication::translate("RPCConsole", "&Wallet Repair", Q_NULLPTR));
        label_9->setText(QApplication::translate("RPCConsole", "General", Q_NULLPTR));
        label_6->setText(QApplication::translate("RPCConsole", "Client version", Q_NULLPTR));
        clientVersion->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        labelClientUserAgent->setText(QApplication::translate("RPCConsole", "User Agent", Q_NULLPTR));
        clientUserAgent->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        label_berkeleyDBVersion->setText(QApplication::translate("RPCConsole", "Using BerkeleyDB version", Q_NULLPTR));
        berkeleyDBVersion->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        label_12->setText(QApplication::translate("RPCConsole", "Datadir", Q_NULLPTR));
        dataDir->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        label_13->setText(QApplication::translate("RPCConsole", "Startup time", Q_NULLPTR));
        startupTime->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        labelNetwork->setText(QApplication::translate("RPCConsole", "Network", Q_NULLPTR));
        label_8->setText(QApplication::translate("RPCConsole", "Name", Q_NULLPTR));
        networkName->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        label_7->setText(QApplication::translate("RPCConsole", "Number of connections", Q_NULLPTR));
        numberOfConnections->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        masternodeCountLabel->setText(QApplication::translate("RPCConsole", "Number of Masternodes", Q_NULLPTR));
        masternodeCount->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        label_10->setText(QApplication::translate("RPCConsole", "Block chain", Q_NULLPTR));
        label_3->setText(QApplication::translate("RPCConsole", "Current number of blocks", Q_NULLPTR));
        numberOfBlocks->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        labelLastBlockTime->setText(QApplication::translate("RPCConsole", "Last block time", Q_NULLPTR));
        lastBlockTime->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        lastBlockHashLabel->setText(QApplication::translate("RPCConsole", "Last block hash", Q_NULLPTR));
        lastBlockHash->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        labelMempoolTitle->setText(QApplication::translate("RPCConsole", "Memory Pool", Q_NULLPTR));
        labelNumberOfTransactions->setText(QApplication::translate("RPCConsole", "Current number of transactions", Q_NULLPTR));
        mempoolNumberTxs->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        labelMemoryUsage->setText(QApplication::translate("RPCConsole", "Memory usage", Q_NULLPTR));
        mempoolSize->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        labelDebugLogfile->setText(QApplication::translate("RPCConsole", "Debug log file", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        openDebugLogfileButton->setToolTip(QApplication::translate("RPCConsole", "Open the %1 debug log file from the current data directory. This can take a few seconds for large log files.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        openDebugLogfileButton->setText(QApplication::translate("RPCConsole", "&Open", Q_NULLPTR));
        labelInstantSendLockCount->setText(QApplication::translate("RPCConsole", "InstantSend locks", Q_NULLPTR));
        instantSendLockCount->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        fontSmallerButton->setToolTip(QApplication::translate("RPCConsole", "Decrease font size", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        fontBiggerButton->setToolTip(QApplication::translate("RPCConsole", "Increase font size", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        clearButton->setToolTip(QApplication::translate("RPCConsole", "Clear console", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        promptIcon->setText(QString());
        lineEdit->setPlaceholderText(QString());
        btnClearTrafficGraph->setText(QApplication::translate("RPCConsole", "&Reset", Q_NULLPTR));
        banHeading->setText(QApplication::translate("RPCConsole", "Banned peers", Q_NULLPTR));
        peerHeading->setText(QApplication::translate("RPCConsole", "Select a peer to view detailed information.", Q_NULLPTR));
        label_30->setText(QApplication::translate("RPCConsole", "Whitelisted", Q_NULLPTR));
        peerWhitelisted->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        label_23->setText(QApplication::translate("RPCConsole", "Direction", Q_NULLPTR));
        peerDirection->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        label_21->setText(QApplication::translate("RPCConsole", "Version", Q_NULLPTR));
        peerVersion->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        label_28->setText(QApplication::translate("RPCConsole", "User Agent", Q_NULLPTR));
        peerSubversion->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        label_4->setText(QApplication::translate("RPCConsole", "Services", Q_NULLPTR));
        peerServices->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        label_29->setText(QApplication::translate("RPCConsole", "Starting Block", Q_NULLPTR));
        peerHeight->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        label_27->setText(QApplication::translate("RPCConsole", "Synced Headers", Q_NULLPTR));
        peerSyncHeight->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        label_25->setText(QApplication::translate("RPCConsole", "Synced Blocks", Q_NULLPTR));
        peerCommonHeight->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        label_24->setText(QApplication::translate("RPCConsole", "Ban Score", Q_NULLPTR));
        peerBanScore->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        label_22->setText(QApplication::translate("RPCConsole", "Connection Time", Q_NULLPTR));
        peerConnTime->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        label_15->setText(QApplication::translate("RPCConsole", "Last Send", Q_NULLPTR));
        peerLastSend->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        label_19->setText(QApplication::translate("RPCConsole", "Last Receive", Q_NULLPTR));
        peerLastRecv->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        label_18->setText(QApplication::translate("RPCConsole", "Sent", Q_NULLPTR));
        peerBytesSent->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        label_20->setText(QApplication::translate("RPCConsole", "Received", Q_NULLPTR));
        peerBytesRecv->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        label_26->setText(QApplication::translate("RPCConsole", "Ping Time", Q_NULLPTR));
        peerPingTime->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        peerPingWaitLabel->setToolTip(QApplication::translate("RPCConsole", "The duration of a currently outstanding ping.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        peerPingWaitLabel->setText(QApplication::translate("RPCConsole", "Ping Wait", Q_NULLPTR));
        peerPingWait->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        peerMinPingLabel->setText(QApplication::translate("RPCConsole", "Min Ping", Q_NULLPTR));
        peerMinPing->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        label_timeoffset->setText(QApplication::translate("RPCConsole", "Time Offset", Q_NULLPTR));
        timeoffset->setText(QApplication::translate("RPCConsole", "N/A", Q_NULLPTR));
        btn_salvagewallet->setText(QApplication::translate("RPCConsole", "Salvage wallet", Q_NULLPTR));
        btn_rescan->setText(QApplication::translate("RPCConsole", "Rescan blockchain files", Q_NULLPTR));
        btn_zapwallettxes1->setText(QApplication::translate("RPCConsole", "Recover transactions 1", Q_NULLPTR));
        btn_zapwallettxes2->setText(QApplication::translate("RPCConsole", "Recover transactions 2", Q_NULLPTR));
        btn_upgradewallet->setText(QApplication::translate("RPCConsole", "Upgrade wallet format", Q_NULLPTR));
        label_repair_helptext->setText(QApplication::translate("RPCConsole", "The buttons below will restart the wallet with command-line options to repair the wallet, fix issues with corrupt blockhain files or missing/obsolete transactions.", Q_NULLPTR));
        label_repair_salvage->setText(QApplication::translate("RPCConsole", "-salvagewallet: Attempt to recover private keys from a corrupt wallet.dat.", Q_NULLPTR));
        label_repair_rescan->setText(QApplication::translate("RPCConsole", "-rescan: Rescan the block chain for missing wallet transactions.", Q_NULLPTR));
        label_repair_zap1->setText(QApplication::translate("RPCConsole", "-zapwallettxes=1: Recover transactions from blockchain (keep meta-data, e.g. account owner).", Q_NULLPTR));
        label_repair_zap2->setText(QApplication::translate("RPCConsole", "-zapwallettxes=2: Recover transactions from blockchain (drop meta-data).", Q_NULLPTR));
        label_repair_upgrade->setText(QApplication::translate("RPCConsole", "-upgradewallet: Upgrade wallet to latest format on startup. (Note: this is NOT an update of the wallet itself!)", Q_NULLPTR));
        label_repair_header->setText(QApplication::translate("RPCConsole", "Wallet repair options.", Q_NULLPTR));
        btn_reindex->setText(QApplication::translate("RPCConsole", "Rebuild index", Q_NULLPTR));
        label_repair_reindex->setText(QApplication::translate("RPCConsole", "-reindex: Rebuild block chain index from current blk000??.dat files.", Q_NULLPTR));
        wallet_path->setText(QApplication::translate("RPCConsole", "Wallet Path", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RPCConsole: public Ui_RPCConsole {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBUGWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'optionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSDIALOG_H
#define UI_OPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/qvalidatedlineedit.h"
#include "qt/qvaluecombobox.h"

QT_BEGIN_NAMESPACE

class Ui_OptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_Buttons_2;
    QPushButton *btnMain;
    QPushButton *btnWallet;
    QPushButton *btnQuestChainSend;
    QPushButton *btnNetwork;
    QPushButton *btnDisplay;
    QPushButton *btnAppearance;
    QStackedWidget *stackedWidgetOptions;
    QWidget *pageMain;
    QVBoxLayout *verticalLayout_Main;
    QCheckBox *bitcoinAtStartup;
    QCheckBox *hideTrayIcon;
    QCheckBox *minimizeToTray;
    QCheckBox *minimizeOnClose;
    QHBoxLayout *horizontalLayout_2_Main;
    QLabel *databaseCacheLabel;
    QSpinBox *databaseCache;
    QLabel *databaseCacheUnitLabel;
    QSpacerItem *horizontalSpacer_2_Main;
    QHBoxLayout *horizontalLayout_3_Main;
    QLabel *threadsScriptVerifLabel;
    QSpinBox *threadsScriptVerif;
    QSpacerItem *horizontalSpacer_3_Main;
    QSpacerItem *verticalSpacer_Main;
    QWidget *pageWallet;
    QVBoxLayout *verticalLayout_Wallet;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *coinControlFeatures;
    QCheckBox *showMasternodesTab;
    QCheckBox *spendZeroConfChange;
    QCheckBox *questchainSendEnabled;
    QSpacerItem *verticalSpacer_Wallet;
    QWidget *pageQuestChainSend;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *showAdvancedPSUI;
    QCheckBox *showQuestChainSendPopups;
    QCheckBox *lowKeysWarning;
    QCheckBox *questchainSendMultiSession;
    QHBoxLayout *horizontalLayout_4_Wallet;
    QLabel *lblQuestChainSendRoundsText;
    QSpinBox *questchainSendRounds;
    QHBoxLayout *horizontalLayout;
    QLabel *lblQuestChainSendAmountText;
    QSpinBox *questchainSendAmount;
    QSpacerItem *verticalSpacerPS;
    QWidget *pageNetwork;
    QVBoxLayout *verticalLayout_Network;
    QCheckBox *mapPortUpnp;
    QCheckBox *allowIncoming;
    QCheckBox *connectSocks;
    QHBoxLayout *horizontalLayout_1_Network;
    QLabel *proxyIpLabel;
    QValidatedLineEdit *proxyIp;
    QLabel *proxyPortLabel;
    QLineEdit *proxyPort;
    QSpacerItem *horizontalSpacer_1_Network;
    QHBoxLayout *horizontalLayout_2_Network;
    QLabel *proxyActiveNets;
    QCheckBox *proxyReachIPv4;
    QCheckBox *proxyReachIPv6;
    QCheckBox *proxyReachTor;
    QSpacerItem *horizontalSpacer_2_Network;
    QCheckBox *connectSocksTor;
    QHBoxLayout *horizontalLayout_3_Network;
    QLabel *proxyIpTorLabel;
    QValidatedLineEdit *proxyIpTor;
    QLabel *proxyPortTorLabel;
    QLineEdit *proxyPortTor;
    QSpacerItem *horizontalSpacer_4_Network;
    QSpacerItem *verticalSpacer_Network;
    QWidget *pageDisplay;
    QVBoxLayout *verticalLayout_Display;
    QHBoxLayout *horizontalLayout_1_Display;
    QLabel *langLabel;
    QValueComboBox *lang;
    QLabel *label_3;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2_Display;
    QLabel *unitLabel;
    QValueComboBox *unit;
    QHBoxLayout *horizontalLayout_5_Display;
    QLabel *digitsLabel;
    QValueComboBox *digits;
    QHBoxLayout *horizontalLayout_3_Display;
    QLabel *thirdPartyTxUrlsLabel;
    QLineEdit *thirdPartyTxUrls;
    QSpacerItem *verticalSpacer;
    QWidget *pageAppearance;
    QVBoxLayout *verticalLayout_3;
    QWidget *widgetAppearance;
    QSpacerItem *verticalSpacer_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_Bottom;
    QHBoxLayout *horizontalLayout_Bottom;
    QLabel *overriddenByCommandLineInfoLabel;
    QSpacerItem *horizontalSpacer_Bottom;
    QLabel *overriddenByCommandLineLabel;
    QHBoxLayout *horizontalLayout_Buttons;
    QPushButton *resetButton;
    QSpacerItem *horizontalSpacer_1;
    QLabel *statusLabel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *OptionsDialog)
    {
        if (OptionsDialog->objectName().isEmpty())
            OptionsDialog->setObjectName(QStringLiteral("OptionsDialog"));
        OptionsDialog->resize(583, 420);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OptionsDialog->sizePolicy().hasHeightForWidth());
        OptionsDialog->setSizePolicy(sizePolicy);
        OptionsDialog->setModal(true);
        verticalLayout = new QVBoxLayout(OptionsDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_Buttons_2 = new QHBoxLayout();
        horizontalLayout_Buttons_2->setSpacing(0);
        horizontalLayout_Buttons_2->setObjectName(QStringLiteral("horizontalLayout_Buttons_2"));
        horizontalLayout_Buttons_2->setContentsMargins(-1, 0, -1, -1);
        btnMain = new QPushButton(OptionsDialog);
        btnMain->setObjectName(QStringLiteral("btnMain"));
        btnMain->setCheckable(true);

        horizontalLayout_Buttons_2->addWidget(btnMain);

        btnWallet = new QPushButton(OptionsDialog);
        btnWallet->setObjectName(QStringLiteral("btnWallet"));
        btnWallet->setCheckable(true);

        horizontalLayout_Buttons_2->addWidget(btnWallet);

        btnQuestChainSend = new QPushButton(OptionsDialog);
        btnQuestChainSend->setObjectName(QStringLiteral("btnQuestChainSend"));
        btnQuestChainSend->setCheckable(true);

        horizontalLayout_Buttons_2->addWidget(btnQuestChainSend);

        btnNetwork = new QPushButton(OptionsDialog);
        btnNetwork->setObjectName(QStringLiteral("btnNetwork"));
        btnNetwork->setCheckable(true);

        horizontalLayout_Buttons_2->addWidget(btnNetwork);

        btnDisplay = new QPushButton(OptionsDialog);
        btnDisplay->setObjectName(QStringLiteral("btnDisplay"));
        btnDisplay->setCheckable(true);

        horizontalLayout_Buttons_2->addWidget(btnDisplay);

        btnAppearance = new QPushButton(OptionsDialog);
        btnAppearance->setObjectName(QStringLiteral("btnAppearance"));
        btnAppearance->setCheckable(true);

        horizontalLayout_Buttons_2->addWidget(btnAppearance);


        verticalLayout->addLayout(horizontalLayout_Buttons_2);

        stackedWidgetOptions = new QStackedWidget(OptionsDialog);
        stackedWidgetOptions->setObjectName(QStringLiteral("stackedWidgetOptions"));
        stackedWidgetOptions->setMinimumSize(QSize(0, 0));
        pageMain = new QWidget();
        pageMain->setObjectName(QStringLiteral("pageMain"));
        verticalLayout_Main = new QVBoxLayout(pageMain);
        verticalLayout_Main->setObjectName(QStringLiteral("verticalLayout_Main"));
        bitcoinAtStartup = new QCheckBox(pageMain);
        bitcoinAtStartup->setObjectName(QStringLiteral("bitcoinAtStartup"));

        verticalLayout_Main->addWidget(bitcoinAtStartup);

        hideTrayIcon = new QCheckBox(pageMain);
        hideTrayIcon->setObjectName(QStringLiteral("hideTrayIcon"));

        verticalLayout_Main->addWidget(hideTrayIcon);

        minimizeToTray = new QCheckBox(pageMain);
        minimizeToTray->setObjectName(QStringLiteral("minimizeToTray"));

        verticalLayout_Main->addWidget(minimizeToTray);

        minimizeOnClose = new QCheckBox(pageMain);
        minimizeOnClose->setObjectName(QStringLiteral("minimizeOnClose"));

        verticalLayout_Main->addWidget(minimizeOnClose);

        horizontalLayout_2_Main = new QHBoxLayout();
        horizontalLayout_2_Main->setObjectName(QStringLiteral("horizontalLayout_2_Main"));
        databaseCacheLabel = new QLabel(pageMain);
        databaseCacheLabel->setObjectName(QStringLiteral("databaseCacheLabel"));
        databaseCacheLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_2_Main->addWidget(databaseCacheLabel);

        databaseCache = new QSpinBox(pageMain);
        databaseCache->setObjectName(QStringLiteral("databaseCache"));

        horizontalLayout_2_Main->addWidget(databaseCache);

        databaseCacheUnitLabel = new QLabel(pageMain);
        databaseCacheUnitLabel->setObjectName(QStringLiteral("databaseCacheUnitLabel"));
        databaseCacheUnitLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_2_Main->addWidget(databaseCacheUnitLabel);

        horizontalSpacer_2_Main = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2_Main->addItem(horizontalSpacer_2_Main);


        verticalLayout_Main->addLayout(horizontalLayout_2_Main);

        horizontalLayout_3_Main = new QHBoxLayout();
        horizontalLayout_3_Main->setObjectName(QStringLiteral("horizontalLayout_3_Main"));
        threadsScriptVerifLabel = new QLabel(pageMain);
        threadsScriptVerifLabel->setObjectName(QStringLiteral("threadsScriptVerifLabel"));
        threadsScriptVerifLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_3_Main->addWidget(threadsScriptVerifLabel);

        threadsScriptVerif = new QSpinBox(pageMain);
        threadsScriptVerif->setObjectName(QStringLiteral("threadsScriptVerif"));

        horizontalLayout_3_Main->addWidget(threadsScriptVerif);

        horizontalSpacer_3_Main = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3_Main->addItem(horizontalSpacer_3_Main);


        verticalLayout_Main->addLayout(horizontalLayout_3_Main);

        verticalSpacer_Main = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Main->addItem(verticalSpacer_Main);

        stackedWidgetOptions->addWidget(pageMain);
        pageWallet = new QWidget();
        pageWallet->setObjectName(QStringLiteral("pageWallet"));
        verticalLayout_Wallet = new QVBoxLayout(pageWallet);
        verticalLayout_Wallet->setObjectName(QStringLiteral("verticalLayout_Wallet"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        coinControlFeatures = new QCheckBox(pageWallet);
        coinControlFeatures->setObjectName(QStringLiteral("coinControlFeatures"));

        verticalLayout_2->addWidget(coinControlFeatures);

        showMasternodesTab = new QCheckBox(pageWallet);
        showMasternodesTab->setObjectName(QStringLiteral("showMasternodesTab"));

        verticalLayout_2->addWidget(showMasternodesTab);

        spendZeroConfChange = new QCheckBox(pageWallet);
        spendZeroConfChange->setObjectName(QStringLiteral("spendZeroConfChange"));

        verticalLayout_2->addWidget(spendZeroConfChange);

        questchainSendEnabled = new QCheckBox(pageWallet);
        questchainSendEnabled->setObjectName(QStringLiteral("questchainSendEnabled"));

        verticalLayout_2->addWidget(questchainSendEnabled);


        verticalLayout_Wallet->addLayout(verticalLayout_2);

        verticalSpacer_Wallet = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Wallet->addItem(verticalSpacer_Wallet);

        stackedWidgetOptions->addWidget(pageWallet);
        pageQuestChainSend = new QWidget();
        pageQuestChainSend->setObjectName(QStringLiteral("pageQuestChainSend"));
        verticalLayout_4 = new QVBoxLayout(pageQuestChainSend);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        showAdvancedPSUI = new QCheckBox(pageQuestChainSend);
        showAdvancedPSUI->setObjectName(QStringLiteral("showAdvancedPSUI"));

        verticalLayout_4->addWidget(showAdvancedPSUI);

        showQuestChainSendPopups = new QCheckBox(pageQuestChainSend);
        showQuestChainSendPopups->setObjectName(QStringLiteral("showQuestChainSendPopups"));

        verticalLayout_4->addWidget(showQuestChainSendPopups);

        lowKeysWarning = new QCheckBox(pageQuestChainSend);
        lowKeysWarning->setObjectName(QStringLiteral("lowKeysWarning"));

        verticalLayout_4->addWidget(lowKeysWarning);

        questchainSendMultiSession = new QCheckBox(pageQuestChainSend);
        questchainSendMultiSession->setObjectName(QStringLiteral("questchainSendMultiSession"));

        verticalLayout_4->addWidget(questchainSendMultiSession);

        horizontalLayout_4_Wallet = new QHBoxLayout();
        horizontalLayout_4_Wallet->setObjectName(QStringLiteral("horizontalLayout_4_Wallet"));
        lblQuestChainSendRoundsText = new QLabel(pageQuestChainSend);
        lblQuestChainSendRoundsText->setObjectName(QStringLiteral("lblQuestChainSendRoundsText"));

        horizontalLayout_4_Wallet->addWidget(lblQuestChainSendRoundsText);

        questchainSendRounds = new QSpinBox(pageQuestChainSend);
        questchainSendRounds->setObjectName(QStringLiteral("questchainSendRounds"));
        questchainSendRounds->setMinimum(2);
        questchainSendRounds->setMaximum(16);
        questchainSendRounds->setValue(4);

        horizontalLayout_4_Wallet->addWidget(questchainSendRounds);


        verticalLayout_4->addLayout(horizontalLayout_4_Wallet);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lblQuestChainSendAmountText = new QLabel(pageQuestChainSend);
        lblQuestChainSendAmountText->setObjectName(QStringLiteral("lblQuestChainSendAmountText"));
#ifndef QT_NO_STATUSTIP
        lblQuestChainSendAmountText->setStatusTip(QStringLiteral(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        lblQuestChainSendAmountText->setWhatsThis(QStringLiteral(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        lblQuestChainSendAmountText->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        lblQuestChainSendAmountText->setAccessibleDescription(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY

        horizontalLayout->addWidget(lblQuestChainSendAmountText);

        questchainSendAmount = new QSpinBox(pageQuestChainSend);
        questchainSendAmount->setObjectName(QStringLiteral("questchainSendAmount"));
        questchainSendAmount->setMinimum(2);
        questchainSendAmount->setMaximum(2000);
        questchainSendAmount->setSingleStep(10);
        questchainSendAmount->setValue(1000);

        horizontalLayout->addWidget(questchainSendAmount);


        verticalLayout_4->addLayout(horizontalLayout);

        verticalSpacerPS = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacerPS);

        stackedWidgetOptions->addWidget(pageQuestChainSend);
        pageNetwork = new QWidget();
        pageNetwork->setObjectName(QStringLiteral("pageNetwork"));
        verticalLayout_Network = new QVBoxLayout(pageNetwork);
        verticalLayout_Network->setObjectName(QStringLiteral("verticalLayout_Network"));
        mapPortUpnp = new QCheckBox(pageNetwork);
        mapPortUpnp->setObjectName(QStringLiteral("mapPortUpnp"));

        verticalLayout_Network->addWidget(mapPortUpnp);

        allowIncoming = new QCheckBox(pageNetwork);
        allowIncoming->setObjectName(QStringLiteral("allowIncoming"));

        verticalLayout_Network->addWidget(allowIncoming);

        connectSocks = new QCheckBox(pageNetwork);
        connectSocks->setObjectName(QStringLiteral("connectSocks"));

        verticalLayout_Network->addWidget(connectSocks);

        horizontalLayout_1_Network = new QHBoxLayout();
        horizontalLayout_1_Network->setObjectName(QStringLiteral("horizontalLayout_1_Network"));
        proxyIpLabel = new QLabel(pageNetwork);
        proxyIpLabel->setObjectName(QStringLiteral("proxyIpLabel"));
        proxyIpLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_1_Network->addWidget(proxyIpLabel);

        proxyIp = new QValidatedLineEdit(pageNetwork);
        proxyIp->setObjectName(QStringLiteral("proxyIp"));
        proxyIp->setMinimumSize(QSize(140, 0));
        proxyIp->setMaximumSize(QSize(140, 16777215));

        horizontalLayout_1_Network->addWidget(proxyIp);

        proxyPortLabel = new QLabel(pageNetwork);
        proxyPortLabel->setObjectName(QStringLiteral("proxyPortLabel"));
        proxyPortLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_1_Network->addWidget(proxyPortLabel);

        proxyPort = new QLineEdit(pageNetwork);
        proxyPort->setObjectName(QStringLiteral("proxyPort"));
        proxyPort->setMinimumSize(QSize(60, 0));
        proxyPort->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_1_Network->addWidget(proxyPort);

        horizontalSpacer_1_Network = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_1_Network->addItem(horizontalSpacer_1_Network);


        verticalLayout_Network->addLayout(horizontalLayout_1_Network);

        horizontalLayout_2_Network = new QHBoxLayout();
        horizontalLayout_2_Network->setObjectName(QStringLiteral("horizontalLayout_2_Network"));
        proxyActiveNets = new QLabel(pageNetwork);
        proxyActiveNets->setObjectName(QStringLiteral("proxyActiveNets"));
        proxyActiveNets->setTextFormat(Qt::PlainText);

        horizontalLayout_2_Network->addWidget(proxyActiveNets);

        proxyReachIPv4 = new QCheckBox(pageNetwork);
        proxyReachIPv4->setObjectName(QStringLiteral("proxyReachIPv4"));
        proxyReachIPv4->setEnabled(false);

        horizontalLayout_2_Network->addWidget(proxyReachIPv4);

        proxyReachIPv6 = new QCheckBox(pageNetwork);
        proxyReachIPv6->setObjectName(QStringLiteral("proxyReachIPv6"));
        proxyReachIPv6->setEnabled(false);

        horizontalLayout_2_Network->addWidget(proxyReachIPv6);

        proxyReachTor = new QCheckBox(pageNetwork);
        proxyReachTor->setObjectName(QStringLiteral("proxyReachTor"));
        proxyReachTor->setEnabled(false);

        horizontalLayout_2_Network->addWidget(proxyReachTor);

        horizontalSpacer_2_Network = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2_Network->addItem(horizontalSpacer_2_Network);


        verticalLayout_Network->addLayout(horizontalLayout_2_Network);

        connectSocksTor = new QCheckBox(pageNetwork);
        connectSocksTor->setObjectName(QStringLiteral("connectSocksTor"));

        verticalLayout_Network->addWidget(connectSocksTor);

        horizontalLayout_3_Network = new QHBoxLayout();
        horizontalLayout_3_Network->setObjectName(QStringLiteral("horizontalLayout_3_Network"));
        proxyIpTorLabel = new QLabel(pageNetwork);
        proxyIpTorLabel->setObjectName(QStringLiteral("proxyIpTorLabel"));
        proxyIpTorLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_3_Network->addWidget(proxyIpTorLabel);

        proxyIpTor = new QValidatedLineEdit(pageNetwork);
        proxyIpTor->setObjectName(QStringLiteral("proxyIpTor"));
        proxyIpTor->setMinimumSize(QSize(140, 0));
        proxyIpTor->setMaximumSize(QSize(140, 16777215));

        horizontalLayout_3_Network->addWidget(proxyIpTor);

        proxyPortTorLabel = new QLabel(pageNetwork);
        proxyPortTorLabel->setObjectName(QStringLiteral("proxyPortTorLabel"));
        proxyPortTorLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_3_Network->addWidget(proxyPortTorLabel);

        proxyPortTor = new QLineEdit(pageNetwork);
        proxyPortTor->setObjectName(QStringLiteral("proxyPortTor"));
        proxyPortTor->setMinimumSize(QSize(60, 0));
        proxyPortTor->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_3_Network->addWidget(proxyPortTor);

        horizontalSpacer_4_Network = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3_Network->addItem(horizontalSpacer_4_Network);


        verticalLayout_Network->addLayout(horizontalLayout_3_Network);

        verticalSpacer_Network = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Network->addItem(verticalSpacer_Network);

        stackedWidgetOptions->addWidget(pageNetwork);
        pageDisplay = new QWidget();
        pageDisplay->setObjectName(QStringLiteral("pageDisplay"));
        verticalLayout_Display = new QVBoxLayout(pageDisplay);
        verticalLayout_Display->setObjectName(QStringLiteral("verticalLayout_Display"));
        horizontalLayout_1_Display = new QHBoxLayout();
        horizontalLayout_1_Display->setObjectName(QStringLiteral("horizontalLayout_1_Display"));
        langLabel = new QLabel(pageDisplay);
        langLabel->setObjectName(QStringLiteral("langLabel"));
        langLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_1_Display->addWidget(langLabel);

        lang = new QValueComboBox(pageDisplay);
        lang->setObjectName(QStringLiteral("lang"));

        horizontalLayout_1_Display->addWidget(lang);


        verticalLayout_Display->addLayout(horizontalLayout_1_Display);

        label_3 = new QLabel(pageDisplay);
        label_3->setObjectName(QStringLiteral("label_3"));
#ifndef QT_NO_TOOLTIP
        label_3->setToolTip(QStringLiteral(""));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        label_3->setStatusTip(QStringLiteral(""));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        label_3->setWhatsThis(QStringLiteral(""));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        label_3->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        label_3->setWordWrap(true);
        label_3->setOpenExternalLinks(true);
        label_3->setTextInteractionFlags(Qt::TextBrowserInteraction);

        verticalLayout_Display->addWidget(label_3);

        line = new QFrame(pageDisplay);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_Display->addWidget(line);

        horizontalLayout_2_Display = new QHBoxLayout();
        horizontalLayout_2_Display->setObjectName(QStringLiteral("horizontalLayout_2_Display"));
        unitLabel = new QLabel(pageDisplay);
        unitLabel->setObjectName(QStringLiteral("unitLabel"));
        unitLabel->setTextFormat(Qt::PlainText);

        horizontalLayout_2_Display->addWidget(unitLabel);

        unit = new QValueComboBox(pageDisplay);
        unit->setObjectName(QStringLiteral("unit"));

        horizontalLayout_2_Display->addWidget(unit);


        verticalLayout_Display->addLayout(horizontalLayout_2_Display);

        horizontalLayout_5_Display = new QHBoxLayout();
        horizontalLayout_5_Display->setObjectName(QStringLiteral("horizontalLayout_5_Display"));
        digitsLabel = new QLabel(pageDisplay);
        digitsLabel->setObjectName(QStringLiteral("digitsLabel"));

        horizontalLayout_5_Display->addWidget(digitsLabel);

        digits = new QValueComboBox(pageDisplay);
        digits->setObjectName(QStringLiteral("digits"));

        horizontalLayout_5_Display->addWidget(digits);


        verticalLayout_Display->addLayout(horizontalLayout_5_Display);

        horizontalLayout_3_Display = new QHBoxLayout();
        horizontalLayout_3_Display->setObjectName(QStringLiteral("horizontalLayout_3_Display"));
        thirdPartyTxUrlsLabel = new QLabel(pageDisplay);
        thirdPartyTxUrlsLabel->setObjectName(QStringLiteral("thirdPartyTxUrlsLabel"));

        horizontalLayout_3_Display->addWidget(thirdPartyTxUrlsLabel);

        thirdPartyTxUrls = new QLineEdit(pageDisplay);
        thirdPartyTxUrls->setObjectName(QStringLiteral("thirdPartyTxUrls"));

        horizontalLayout_3_Display->addWidget(thirdPartyTxUrls);


        verticalLayout_Display->addLayout(horizontalLayout_3_Display);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Display->addItem(verticalSpacer);

        stackedWidgetOptions->addWidget(pageDisplay);
        pageAppearance = new QWidget();
        pageAppearance->setObjectName(QStringLiteral("pageAppearance"));
        verticalLayout_3 = new QVBoxLayout(pageAppearance);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        widgetAppearance = new QWidget(pageAppearance);
        widgetAppearance->setObjectName(QStringLiteral("widgetAppearance"));

        verticalLayout_3->addWidget(widgetAppearance);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        stackedWidgetOptions->addWidget(pageAppearance);

        verticalLayout->addWidget(stackedWidgetOptions);

        frame = new QFrame(OptionsDialog);
        frame->setObjectName(QStringLiteral("frame"));
        verticalLayout_Bottom = new QVBoxLayout(frame);
        verticalLayout_Bottom->setObjectName(QStringLiteral("verticalLayout_Bottom"));
        horizontalLayout_Bottom = new QHBoxLayout();
        horizontalLayout_Bottom->setObjectName(QStringLiteral("horizontalLayout_Bottom"));
        overriddenByCommandLineInfoLabel = new QLabel(frame);
        overriddenByCommandLineInfoLabel->setObjectName(QStringLiteral("overriddenByCommandLineInfoLabel"));
        overriddenByCommandLineInfoLabel->setTextFormat(Qt::PlainText);
        overriddenByCommandLineInfoLabel->setWordWrap(true);

        horizontalLayout_Bottom->addWidget(overriddenByCommandLineInfoLabel);

        horizontalSpacer_Bottom = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Bottom->addItem(horizontalSpacer_Bottom);


        verticalLayout_Bottom->addLayout(horizontalLayout_Bottom);

        overriddenByCommandLineLabel = new QLabel(frame);
        overriddenByCommandLineLabel->setObjectName(QStringLiteral("overriddenByCommandLineLabel"));
        overriddenByCommandLineLabel->setTextFormat(Qt::PlainText);
        overriddenByCommandLineLabel->setWordWrap(true);

        verticalLayout_Bottom->addWidget(overriddenByCommandLineLabel);


        verticalLayout->addWidget(frame);

        horizontalLayout_Buttons = new QHBoxLayout();
        horizontalLayout_Buttons->setObjectName(QStringLiteral("horizontalLayout_Buttons"));
        resetButton = new QPushButton(OptionsDialog);
        resetButton->setObjectName(QStringLiteral("resetButton"));
        resetButton->setAutoDefault(false);

        horizontalLayout_Buttons->addWidget(resetButton);

        horizontalSpacer_1 = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Buttons->addItem(horizontalSpacer_1);

        statusLabel = new QLabel(OptionsDialog);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));
        statusLabel->setMinimumSize(QSize(200, 0));
        statusLabel->setTextFormat(Qt::PlainText);
        statusLabel->setWordWrap(true);

        horizontalLayout_Buttons->addWidget(statusLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 48, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Buttons->addItem(horizontalSpacer_2);

        okButton = new QPushButton(OptionsDialog);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setAutoDefault(false);

        horizontalLayout_Buttons->addWidget(okButton);

        cancelButton = new QPushButton(OptionsDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setAutoDefault(false);

        horizontalLayout_Buttons->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout_Buttons);

#ifndef QT_NO_SHORTCUT
        databaseCacheLabel->setBuddy(databaseCache);
        threadsScriptVerifLabel->setBuddy(threadsScriptVerif);
        proxyIpLabel->setBuddy(proxyIp);
        proxyPortLabel->setBuddy(proxyPort);
        proxyIpTorLabel->setBuddy(proxyIpTor);
        proxyPortTorLabel->setBuddy(proxyPortTor);
        langLabel->setBuddy(lang);
        unitLabel->setBuddy(unit);
        thirdPartyTxUrlsLabel->setBuddy(thirdPartyTxUrls);
#endif // QT_NO_SHORTCUT

        retranslateUi(OptionsDialog);

        stackedWidgetOptions->setCurrentIndex(5);
        okButton->setDefault(true);


        QMetaObject::connectSlotsByName(OptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *OptionsDialog)
    {
        OptionsDialog->setWindowTitle(QApplication::translate("OptionsDialog", "Options", Q_NULLPTR));
        btnMain->setText(QApplication::translate("OptionsDialog", "&Main", Q_NULLPTR));
        btnWallet->setText(QApplication::translate("OptionsDialog", "W&allet", Q_NULLPTR));
        btnQuestChainSend->setText(QApplication::translate("OptionsDialog", "QuestChainSend", Q_NULLPTR));
        btnNetwork->setText(QApplication::translate("OptionsDialog", "&Network", Q_NULLPTR));
        btnDisplay->setText(QApplication::translate("OptionsDialog", "&Display", Q_NULLPTR));
        btnAppearance->setText(QApplication::translate("OptionsDialog", "&Appearance", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        bitcoinAtStartup->setToolTip(QApplication::translate("OptionsDialog", "Automatically start %1 after logging in to the system.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        bitcoinAtStartup->setText(QApplication::translate("OptionsDialog", "&Start %1 on system login", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        hideTrayIcon->setToolTip(QApplication::translate("OptionsDialog", "Hide the icon from the system tray.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        hideTrayIcon->setText(QApplication::translate("OptionsDialog", "&Hide tray icon", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        minimizeToTray->setToolTip(QApplication::translate("OptionsDialog", "Show only a tray icon after minimizing the window.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        minimizeToTray->setText(QApplication::translate("OptionsDialog", "&Minimize to the tray instead of the taskbar", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        minimizeOnClose->setToolTip(QApplication::translate("OptionsDialog", "Minimize instead of exit the application when the window is closed. When this option is enabled, the application will be closed only after selecting Exit in the menu.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        minimizeOnClose->setText(QApplication::translate("OptionsDialog", "M&inimize on close", Q_NULLPTR));
        databaseCacheLabel->setText(QApplication::translate("OptionsDialog", "Size of &database cache", Q_NULLPTR));
        databaseCacheUnitLabel->setText(QApplication::translate("OptionsDialog", "MB", Q_NULLPTR));
        threadsScriptVerifLabel->setText(QApplication::translate("OptionsDialog", "Number of script &verification threads", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        threadsScriptVerif->setToolTip(QApplication::translate("OptionsDialog", "(0 = auto, <0 = leave that many cores free)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        coinControlFeatures->setToolTip(QApplication::translate("OptionsDialog", "Whether to show coin control features or not.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        coinControlFeatures->setText(QApplication::translate("OptionsDialog", "Enable coin &control features", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        showMasternodesTab->setToolTip(QApplication::translate("OptionsDialog", "Show additional tab listing all your masternodes in first sub-tab<br/>and all masternodes on the network in second sub-tab.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        showMasternodesTab->setText(QApplication::translate("OptionsDialog", "Show Masternodes Tab", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        spendZeroConfChange->setToolTip(QApplication::translate("OptionsDialog", "If you disable the spending of unconfirmed change, the change from a transaction<br/>cannot be used until that transaction has at least one confirmation.<br/>This also affects how your balance is computed.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        spendZeroConfChange->setText(QApplication::translate("OptionsDialog", "&Spend unconfirmed change", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        questchainSendEnabled->setToolTip(QApplication::translate("OptionsDialog", "Show mixing interface on Overview screen and reveal QuestChainSend screen which allows to spend fully mixed coins only.<br/>A new tab with more settings will also appear in this dialog, please make sure to check them before mixing your coins.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        questchainSendEnabled->setText(QApplication::translate("OptionsDialog", "Enable QuestChainSend features", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        showAdvancedPSUI->setToolTip(QApplication::translate("OptionsDialog", "Show additional information and buttons for QuestChainSend on overview screen.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        showAdvancedPSUI->setText(QApplication::translate("OptionsDialog", "Enable advanced QuestChainSend interface", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        showQuestChainSendPopups->setToolTip(QApplication::translate("OptionsDialog", "Show system popups for QuestChainSend mixing transactions<br/>just like for all other transaction types.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        showQuestChainSendPopups->setText(QApplication::translate("OptionsDialog", "Show popups for QuestChainSend transactions", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lowKeysWarning->setToolTip(QApplication::translate("OptionsDialog", "Show warning dialog when QuestChainSend detects that wallet has very low number of keys left.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        lowKeysWarning->setText(QApplication::translate("OptionsDialog", "Warn if QuestChainSend is running out of keys", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        questchainSendMultiSession->setToolTip(QApplication::translate("OptionsDialog", "Whether to use experimental QuestChainSend mode with multiple mixing sessions per block.<br/>Note: You must use this feature carefully.<br/>Make sure you always have recent wallet (auto)backup in a safe place!", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        questchainSendMultiSession->setText(QApplication::translate("OptionsDialog", "Enable QuestChainSend &multi-session", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lblQuestChainSendRoundsText->setToolTip(QApplication::translate("OptionsDialog", "This setting determines the amount of individual masternodes that an input will be mixed through.<br/>More rounds of mixing gives a higher degree of privacy, but also costs more in fees.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        lblQuestChainSendRoundsText->setText(QApplication::translate("OptionsDialog", "QuestChainSend rounds to use", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lblQuestChainSendAmountText->setToolTip(QApplication::translate("OptionsDialog", "This amount acts as a threshold to turn off QuestChainSend once it's reached.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        lblQuestChainSendAmountText->setText(QApplication::translate("OptionsDialog", "Target QuestChainSend balance", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        mapPortUpnp->setToolTip(QApplication::translate("OptionsDialog", "Automatically open the QuestChain Core client port on the router. This only works when your router supports UPnP and it is enabled.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mapPortUpnp->setText(QApplication::translate("OptionsDialog", "Map port using &UPnP", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        allowIncoming->setToolTip(QApplication::translate("OptionsDialog", "Accept connections from outside.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        allowIncoming->setText(QApplication::translate("OptionsDialog", "Allow incomin&g connections", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        connectSocks->setToolTip(QApplication::translate("OptionsDialog", "Connect to the QuestChain network through a SOCKS5 proxy.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        connectSocks->setText(QApplication::translate("OptionsDialog", "&Connect through SOCKS5 proxy (default proxy):", Q_NULLPTR));
        proxyIpLabel->setText(QApplication::translate("OptionsDialog", "Proxy &IP:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        proxyIp->setToolTip(QApplication::translate("OptionsDialog", "IP address of the proxy (e.g. IPv4: 127.0.0.1 / IPv6: ::1)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        proxyPortLabel->setText(QApplication::translate("OptionsDialog", "&Port:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        proxyPort->setToolTip(QApplication::translate("OptionsDialog", "Port of the proxy (e.g. 9050)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        proxyActiveNets->setText(QApplication::translate("OptionsDialog", "Used for reaching peers via:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        proxyReachIPv4->setToolTip(QApplication::translate("OptionsDialog", "Shows if the supplied default SOCKS5 proxy is used to reach peers via this network type.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        proxyReachIPv4->setText(QApplication::translate("OptionsDialog", "IPv4", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        proxyReachIPv6->setToolTip(QApplication::translate("OptionsDialog", "Shows if the supplied default SOCKS5 proxy is used to reach peers via this network type.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        proxyReachIPv6->setText(QApplication::translate("OptionsDialog", "IPv6", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        proxyReachTor->setToolTip(QApplication::translate("OptionsDialog", "Shows if the supplied default SOCKS5 proxy is used to reach peers via this network type.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        proxyReachTor->setText(QApplication::translate("OptionsDialog", "Tor", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        connectSocksTor->setToolTip(QApplication::translate("OptionsDialog", "Connect to the QuestChain network through a separate SOCKS5 proxy for Tor hidden services.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        connectSocksTor->setText(QApplication::translate("OptionsDialog", "Use separate SOCKS&5 proxy to reach peers via Tor hidden services:", Q_NULLPTR));
        proxyIpTorLabel->setText(QApplication::translate("OptionsDialog", "Proxy &IP:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        proxyIpTor->setToolTip(QApplication::translate("OptionsDialog", "IP address of the proxy (e.g. IPv4: 127.0.0.1 / IPv6: ::1)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        proxyPortTorLabel->setText(QApplication::translate("OptionsDialog", "&Port:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        proxyPortTor->setToolTip(QApplication::translate("OptionsDialog", "Port of the proxy (e.g. 9050)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        langLabel->setText(QApplication::translate("OptionsDialog", "User Interface &language:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lang->setToolTip(QApplication::translate("OptionsDialog", "The user interface language can be set here. This setting will take effect after restarting %1.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("OptionsDialog", "Language missing or translation incomplete? Help contributing translations here:\n"
"https://www.transifex.com/projects/p/questchain/", Q_NULLPTR));
        unitLabel->setText(QApplication::translate("OptionsDialog", "&Unit to show amounts in:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        unit->setToolTip(QApplication::translate("OptionsDialog", "Choose the default subdivision unit to show in the interface and when sending coins.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        digitsLabel->setText(QApplication::translate("OptionsDialog", "Decimal digits", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        thirdPartyTxUrlsLabel->setToolTip(QApplication::translate("OptionsDialog", "Third party URLs (e.g. a block explorer) that appear in the transactions tab as context menu items.<br/>%s in the URL is replaced by transaction hash. Multiple URLs are separated by vertical bar |.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        thirdPartyTxUrlsLabel->setText(QApplication::translate("OptionsDialog", "&Third party transaction URLs", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        thirdPartyTxUrls->setToolTip(QApplication::translate("OptionsDialog", "Third party URLs (e.g. a block explorer) that appear in the transactions tab as context menu items.<br/>%s in the URL is replaced by transaction hash. Multiple URLs are separated by vertical bar |.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        overriddenByCommandLineInfoLabel->setText(QApplication::translate("OptionsDialog", "Active command-line options that override above options:", Q_NULLPTR));
        overriddenByCommandLineLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        resetButton->setToolTip(QApplication::translate("OptionsDialog", "Reset all client options to default.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        resetButton->setText(QApplication::translate("OptionsDialog", "&Reset Options", Q_NULLPTR));
        statusLabel->setText(QString());
        okButton->setText(QApplication::translate("OptionsDialog", "&OK", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("OptionsDialog", "&Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OptionsDialog: public Ui_OptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSDIALOG_H

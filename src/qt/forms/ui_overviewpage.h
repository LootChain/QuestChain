/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QVBoxLayout *topLayout;
    QLabel *labelAlerts;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacerLeft;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *labelWalletStatus;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout;
    QLabel *labelWatchPending;
    QLabel *labelUnconfirmed;
    QLabel *labelWatchImmature;
    QFrame *lineSpendableBalance;
    QFrame *lineWatchBalance;
    QLabel *labelTotalText;
    QLabel *labelImmature;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelImmatureText;
    QLabel *labelTotal;
    QLabel *labelWatchTotal;
    QLabel *labelWatchonly;
    QLabel *labelBalanceText;
    QLabel *labelBalance;
    QLabel *labelWatchAvailable;
    QLabel *labelPendingText;
    QLabel *labelSpendable;
    QFrame *frameQuestChainSend;
    QVBoxLayout *VerticalLayout_PS1;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelQuestChainSendHeader;
    QLabel *labelQuestChainSendSyncStatus;
    QSpacerItem *horizontalSpacer_4;
    QFormLayout *questchainSendFormLayout;
    QLabel *labelQuestChainSendEnabledText;
    QLabel *labelQuestChainSendEnabled;
    QLabel *labelCompletitionText;
    QProgressBar *questchainSendProgress;
    QLabel *labelAnonymizedText;
    QLabel *labelAnonymized;
    QLabel *labelAmountAndRoundsText;
    QLabel *labelAmountRounds;
    QLabel *labelSubmittedDenomText;
    QLabel *labelSubmittedDenom;
    QVBoxLayout *VerticalLayout_PS;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *toggleQuestChainSend;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacerCenter;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *labelTransactionsStatus;
    QSpacerItem *horizontalSpacer;
    QListView *listTransactions;
    QSpacerItem *horizontalSpacerRight;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QStringLiteral("OverviewPage"));
        OverviewPage->resize(960, 585);
        OverviewPage->setMinimumSize(QSize(960, 0));
        topLayout = new QVBoxLayout(OverviewPage);
        topLayout->setObjectName(QStringLiteral("topLayout"));
        labelAlerts = new QLabel(OverviewPage);
        labelAlerts->setObjectName(QStringLiteral("labelAlerts"));
        labelAlerts->setVisible(false);
        labelAlerts->setWordWrap(true);
        labelAlerts->setMargin(3);
        labelAlerts->setTextInteractionFlags(Qt::TextSelectableByMouse);

        topLayout->addWidget(labelAlerts);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacerLeft = new QSpacerItem(10, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacerLeft);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame = new QFrame(OverviewPage);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        labelWalletStatus = new QLabel(frame);
        labelWalletStatus->setObjectName(QStringLiteral("labelWalletStatus"));
        labelWalletStatus->setText(QStringLiteral("(out of sync)"));
        labelWalletStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(labelWalletStatus);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_4);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(12);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelWatchPending = new QLabel(frame);
        labelWatchPending->setObjectName(QStringLiteral("labelWatchPending"));
        labelWatchPending->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchPending->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 BTC"));
        labelWatchPending->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchPending->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchPending, 2, 2, 1, 1);

        labelUnconfirmed = new QLabel(frame);
        labelUnconfirmed->setObjectName(QStringLiteral("labelUnconfirmed"));
        labelUnconfirmed->setCursor(QCursor(Qt::IBeamCursor));
        labelUnconfirmed->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 BTC"));
        labelUnconfirmed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelUnconfirmed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelUnconfirmed, 2, 1, 1, 1);

        labelWatchImmature = new QLabel(frame);
        labelWatchImmature->setObjectName(QStringLiteral("labelWatchImmature"));
        labelWatchImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchImmature->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 BTC"));
        labelWatchImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchImmature, 3, 2, 1, 1);

        lineSpendableBalance = new QFrame(frame);
        lineSpendableBalance->setObjectName(QStringLiteral("lineSpendableBalance"));
        lineSpendableBalance->setFrameShape(QFrame::HLine);
        lineSpendableBalance->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(lineSpendableBalance, 4, 0, 1, 2);

        lineWatchBalance = new QFrame(frame);
        lineWatchBalance->setObjectName(QStringLiteral("lineWatchBalance"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineWatchBalance->sizePolicy().hasHeightForWidth());
        lineWatchBalance->setSizePolicy(sizePolicy);
        lineWatchBalance->setMinimumSize(QSize(140, 0));
        lineWatchBalance->setFrameShape(QFrame::HLine);
        lineWatchBalance->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(lineWatchBalance, 4, 2, 1, 1);

        labelTotalText = new QLabel(frame);
        labelTotalText->setObjectName(QStringLiteral("labelTotalText"));

        gridLayout->addWidget(labelTotalText, 5, 0, 1, 1);

        labelImmature = new QLabel(frame);
        labelImmature->setObjectName(QStringLiteral("labelImmature"));
        labelImmature->setCursor(QCursor(Qt::IBeamCursor));
        labelImmature->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 BTC"));
        labelImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelImmature, 3, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 3, 1, 1);

        labelImmatureText = new QLabel(frame);
        labelImmatureText->setObjectName(QStringLiteral("labelImmatureText"));

        gridLayout->addWidget(labelImmatureText, 3, 0, 1, 1);

        labelTotal = new QLabel(frame);
        labelTotal->setObjectName(QStringLiteral("labelTotal"));
        labelTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelTotal->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 BTC"));
        labelTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelTotal, 5, 1, 1, 1);

        labelWatchTotal = new QLabel(frame);
        labelWatchTotal->setObjectName(QStringLiteral("labelWatchTotal"));
        labelWatchTotal->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchTotal->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 BTC"));
        labelWatchTotal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchTotal->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchTotal, 5, 2, 1, 1);

        labelWatchonly = new QLabel(frame);
        labelWatchonly->setObjectName(QStringLiteral("labelWatchonly"));
        labelWatchonly->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelWatchonly, 0, 2, 1, 1);

        labelBalanceText = new QLabel(frame);
        labelBalanceText->setObjectName(QStringLiteral("labelBalanceText"));

        gridLayout->addWidget(labelBalanceText, 1, 0, 1, 1);

        labelBalance = new QLabel(frame);
        labelBalance->setObjectName(QStringLiteral("labelBalance"));
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 BTC"));
        labelBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelBalance, 1, 1, 1, 1);

        labelWatchAvailable = new QLabel(frame);
        labelWatchAvailable->setObjectName(QStringLiteral("labelWatchAvailable"));
        labelWatchAvailable->setCursor(QCursor(Qt::IBeamCursor));
        labelWatchAvailable->setText(QString::fromUtf8("0.000\342\200\211000\342\200\21100 BTC"));
        labelWatchAvailable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelWatchAvailable->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(labelWatchAvailable, 1, 2, 1, 1);

        labelPendingText = new QLabel(frame);
        labelPendingText->setObjectName(QStringLiteral("labelPendingText"));

        gridLayout->addWidget(labelPendingText, 2, 0, 1, 1);

        labelSpendable = new QLabel(frame);
        labelSpendable->setObjectName(QStringLiteral("labelSpendable"));
        labelSpendable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelSpendable, 0, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout);


        verticalLayout_2->addWidget(frame);

        frameQuestChainSend = new QFrame(OverviewPage);
        frameQuestChainSend->setObjectName(QStringLiteral("frameQuestChainSend"));
        frameQuestChainSend->setLayoutDirection(Qt::LeftToRight);
        frameQuestChainSend->setFrameShape(QFrame::StyledPanel);
        frameQuestChainSend->setFrameShadow(QFrame::Raised);
        VerticalLayout_PS1 = new QVBoxLayout(frameQuestChainSend);
        VerticalLayout_PS1->setObjectName(QStringLiteral("VerticalLayout_PS1"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        labelQuestChainSendHeader = new QLabel(frameQuestChainSend);
        labelQuestChainSendHeader->setObjectName(QStringLiteral("labelQuestChainSendHeader"));

        horizontalLayout_5->addWidget(labelQuestChainSendHeader);

        labelQuestChainSendSyncStatus = new QLabel(frameQuestChainSend);
        labelQuestChainSendSyncStatus->setObjectName(QStringLiteral("labelQuestChainSendSyncStatus"));
        labelQuestChainSendSyncStatus->setText(QStringLiteral("(out of sync)"));
        labelQuestChainSendSyncStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(labelQuestChainSendSyncStatus);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        VerticalLayout_PS1->addLayout(horizontalLayout_5);

        questchainSendFormLayout = new QFormLayout();
        questchainSendFormLayout->setObjectName(QStringLiteral("questchainSendFormLayout"));
        questchainSendFormLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        questchainSendFormLayout->setHorizontalSpacing(11);
        questchainSendFormLayout->setVerticalSpacing(12);
        labelQuestChainSendEnabledText = new QLabel(frameQuestChainSend);
        labelQuestChainSendEnabledText->setObjectName(QStringLiteral("labelQuestChainSendEnabledText"));

        questchainSendFormLayout->setWidget(0, QFormLayout::LabelRole, labelQuestChainSendEnabledText);

        labelQuestChainSendEnabled = new QLabel(frameQuestChainSend);
        labelQuestChainSendEnabled->setObjectName(QStringLiteral("labelQuestChainSendEnabled"));

        questchainSendFormLayout->setWidget(0, QFormLayout::FieldRole, labelQuestChainSendEnabled);

        labelCompletitionText = new QLabel(frameQuestChainSend);
        labelCompletitionText->setObjectName(QStringLiteral("labelCompletitionText"));

        questchainSendFormLayout->setWidget(1, QFormLayout::LabelRole, labelCompletitionText);

        questchainSendProgress = new QProgressBar(frameQuestChainSend);
        questchainSendProgress->setObjectName(QStringLiteral("questchainSendProgress"));
        questchainSendProgress->setMaximumSize(QSize(154, 16777215));
        questchainSendProgress->setValue(0);

        questchainSendFormLayout->setWidget(1, QFormLayout::FieldRole, questchainSendProgress);

        labelAnonymizedText = new QLabel(frameQuestChainSend);
        labelAnonymizedText->setObjectName(QStringLiteral("labelAnonymizedText"));

        questchainSendFormLayout->setWidget(2, QFormLayout::LabelRole, labelAnonymizedText);

        labelAnonymized = new QLabel(frameQuestChainSend);
        labelAnonymized->setObjectName(QStringLiteral("labelAnonymized"));
        labelAnonymized->setText(QStringLiteral("0 QCH"));

        questchainSendFormLayout->setWidget(2, QFormLayout::FieldRole, labelAnonymized);

        labelAmountAndRoundsText = new QLabel(frameQuestChainSend);
        labelAmountAndRoundsText->setObjectName(QStringLiteral("labelAmountAndRoundsText"));

        questchainSendFormLayout->setWidget(3, QFormLayout::LabelRole, labelAmountAndRoundsText);

        labelAmountRounds = new QLabel(frameQuestChainSend);
        labelAmountRounds->setObjectName(QStringLiteral("labelAmountRounds"));

        questchainSendFormLayout->setWidget(3, QFormLayout::FieldRole, labelAmountRounds);

        labelSubmittedDenomText = new QLabel(frameQuestChainSend);
        labelSubmittedDenomText->setObjectName(QStringLiteral("labelSubmittedDenomText"));

        questchainSendFormLayout->setWidget(4, QFormLayout::LabelRole, labelSubmittedDenomText);

        labelSubmittedDenom = new QLabel(frameQuestChainSend);
        labelSubmittedDenom->setObjectName(QStringLiteral("labelSubmittedDenom"));
        labelSubmittedDenom->setWordWrap(true);

        questchainSendFormLayout->setWidget(4, QFormLayout::FieldRole, labelSubmittedDenom);


        VerticalLayout_PS1->addLayout(questchainSendFormLayout);

        VerticalLayout_PS = new QVBoxLayout();
        VerticalLayout_PS->setObjectName(QStringLiteral("VerticalLayout_PS"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        toggleQuestChainSend = new QPushButton(frameQuestChainSend);
        toggleQuestChainSend->setObjectName(QStringLiteral("toggleQuestChainSend"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toggleQuestChainSend->sizePolicy().hasHeightForWidth());
        toggleQuestChainSend->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(toggleQuestChainSend);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        VerticalLayout_PS->addLayout(horizontalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        VerticalLayout_PS->addItem(verticalSpacer_3);


        VerticalLayout_PS1->addLayout(VerticalLayout_PS);


        verticalLayout_2->addWidget(frameQuestChainSend);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacerCenter = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacerCenter);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        frame_2 = new QFrame(OverviewPage);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        labelTransactionsStatus = new QLabel(frame_2);
        labelTransactionsStatus->setObjectName(QStringLiteral("labelTransactionsStatus"));
        labelTransactionsStatus->setText(QStringLiteral("(out of sync)"));
        labelTransactionsStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labelTransactionsStatus);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        listTransactions = new QListView(frame_2);
        listTransactions->setObjectName(QStringLiteral("listTransactions"));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout->addWidget(listTransactions);


        verticalLayout_3->addWidget(frame_2);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalSpacerRight = new QSpacerItem(10, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacerRight);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(4, 1);

        topLayout->addLayout(horizontalLayout);


        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", Q_NULLPTR));
        label_5->setText(QApplication::translate("OverviewPage", "Balances", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelWalletStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the QuestChain network after a connection is established, but this process has not completed yet.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchPending->setToolTip(QApplication::translate("OverviewPage", "Unconfirmed transactions to watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelUnconfirmed->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the spendable balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchImmature->setToolTip(QApplication::translate("OverviewPage", "Mined balance in watch-only addresses that has not yet matured", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelTotalText->setText(QApplication::translate("OverviewPage", "Total:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelImmature->setToolTip(QApplication::translate("OverviewPage", "Mined balance that has not yet matured", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelImmatureText->setText(QApplication::translate("OverviewPage", "Immature:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelTotal->setToolTip(QApplication::translate("OverviewPage", "Your current total balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchTotal->setToolTip(QApplication::translate("OverviewPage", "Current total balance in watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelWatchonly->setText(QApplication::translate("OverviewPage", "Watch-only:", Q_NULLPTR));
        labelBalanceText->setText(QApplication::translate("OverviewPage", "Available:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelBalance->setToolTip(QApplication::translate("OverviewPage", "Your current spendable balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelWatchAvailable->setToolTip(QApplication::translate("OverviewPage", "Your current balance in watch-only addresses", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelPendingText->setText(QApplication::translate("OverviewPage", "Pending:", Q_NULLPTR));
        labelSpendable->setText(QApplication::translate("OverviewPage", "Spendable:", Q_NULLPTR));
        labelQuestChainSendHeader->setText(QApplication::translate("OverviewPage", "QuestChainSend", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelQuestChainSendSyncStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the QuestChain network after a connection is established, but this process has not completed yet.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelQuestChainSendEnabledText->setText(QApplication::translate("OverviewPage", "Status:", Q_NULLPTR));
        labelQuestChainSendEnabled->setText(QApplication::translate("OverviewPage", "Enabled/Disabled", Q_NULLPTR));
        labelCompletitionText->setText(QApplication::translate("OverviewPage", "Completion:", Q_NULLPTR));
        labelAnonymizedText->setText(QApplication::translate("OverviewPage", "QuestChainSend Balance:", Q_NULLPTR));
        labelAmountAndRoundsText->setText(QApplication::translate("OverviewPage", "Amount and Rounds:", Q_NULLPTR));
        labelAmountRounds->setText(QApplication::translate("OverviewPage", "0 QCH / 0 Rounds", Q_NULLPTR));
        labelSubmittedDenomText->setText(QApplication::translate("OverviewPage", "Submitted Denom:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelSubmittedDenom->setToolTip(QApplication::translate("OverviewPage", "The denominations you submitted to the Masternode.<br>To mix, other users must submit the exact same denominations.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelSubmittedDenom->setText(QApplication::translate("OverviewPage", "n/a", Q_NULLPTR));
        toggleQuestChainSend->setText(QApplication::translate("OverviewPage", "Start/Stop Mixing", Q_NULLPTR));
        label_4->setText(QApplication::translate("OverviewPage", "Recent transactions", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelTransactionsStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the QuestChain network after a connection is established, but this process has not completed yet.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H

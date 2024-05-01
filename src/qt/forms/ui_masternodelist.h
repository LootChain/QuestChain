/********************************************************************************
** Form generated from reading UI file 'masternodelist.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MASTERNODELIST_H
#define UI_MASTERNODELIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MasternodeList
{
public:
    QVBoxLayout *topLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *horizontalSpacer0;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_filter_2;
    QLineEdit *filterLineEditDIP3;
    QCheckBox *checkBoxMyMasternodesOnly;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_count_2;
    QLabel *countLabelDIP3;
    QTableWidget *tableWidgetMasternodesDIP3;

    void setupUi(QWidget *MasternodeList)
    {
        if (MasternodeList->objectName().isEmpty())
            MasternodeList->setObjectName(QStringLiteral("MasternodeList"));
        MasternodeList->resize(762, 457);
        topLayout = new QVBoxLayout(MasternodeList);
        topLayout->setObjectName(QStringLiteral("topLayout"));
        topLayout->setContentsMargins(20, 0, 20, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        horizontalSpacer0 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer0);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, -1, 0);
        label_filter_2 = new QLabel(MasternodeList);
        label_filter_2->setObjectName(QStringLiteral("label_filter_2"));

        horizontalLayout_4->addWidget(label_filter_2);

        filterLineEditDIP3 = new QLineEdit(MasternodeList);
        filterLineEditDIP3->setObjectName(QStringLiteral("filterLineEditDIP3"));

        horizontalLayout_4->addWidget(filterLineEditDIP3);

        checkBoxMyMasternodesOnly = new QCheckBox(MasternodeList);
        checkBoxMyMasternodesOnly->setObjectName(QStringLiteral("checkBoxMyMasternodesOnly"));

        horizontalLayout_4->addWidget(checkBoxMyMasternodesOnly);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        label_count_2 = new QLabel(MasternodeList);
        label_count_2->setObjectName(QStringLiteral("label_count_2"));

        horizontalLayout_4->addWidget(label_count_2);

        countLabelDIP3 = new QLabel(MasternodeList);
        countLabelDIP3->setObjectName(QStringLiteral("countLabelDIP3"));

        horizontalLayout_4->addWidget(countLabelDIP3);


        gridLayout_3->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        tableWidgetMasternodesDIP3 = new QTableWidget(MasternodeList);
        if (tableWidgetMasternodesDIP3->columnCount() < 11)
            tableWidgetMasternodesDIP3->setColumnCount(11);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetMasternodesDIP3->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetMasternodesDIP3->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetMasternodesDIP3->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetMasternodesDIP3->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetMasternodesDIP3->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetMasternodesDIP3->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetMasternodesDIP3->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetMasternodesDIP3->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetMasternodesDIP3->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidgetMasternodesDIP3->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidgetMasternodesDIP3->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        tableWidgetMasternodesDIP3->setObjectName(QStringLiteral("tableWidgetMasternodesDIP3"));
        tableWidgetMasternodesDIP3->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetMasternodesDIP3->setAlternatingRowColors(true);
        tableWidgetMasternodesDIP3->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetMasternodesDIP3->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetMasternodesDIP3->setSortingEnabled(true);
        tableWidgetMasternodesDIP3->horizontalHeader()->setStretchLastSection(true);

        gridLayout_3->addWidget(tableWidgetMasternodesDIP3, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_3);


        topLayout->addLayout(verticalLayout);


        retranslateUi(MasternodeList);

        QMetaObject::connectSlotsByName(MasternodeList);
    } // setupUi

    void retranslateUi(QWidget *MasternodeList)
    {
        MasternodeList->setWindowTitle(QApplication::translate("MasternodeList", "Form", Q_NULLPTR));
        label_filter_2->setText(QApplication::translate("MasternodeList", "Filter List:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        filterLineEditDIP3->setToolTip(QApplication::translate("MasternodeList", "Filter masternode list", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        checkBoxMyMasternodesOnly->setToolTip(QApplication::translate("MasternodeList", "Show only masternodes this wallet has keys for.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        checkBoxMyMasternodesOnly->setText(QApplication::translate("MasternodeList", "My masternodes only", Q_NULLPTR));
        label_count_2->setText(QApplication::translate("MasternodeList", "Node Count:", Q_NULLPTR));
        countLabelDIP3->setText(QApplication::translate("MasternodeList", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetMasternodesDIP3->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MasternodeList", "Service", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetMasternodesDIP3->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MasternodeList", "Status", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetMasternodesDIP3->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MasternodeList", "PoSe Score", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetMasternodesDIP3->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MasternodeList", "Registered", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetMasternodesDIP3->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MasternodeList", "Last Paid", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetMasternodesDIP3->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MasternodeList", "Next Payment", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetMasternodesDIP3->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MasternodeList", "Payout Address", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetMasternodesDIP3->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("MasternodeList", "Operator Reward", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetMasternodesDIP3->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("MasternodeList", "Collateral Address", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidgetMasternodesDIP3->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("MasternodeList", "Owner Address", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidgetMasternodesDIP3->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("MasternodeList", "Voting Address", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MasternodeList: public Ui_MasternodeList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASTERNODELIST_H

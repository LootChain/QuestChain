/********************************************************************************
** Form generated from reading UI file 'appearancewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPEARANCEWIDGET_H
#define UI_APPEARANCEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AppearanceWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QHBoxLayout *hLayoutNormal;
    QLabel *lblLighterNormal;
    QSlider *fontWeightNormalSlider;
    QLabel *lblBolderNormal;
    QLabel *lblFontWeightNormal;
    QHBoxLayout *hLayoutScale;
    QLabel *lblSmaller;
    QSlider *fontScaleSlider;
    QLabel *lblBigger;
    QLabel *lblFontScale;
    QVBoxLayout *vLayoutFamily;
    QComboBox *fontFamily;
    QLabel *lblFontFamily;
    QVBoxLayout *vLayoutTheme;
    QComboBox *theme;
    QLabel *lblTheme;
    QLabel *lblFontWeightBold;
    QHBoxLayout *hLayoutBold;
    QLabel *lblLighterBold;
    QSlider *fontWeightBoldSlider;
    QLabel *lblBolderBold;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *AppearanceWidget)
    {
        if (AppearanceWidget->objectName().isEmpty())
            AppearanceWidget->setObjectName(QStringLiteral("AppearanceWidget"));
        AppearanceWidget->resize(445, 156);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AppearanceWidget->sizePolicy().hasHeightForWidth());
        AppearanceWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(AppearanceWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        hLayoutNormal = new QHBoxLayout();
        hLayoutNormal->setObjectName(QStringLiteral("hLayoutNormal"));
        hLayoutNormal->setSizeConstraint(QLayout::SetFixedSize);
        lblLighterNormal = new QLabel(AppearanceWidget);
        lblLighterNormal->setObjectName(QStringLiteral("lblLighterNormal"));
        lblLighterNormal->setMinimumSize(QSize(60, 0));
        lblLighterNormal->setMaximumSize(QSize(60, 16777215));
        lblLighterNormal->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        hLayoutNormal->addWidget(lblLighterNormal);

        fontWeightNormalSlider = new QSlider(AppearanceWidget);
        fontWeightNormalSlider->setObjectName(QStringLiteral("fontWeightNormalSlider"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(fontWeightNormalSlider->sizePolicy().hasHeightForWidth());
        fontWeightNormalSlider->setSizePolicy(sizePolicy1);
        fontWeightNormalSlider->setMinimumSize(QSize(150, 0));
        fontWeightNormalSlider->setMaximumSize(QSize(150, 16777215));
        fontWeightNormalSlider->setMinimum(0);
        fontWeightNormalSlider->setMaximum(5);
        fontWeightNormalSlider->setValue(0);
        fontWeightNormalSlider->setOrientation(Qt::Horizontal);

        hLayoutNormal->addWidget(fontWeightNormalSlider);

        lblBolderNormal = new QLabel(AppearanceWidget);
        lblBolderNormal->setObjectName(QStringLiteral("lblBolderNormal"));
        lblBolderNormal->setMinimumSize(QSize(60, 0));
        lblBolderNormal->setMaximumSize(QSize(60, 16777215));
        lblBolderNormal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hLayoutNormal->addWidget(lblBolderNormal);


        gridLayout->addLayout(hLayoutNormal, 3, 2, 1, 1);

        lblFontWeightNormal = new QLabel(AppearanceWidget);
        lblFontWeightNormal->setObjectName(QStringLiteral("lblFontWeightNormal"));
        lblFontWeightNormal->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(lblFontWeightNormal, 3, 0, 1, 1);

        hLayoutScale = new QHBoxLayout();
        hLayoutScale->setObjectName(QStringLiteral("hLayoutScale"));
        hLayoutScale->setSizeConstraint(QLayout::SetFixedSize);
        lblSmaller = new QLabel(AppearanceWidget);
        lblSmaller->setObjectName(QStringLiteral("lblSmaller"));
        lblSmaller->setMinimumSize(QSize(60, 0));
        lblSmaller->setMaximumSize(QSize(60, 16777215));
        lblSmaller->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        hLayoutScale->addWidget(lblSmaller);

        fontScaleSlider = new QSlider(AppearanceWidget);
        fontScaleSlider->setObjectName(QStringLiteral("fontScaleSlider"));
        sizePolicy1.setHeightForWidth(fontScaleSlider->sizePolicy().hasHeightForWidth());
        fontScaleSlider->setSizePolicy(sizePolicy1);
        fontScaleSlider->setMinimumSize(QSize(150, 0));
        fontScaleSlider->setMaximumSize(QSize(150, 16777215));
        fontScaleSlider->setMinimum(-30);
        fontScaleSlider->setMaximum(30);
        fontScaleSlider->setSingleStep(10);
        fontScaleSlider->setPageStep(0);
        fontScaleSlider->setOrientation(Qt::Horizontal);
        fontScaleSlider->setTickPosition(QSlider::NoTicks);
        fontScaleSlider->setTickInterval(3);

        hLayoutScale->addWidget(fontScaleSlider);

        lblBigger = new QLabel(AppearanceWidget);
        lblBigger->setObjectName(QStringLiteral("lblBigger"));
        lblBigger->setMinimumSize(QSize(60, 0));
        lblBigger->setMaximumSize(QSize(60, 16777215));
        lblBigger->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hLayoutScale->addWidget(lblBigger);


        gridLayout->addLayout(hLayoutScale, 2, 2, 1, 1);

        lblFontScale = new QLabel(AppearanceWidget);
        lblFontScale->setObjectName(QStringLiteral("lblFontScale"));
        lblFontScale->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(lblFontScale, 2, 0, 1, 1);

        vLayoutFamily = new QVBoxLayout();
        vLayoutFamily->setObjectName(QStringLiteral("vLayoutFamily"));
        vLayoutFamily->setSizeConstraint(QLayout::SetFixedSize);
        fontFamily = new QComboBox(AppearanceWidget);
        fontFamily->setObjectName(QStringLiteral("fontFamily"));
        fontFamily->setMinimumSize(QSize(282, 0));
        fontFamily->setMaximumSize(QSize(282, 16777215));

        vLayoutFamily->addWidget(fontFamily);


        gridLayout->addLayout(vLayoutFamily, 1, 2, 1, 1);

        lblFontFamily = new QLabel(AppearanceWidget);
        lblFontFamily->setObjectName(QStringLiteral("lblFontFamily"));
        lblFontFamily->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(lblFontFamily, 1, 0, 1, 1);

        vLayoutTheme = new QVBoxLayout();
        vLayoutTheme->setObjectName(QStringLiteral("vLayoutTheme"));
        vLayoutTheme->setSizeConstraint(QLayout::SetFixedSize);
        theme = new QComboBox(AppearanceWidget);
        theme->setObjectName(QStringLiteral("theme"));
        theme->setMinimumSize(QSize(282, 0));
        theme->setMaximumSize(QSize(282, 16777215));

        vLayoutTheme->addWidget(theme);


        gridLayout->addLayout(vLayoutTheme, 0, 2, 1, 1);

        lblTheme = new QLabel(AppearanceWidget);
        lblTheme->setObjectName(QStringLiteral("lblTheme"));
        lblTheme->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(lblTheme, 0, 0, 1, 1);

        lblFontWeightBold = new QLabel(AppearanceWidget);
        lblFontWeightBold->setObjectName(QStringLiteral("lblFontWeightBold"));
        lblFontWeightBold->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(lblFontWeightBold, 4, 0, 1, 1);

        hLayoutBold = new QHBoxLayout();
        hLayoutBold->setObjectName(QStringLiteral("hLayoutBold"));
        hLayoutBold->setSizeConstraint(QLayout::SetFixedSize);
        lblLighterBold = new QLabel(AppearanceWidget);
        lblLighterBold->setObjectName(QStringLiteral("lblLighterBold"));
        lblLighterBold->setMinimumSize(QSize(60, 0));
        lblLighterBold->setMaximumSize(QSize(60, 16777215));
        lblLighterBold->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        hLayoutBold->addWidget(lblLighterBold);

        fontWeightBoldSlider = new QSlider(AppearanceWidget);
        fontWeightBoldSlider->setObjectName(QStringLiteral("fontWeightBoldSlider"));
        sizePolicy1.setHeightForWidth(fontWeightBoldSlider->sizePolicy().hasHeightForWidth());
        fontWeightBoldSlider->setSizePolicy(sizePolicy1);
        fontWeightBoldSlider->setMinimumSize(QSize(150, 0));
        fontWeightBoldSlider->setMaximumSize(QSize(150, 16777215));
        fontWeightBoldSlider->setMinimum(3);
        fontWeightBoldSlider->setMaximum(8);
        fontWeightBoldSlider->setValue(3);
        fontWeightBoldSlider->setOrientation(Qt::Horizontal);

        hLayoutBold->addWidget(fontWeightBoldSlider);

        lblBolderBold = new QLabel(AppearanceWidget);
        lblBolderBold->setObjectName(QStringLiteral("lblBolderBold"));
        lblBolderBold->setMinimumSize(QSize(60, 0));
        lblBolderBold->setMaximumSize(QSize(60, 16777215));
        lblBolderBold->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hLayoutBold->addWidget(lblBolderBold);


        gridLayout->addLayout(hLayoutBold, 4, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(2, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(2, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(2, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(2, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 3, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(2, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 4, 1, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(2, 1);
        gridLayout->setColumnMinimumWidth(0, 1);
        gridLayout->setColumnMinimumWidth(2, 1);

        verticalLayout->addLayout(gridLayout);


        retranslateUi(AppearanceWidget);

        QMetaObject::connectSlotsByName(AppearanceWidget);
    } // setupUi

    void retranslateUi(QWidget *AppearanceWidget)
    {
        lblLighterNormal->setText(QApplication::translate("AppearanceWidget", "Lighter", Q_NULLPTR));
        lblBolderNormal->setText(QApplication::translate("AppearanceWidget", "Bolder", Q_NULLPTR));
        lblFontWeightNormal->setText(QApplication::translate("AppearanceWidget", "Font Weight Normal:", Q_NULLPTR));
        lblSmaller->setText(QApplication::translate("AppearanceWidget", "Smaller", Q_NULLPTR));
        lblBigger->setText(QApplication::translate("AppearanceWidget", "Bigger", Q_NULLPTR));
        lblFontScale->setText(QApplication::translate("AppearanceWidget", "Font Scale:", Q_NULLPTR));
        lblFontFamily->setText(QApplication::translate("AppearanceWidget", "Font Family:", Q_NULLPTR));
        lblTheme->setText(QApplication::translate("AppearanceWidget", "Theme:", Q_NULLPTR));
        lblFontWeightBold->setText(QApplication::translate("AppearanceWidget", "Font Weight Bold:", Q_NULLPTR));
        lblLighterBold->setText(QApplication::translate("AppearanceWidget", "Lighter", Q_NULLPTR));
        lblBolderBold->setText(QApplication::translate("AppearanceWidget", "Bolder", Q_NULLPTR));
        Q_UNUSED(AppearanceWidget);
    } // retranslateUi

};

namespace Ui {
    class AppearanceWidget: public Ui_AppearanceWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPEARANCEWIDGET_H

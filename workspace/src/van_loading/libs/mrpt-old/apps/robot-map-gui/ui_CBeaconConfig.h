/********************************************************************************
** Form generated from reading UI file 'CBeaconConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CBEACONCONFIG_H
#define UI_CBEACONCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CBeaconConfig
{
public:
    QHBoxLayout *horizontalLayout_6;
    QTabWidget *tabWidget;
    QWidget *generic;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *enableSaveAs3DObject;
    QRadioButton *enableObservationLikelihood;
    QRadioButton *enableObservationInsertion;
    QSpacerItem *verticalSpacer_3;
    QWidget *insert;
    QVBoxLayout *verticalLayout;
    QRadioButton *insertAsMonteCarlo;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *maxElevation_deg;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *minElevation_deg;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *MC_numSamplesPerMeter;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QDoubleSpinBox *MC_maxStdToGauss;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QDoubleSpinBox *MC_thresholdNegligible;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_5;
    QRadioButton *MC_performResampling;
    QHBoxLayout *layoutAfterResamplingNoise;
    QDoubleSpinBox *MC_afterResamplingNoise;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_7;
    QDoubleSpinBox *SOG_thresholdNegligible;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_8;
    QDoubleSpinBox *SOG_maxDistBetweenGaussians;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_9;
    QDoubleSpinBox *SOG_separationConstant;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer;
    QWidget *likelihood;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_10;
    QDoubleSpinBox *rangeStd;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *CBeaconConfig)
    {
        if (CBeaconConfig->objectName().isEmpty())
            CBeaconConfig->setObjectName(QStringLiteral("CBeaconConfig"));
        CBeaconConfig->resize(612, 452);
        horizontalLayout_6 = new QHBoxLayout(CBeaconConfig);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        tabWidget = new QTabWidget(CBeaconConfig);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        generic = new QWidget();
        generic->setObjectName(QStringLiteral("generic"));
        verticalLayout_3 = new QVBoxLayout(generic);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        enableSaveAs3DObject = new QRadioButton(generic);
        enableSaveAs3DObject->setObjectName(QStringLiteral("enableSaveAs3DObject"));
        enableSaveAs3DObject->setChecked(true);
        enableSaveAs3DObject->setAutoExclusive(false);

        verticalLayout_3->addWidget(enableSaveAs3DObject);

        enableObservationLikelihood = new QRadioButton(generic);
        enableObservationLikelihood->setObjectName(QStringLiteral("enableObservationLikelihood"));
        enableObservationLikelihood->setChecked(true);
        enableObservationLikelihood->setAutoExclusive(false);

        verticalLayout_3->addWidget(enableObservationLikelihood);

        enableObservationInsertion = new QRadioButton(generic);
        enableObservationInsertion->setObjectName(QStringLiteral("enableObservationInsertion"));
        enableObservationInsertion->setChecked(true);
        enableObservationInsertion->setAutoExclusive(false);

        verticalLayout_3->addWidget(enableObservationInsertion);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        tabWidget->addTab(generic, QString());
        insert = new QWidget();
        insert->setObjectName(QStringLiteral("insert"));
        verticalLayout = new QVBoxLayout(insert);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        insertAsMonteCarlo = new QRadioButton(insert);
        insertAsMonteCarlo->setObjectName(QStringLiteral("insertAsMonteCarlo"));
        insertAsMonteCarlo->setChecked(true);
        insertAsMonteCarlo->setAutoExclusive(false);

        verticalLayout->addWidget(insertAsMonteCarlo);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        maxElevation_deg = new QDoubleSpinBox(insert);
        maxElevation_deg->setObjectName(QStringLiteral("maxElevation_deg"));

        horizontalLayout->addWidget(maxElevation_deg);

        label = new QLabel(insert);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        minElevation_deg = new QDoubleSpinBox(insert);
        minElevation_deg->setObjectName(QStringLiteral("minElevation_deg"));

        horizontalLayout_2->addWidget(minElevation_deg);

        label_2 = new QLabel(insert);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        MC_numSamplesPerMeter = new QSpinBox(insert);
        MC_numSamplesPerMeter->setObjectName(QStringLiteral("MC_numSamplesPerMeter"));

        horizontalLayout_3->addWidget(MC_numSamplesPerMeter);

        label_3 = new QLabel(insert);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        MC_maxStdToGauss = new QDoubleSpinBox(insert);
        MC_maxStdToGauss->setObjectName(QStringLiteral("MC_maxStdToGauss"));
        MC_maxStdToGauss->setValue(0.4);

        horizontalLayout_4->addWidget(MC_maxStdToGauss);

        label_4 = new QLabel(insert);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        MC_thresholdNegligible = new QDoubleSpinBox(insert);
        MC_thresholdNegligible->setObjectName(QStringLiteral("MC_thresholdNegligible"));
        MC_thresholdNegligible->setValue(5);

        horizontalLayout_5->addWidget(MC_thresholdNegligible);

        label_5 = new QLabel(insert);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_5);

        MC_performResampling = new QRadioButton(insert);
        MC_performResampling->setObjectName(QStringLiteral("MC_performResampling"));
        MC_performResampling->setChecked(false);
        MC_performResampling->setAutoExclusive(false);

        verticalLayout->addWidget(MC_performResampling);

        layoutAfterResamplingNoise = new QHBoxLayout();
        layoutAfterResamplingNoise->setObjectName(QStringLiteral("layoutAfterResamplingNoise"));
        MC_afterResamplingNoise = new QDoubleSpinBox(insert);
        MC_afterResamplingNoise->setObjectName(QStringLiteral("MC_afterResamplingNoise"));

        layoutAfterResamplingNoise->addWidget(MC_afterResamplingNoise);

        label_6 = new QLabel(insert);
        label_6->setObjectName(QStringLiteral("label_6"));

        layoutAfterResamplingNoise->addWidget(label_6);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layoutAfterResamplingNoise->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(layoutAfterResamplingNoise);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        SOG_thresholdNegligible = new QDoubleSpinBox(insert);
        SOG_thresholdNegligible->setObjectName(QStringLiteral("SOG_thresholdNegligible"));
        SOG_thresholdNegligible->setValue(20);

        horizontalLayout_7->addWidget(SOG_thresholdNegligible);

        label_7 = new QLabel(insert);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        SOG_maxDistBetweenGaussians = new QDoubleSpinBox(insert);
        SOG_maxDistBetweenGaussians->setObjectName(QStringLiteral("SOG_maxDistBetweenGaussians"));

        horizontalLayout_8->addWidget(SOG_maxDistBetweenGaussians);

        label_8 = new QLabel(insert);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_8->addWidget(label_8);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        SOG_separationConstant = new QDoubleSpinBox(insert);
        SOG_separationConstant->setObjectName(QStringLiteral("SOG_separationConstant"));

        horizontalLayout_9->addWidget(SOG_separationConstant);

        label_9 = new QLabel(insert);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_9->addWidget(label_9);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);


        verticalLayout->addLayout(horizontalLayout_9);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        tabWidget->addTab(insert, QString());
        likelihood = new QWidget();
        likelihood->setObjectName(QStringLiteral("likelihood"));
        verticalLayout_2 = new QVBoxLayout(likelihood);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        rangeStd = new QDoubleSpinBox(likelihood);
        rangeStd->setObjectName(QStringLiteral("rangeStd"));

        horizontalLayout_10->addWidget(rangeStd);

        label_10 = new QLabel(likelihood);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_10->addWidget(label_10);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_10);


        verticalLayout_2->addLayout(horizontalLayout_10);

        verticalSpacer_2 = new QSpacerItem(20, 354, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        tabWidget->addTab(likelihood, QString());

        horizontalLayout_6->addWidget(tabWidget);


        retranslateUi(CBeaconConfig);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(CBeaconConfig);
    } // setupUi

    void retranslateUi(QWidget *CBeaconConfig)
    {
        CBeaconConfig->setWindowTitle(QApplication::translate("CBeaconConfig", "Form", Q_NULLPTR));
        enableSaveAs3DObject->setText(QApplication::translate("CBeaconConfig", "enableSaveAs3DObject", Q_NULLPTR));
        enableObservationLikelihood->setText(QApplication::translate("CBeaconConfig", "enableObservationLikelihood", Q_NULLPTR));
        enableObservationInsertion->setText(QApplication::translate("CBeaconConfig", "enableObservationInsertion", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(generic), QApplication::translate("CBeaconConfig", "Generic", Q_NULLPTR));
        insertAsMonteCarlo->setText(QApplication::translate("CBeaconConfig", "insertAsMonteCarlo", Q_NULLPTR));
        label->setText(QApplication::translate("CBeaconConfig", "maxElevation_deg", Q_NULLPTR));
        label_2->setText(QApplication::translate("CBeaconConfig", "minElevation_deg", Q_NULLPTR));
        label_3->setText(QApplication::translate("CBeaconConfig", "MC_numSamplesPerMeter", Q_NULLPTR));
        label_4->setText(QApplication::translate("CBeaconConfig", "MC_maxStdToGauss", Q_NULLPTR));
        label_5->setText(QApplication::translate("CBeaconConfig", "MC_thresholdNegligible", Q_NULLPTR));
        MC_performResampling->setText(QApplication::translate("CBeaconConfig", "MC_performResampling", Q_NULLPTR));
        label_6->setText(QApplication::translate("CBeaconConfig", "MC_afterResamplingNoise", Q_NULLPTR));
        label_7->setText(QApplication::translate("CBeaconConfig", "SOG_thresholdNegligible", Q_NULLPTR));
        label_8->setText(QApplication::translate("CBeaconConfig", "SOG_maxDistBetweenGaussians", Q_NULLPTR));
        label_9->setText(QApplication::translate("CBeaconConfig", "SOG_separationConstant", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(insert), QApplication::translate("CBeaconConfig", "Insert", Q_NULLPTR));
        label_10->setText(QApplication::translate("CBeaconConfig", "rangeStd", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(likelihood), QApplication::translate("CBeaconConfig", "Likelihood", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CBeaconConfig: public Ui_CBeaconConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CBEACONCONFIG_H

/********************************************************************************
** Form generated from reading UI file 'CGasGridConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CGASGRIDCONFIG_H
#define UI_CGASGRIDCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CGasGridConfig
{
public:
    QHBoxLayout *horizontalLayout_8;
    QTabWidget *tabWidget;
    QWidget *generic;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *enableSaveAs3DObject;
    QRadioButton *enableObservationLikelihood;
    QRadioButton *enableObservationInsertion;
    QSpacerItem *verticalSpacer_4;
    QWidget *creation;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_9;
    QDoubleSpinBox *min_x;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_10;
    QDoubleSpinBox *max_x;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_11;
    QDoubleSpinBox *min_y;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_12;
    QDoubleSpinBox *max_y;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_13;
    QDoubleSpinBox *resolution;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer_2;
    QWidget *insert;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_13;
    QLineEdit *gasSensorLabel;
    QHBoxLayout *horizontalLayout_15;
    QSpinBox *enose_id;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_13;
    QHBoxLayout *horizontalLayout_16;
    QSpinBox *gasSensorType;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_14;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_16;
    QLineEdit *windSensorLabel;
    QRadioButton *useWindInformation;
    QHBoxLayout *horizontalLayout_18;
    QDoubleSpinBox *advectionFreq;
    QLabel *label_17;
    QSpacerItem *horizontalSpacer_15;
    QHBoxLayout *horizontalLayout_19;
    QDoubleSpinBox *std_windNoise_phi;
    QLabel *label_18;
    QSpacerItem *horizontalSpacer_16;
    QHBoxLayout *horizontalLayout_20;
    QDoubleSpinBox *std_windNoise_mod;
    QLabel *label_19;
    QSpacerItem *horizontalSpacer_17;
    QHBoxLayout *horizontalLayout_21;
    QDoubleSpinBox *default_wind_direction;
    QLabel *label_20;
    QSpacerItem *horizontalSpacer_18;
    QHBoxLayout *horizontalLayout_22;
    QDoubleSpinBox *default_wind_speed;
    QLabel *label_21;
    QSpacerItem *horizontalSpacer_19;
    QSpacerItem *verticalSpacer;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QComboBox *mapType;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *CGasGridConfig)
    {
        if (CGasGridConfig->objectName().isEmpty())
            CGasGridConfig->setObjectName(QStringLiteral("CGasGridConfig"));
        CGasGridConfig->resize(805, 603);
        horizontalLayout_8 = new QHBoxLayout(CGasGridConfig);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        tabWidget = new QTabWidget(CGasGridConfig);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        generic = new QWidget();
        generic->setObjectName(QStringLiteral("generic"));
        verticalLayout_4 = new QVBoxLayout(generic);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        enableSaveAs3DObject = new QRadioButton(generic);
        enableSaveAs3DObject->setObjectName(QStringLiteral("enableSaveAs3DObject"));
        enableSaveAs3DObject->setChecked(true);
        enableSaveAs3DObject->setAutoExclusive(false);

        verticalLayout_4->addWidget(enableSaveAs3DObject);

        enableObservationLikelihood = new QRadioButton(generic);
        enableObservationLikelihood->setObjectName(QStringLiteral("enableObservationLikelihood"));
        enableObservationLikelihood->setChecked(true);
        enableObservationLikelihood->setAutoExclusive(false);

        verticalLayout_4->addWidget(enableObservationLikelihood);

        enableObservationInsertion = new QRadioButton(generic);
        enableObservationInsertion->setObjectName(QStringLiteral("enableObservationInsertion"));
        enableObservationInsertion->setChecked(true);
        enableObservationInsertion->setAutoExclusive(false);

        verticalLayout_4->addWidget(enableObservationInsertion);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        tabWidget->addTab(generic, QString());
        creation = new QWidget();
        creation->setObjectName(QStringLiteral("creation"));
        verticalLayout_2 = new QVBoxLayout(creation);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        min_x = new QDoubleSpinBox(creation);
        min_x->setObjectName(QStringLiteral("min_x"));
        min_x->setMinimum(-99);
        min_x->setValue(-10);

        horizontalLayout_9->addWidget(min_x);

        label_8 = new QLabel(creation);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_9->addWidget(label_8);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_8);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        max_x = new QDoubleSpinBox(creation);
        max_x->setObjectName(QStringLiteral("max_x"));
        max_x->setMinimum(-99);
        max_x->setValue(10);

        horizontalLayout_10->addWidget(max_x);

        label_9 = new QLabel(creation);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_10->addWidget(label_9);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_9);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        min_y = new QDoubleSpinBox(creation);
        min_y->setObjectName(QStringLiteral("min_y"));
        min_y->setMinimum(-99);
        min_y->setValue(-10);

        horizontalLayout_11->addWidget(min_y);

        label_10 = new QLabel(creation);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_11->addWidget(label_10);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_10);


        verticalLayout_2->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        max_y = new QDoubleSpinBox(creation);
        max_y->setObjectName(QStringLiteral("max_y"));
        max_y->setMinimum(-99);
        max_y->setValue(10);

        horizontalLayout_12->addWidget(max_y);

        label_11 = new QLabel(creation);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_12->addWidget(label_11);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_11);


        verticalLayout_2->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        resolution = new QDoubleSpinBox(creation);
        resolution->setObjectName(QStringLiteral("resolution"));
        resolution->setValue(0.05);

        horizontalLayout_13->addWidget(resolution);

        label_12 = new QLabel(creation);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_13->addWidget(label_12);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_12);


        verticalLayout_2->addLayout(horizontalLayout_13);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        tabWidget->addTab(creation, QString());
        insert = new QWidget();
        insert->setObjectName(QStringLiteral("insert"));
        verticalLayout = new QVBoxLayout(insert);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_13 = new QLabel(insert);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_14->addWidget(label_13);

        gasSensorLabel = new QLineEdit(insert);
        gasSensorLabel->setObjectName(QStringLiteral("gasSensorLabel"));

        horizontalLayout_14->addWidget(gasSensorLabel);


        verticalLayout->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        enose_id = new QSpinBox(insert);
        enose_id->setObjectName(QStringLiteral("enose_id"));
        enose_id->setValue(1);

        horizontalLayout_15->addWidget(enose_id);

        label_14 = new QLabel(insert);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_15->addWidget(label_14);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_13);


        verticalLayout->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        gasSensorType = new QSpinBox(insert);
        gasSensorType->setObjectName(QStringLiteral("gasSensorType"));
        gasSensorType->setValue(1);

        horizontalLayout_16->addWidget(gasSensorType);

        label_15 = new QLabel(insert);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_16->addWidget(label_15);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_14);


        verticalLayout->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_16 = new QLabel(insert);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_17->addWidget(label_16);

        windSensorLabel = new QLineEdit(insert);
        windSensorLabel->setObjectName(QStringLiteral("windSensorLabel"));

        horizontalLayout_17->addWidget(windSensorLabel);


        verticalLayout->addLayout(horizontalLayout_17);

        useWindInformation = new QRadioButton(insert);
        useWindInformation->setObjectName(QStringLiteral("useWindInformation"));
        useWindInformation->setChecked(false);
        useWindInformation->setAutoExclusive(false);

        verticalLayout->addWidget(useWindInformation);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        advectionFreq = new QDoubleSpinBox(insert);
        advectionFreq->setObjectName(QStringLiteral("advectionFreq"));
        advectionFreq->setValue(15);

        horizontalLayout_18->addWidget(advectionFreq);

        label_17 = new QLabel(insert);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_18->addWidget(label_17);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_15);


        verticalLayout->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        std_windNoise_phi = new QDoubleSpinBox(insert);
        std_windNoise_phi->setObjectName(QStringLiteral("std_windNoise_phi"));
        std_windNoise_phi->setValue(15);

        horizontalLayout_19->addWidget(std_windNoise_phi);

        label_18 = new QLabel(insert);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_19->addWidget(label_18);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_16);


        verticalLayout->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        std_windNoise_mod = new QDoubleSpinBox(insert);
        std_windNoise_mod->setObjectName(QStringLiteral("std_windNoise_mod"));
        std_windNoise_mod->setValue(15);

        horizontalLayout_20->addWidget(std_windNoise_mod);

        label_19 = new QLabel(insert);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_20->addWidget(label_19);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_17);


        verticalLayout->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        default_wind_direction = new QDoubleSpinBox(insert);
        default_wind_direction->setObjectName(QStringLiteral("default_wind_direction"));
        default_wind_direction->setValue(15);

        horizontalLayout_21->addWidget(default_wind_direction);

        label_20 = new QLabel(insert);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_21->addWidget(label_20);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_18);


        verticalLayout->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        default_wind_speed = new QDoubleSpinBox(insert);
        default_wind_speed->setObjectName(QStringLiteral("default_wind_speed"));
        default_wind_speed->setValue(15);

        horizontalLayout_22->addWidget(default_wind_speed);

        label_21 = new QLabel(insert);
        label_21->setObjectName(QStringLiteral("label_21"));

        horizontalLayout_22->addWidget(label_21);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_19);


        verticalLayout->addLayout(horizontalLayout_22);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        tabWidget->addTab(insert, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mapType = new QComboBox(tab);
        mapType->setObjectName(QStringLiteral("mapType"));

        horizontalLayout->addWidget(mapType);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        tabWidget->addTab(tab, QString());

        horizontalLayout_8->addWidget(tabWidget);


        retranslateUi(CGasGridConfig);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(CGasGridConfig);
    } // setupUi

    void retranslateUi(QWidget *CGasGridConfig)
    {
        CGasGridConfig->setWindowTitle(QApplication::translate("CGasGridConfig", "Form", Q_NULLPTR));
        enableSaveAs3DObject->setText(QApplication::translate("CGasGridConfig", "enableSaveAs3DObject", Q_NULLPTR));
        enableObservationLikelihood->setText(QApplication::translate("CGasGridConfig", "enableObservationLikelihood", Q_NULLPTR));
        enableObservationInsertion->setText(QApplication::translate("CGasGridConfig", "enableObservationInsertion", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(generic), QApplication::translate("CGasGridConfig", "Generic", Q_NULLPTR));
        label_8->setText(QApplication::translate("CGasGridConfig", "min_x", Q_NULLPTR));
        label_9->setText(QApplication::translate("CGasGridConfig", "max_x", Q_NULLPTR));
        label_10->setText(QApplication::translate("CGasGridConfig", "min_y", Q_NULLPTR));
        label_11->setText(QApplication::translate("CGasGridConfig", "max_y", Q_NULLPTR));
        label_12->setText(QApplication::translate("CGasGridConfig", "resolution", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(creation), QApplication::translate("CGasGridConfig", "Creation", Q_NULLPTR));
        label_13->setText(QApplication::translate("CGasGridConfig", "gasSensorLabel", Q_NULLPTR));
        label_14->setText(QApplication::translate("CGasGridConfig", "enose_id", Q_NULLPTR));
        label_15->setText(QApplication::translate("CGasGridConfig", "gasSensorType", Q_NULLPTR));
        label_16->setText(QApplication::translate("CGasGridConfig", "windSensorLabel", Q_NULLPTR));
        useWindInformation->setText(QApplication::translate("CGasGridConfig", "useWindInformation", Q_NULLPTR));
        label_17->setText(QApplication::translate("CGasGridConfig", "advectionFreq", Q_NULLPTR));
        label_18->setText(QApplication::translate("CGasGridConfig", "std_windNoise_phi", Q_NULLPTR));
        label_19->setText(QApplication::translate("CGasGridConfig", "std_windNoise_mod", Q_NULLPTR));
        label_20->setText(QApplication::translate("CGasGridConfig", "default_wind_direction", Q_NULLPTR));
        label_21->setText(QApplication::translate("CGasGridConfig", "default_wind_speed", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(insert), QApplication::translate("CGasGridConfig", "Insert", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("CGasGridConfig", "Map type", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CGasGridConfig: public Ui_CGasGridConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CGASGRIDCONFIG_H

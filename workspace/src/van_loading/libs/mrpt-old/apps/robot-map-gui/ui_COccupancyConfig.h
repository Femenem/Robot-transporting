/********************************************************************************
** Form generated from reading UI file 'COccupancyConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COCCUPANCYCONFIG_H
#define UI_COCCUPANCYCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
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

class Ui_COccupancyConfig
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
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *mapAltitude;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QRadioButton *useMapAltitude;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *maxDistanceInsertion;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QDoubleSpinBox *maxOccupancyUpdateCertainty;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QRadioButton *considerInvalidRangesAsFreeSpace;
    QHBoxLayout *horizontalLayout_7;
    QSpinBox *decimation;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_4;
    QDoubleSpinBox *horizontalTolerance;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QDoubleSpinBox *CFD_features_gaussian_size;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QDoubleSpinBox *CFD_features_median_size;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_6;
    QRadioButton *wideningBeamsWithDistance;
    QSpacerItem *verticalSpacer;
    QWidget *likelihood;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_14;
    QComboBox *likelihoodMethod;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_13;
    QHBoxLayout *horizontalLayout_15;
    QDoubleSpinBox *LF_stdHit;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_14;
    QHBoxLayout *horizontalLayout_16;
    QDoubleSpinBox *LF_zHit;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_15;
    QHBoxLayout *horizontalLayout_17;
    QDoubleSpinBox *LF_zRandom;
    QLabel *label_16;
    QSpacerItem *horizontalSpacer_16;
    QHBoxLayout *horizontalLayout_18;
    QDoubleSpinBox *LF_maxRange;
    QLabel *label_17;
    QSpacerItem *horizontalSpacer_17;
    QHBoxLayout *horizontalLayout_19;
    QSpinBox *LF_decimation;
    QLabel *label_18;
    QSpacerItem *horizontalSpacer_18;
    QHBoxLayout *horizontalLayout_20;
    QDoubleSpinBox *LF_maxCorrsDistance;
    QLabel *label_19;
    QSpacerItem *horizontalSpacer_19;
    QRadioButton *LF_useSquareDist;
    QRadioButton *LF_alternateAverageMethod;
    QHBoxLayout *horizontalLayout_21;
    QDoubleSpinBox *MI_exponent;
    QLabel *label_20;
    QSpacerItem *horizontalSpacer_20;
    QHBoxLayout *horizontalLayout_22;
    QSpinBox *MI_skip_rays;
    QLabel *label_21;
    QSpacerItem *horizontalSpacer_21;
    QHBoxLayout *horizontalLayout_23;
    QDoubleSpinBox *MI_ratio_max_distance;
    QLabel *label_22;
    QSpacerItem *horizontalSpacer_22;
    QRadioButton *rayTracing_useDistanceFilter;
    QHBoxLayout *horizontalLayout_24;
    QSpinBox *rayTracing_decimation;
    QLabel *label_23;
    QSpacerItem *horizontalSpacer_23;
    QHBoxLayout *horizontalLayout_25;
    QDoubleSpinBox *rayTracing_stdHit;
    QLabel *label_24;
    QSpacerItem *horizontalSpacer_24;
    QHBoxLayout *horizontalLayout_26;
    QSpinBox *consensus_takeEachRange;
    QLabel *label_25;
    QSpacerItem *horizontalSpacer_25;
    QHBoxLayout *horizontalLayout_27;
    QDoubleSpinBox *consensus_pow;
    QLabel *label_26;
    QSpacerItem *horizontalSpacer_26;
    QRadioButton *enableLikelihoodCache;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *COccupancyConfig)
    {
        if (COccupancyConfig->objectName().isEmpty())
            COccupancyConfig->setObjectName(QStringLiteral("COccupancyConfig"));
        COccupancyConfig->resize(787, 781);
        horizontalLayout_8 = new QHBoxLayout(COccupancyConfig);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        tabWidget = new QTabWidget(COccupancyConfig);
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
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mapAltitude = new QDoubleSpinBox(insert);
        mapAltitude->setObjectName(QStringLiteral("mapAltitude"));
        mapAltitude->setValue(0.3);

        horizontalLayout->addWidget(mapAltitude);

        label = new QLabel(insert);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        useMapAltitude = new QRadioButton(insert);
        useMapAltitude->setObjectName(QStringLiteral("useMapAltitude"));
        useMapAltitude->setChecked(true);
        useMapAltitude->setAutoExclusive(false);

        verticalLayout->addWidget(useMapAltitude);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        maxDistanceInsertion = new QDoubleSpinBox(insert);
        maxDistanceInsertion->setObjectName(QStringLiteral("maxDistanceInsertion"));
        maxDistanceInsertion->setValue(15);

        horizontalLayout_2->addWidget(maxDistanceInsertion);

        label_2 = new QLabel(insert);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        maxOccupancyUpdateCertainty = new QDoubleSpinBox(insert);
        maxOccupancyUpdateCertainty->setObjectName(QStringLiteral("maxOccupancyUpdateCertainty"));
        maxOccupancyUpdateCertainty->setValue(0.65);

        horizontalLayout_3->addWidget(maxOccupancyUpdateCertainty);

        label_3 = new QLabel(insert);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        considerInvalidRangesAsFreeSpace = new QRadioButton(insert);
        considerInvalidRangesAsFreeSpace->setObjectName(QStringLiteral("considerInvalidRangesAsFreeSpace"));
        considerInvalidRangesAsFreeSpace->setChecked(true);
        considerInvalidRangesAsFreeSpace->setAutoExclusive(false);

        verticalLayout->addWidget(considerInvalidRangesAsFreeSpace);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        decimation = new QSpinBox(insert);
        decimation->setObjectName(QStringLiteral("decimation"));
        decimation->setValue(1);

        horizontalLayout_7->addWidget(decimation);

        label_7 = new QLabel(insert);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalTolerance = new QDoubleSpinBox(insert);
        horizontalTolerance->setObjectName(QStringLiteral("horizontalTolerance"));
        horizontalTolerance->setDecimals(6);
        horizontalTolerance->setMinimum(1e-6);
        horizontalTolerance->setSingleStep(1e-6);
        horizontalTolerance->setValue(0.000873);

        horizontalLayout_4->addWidget(horizontalTolerance);

        label_4 = new QLabel(insert);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        CFD_features_gaussian_size = new QDoubleSpinBox(insert);
        CFD_features_gaussian_size->setObjectName(QStringLiteral("CFD_features_gaussian_size"));
        CFD_features_gaussian_size->setValue(1);

        horizontalLayout_5->addWidget(CFD_features_gaussian_size);

        label_5 = new QLabel(insert);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        CFD_features_median_size = new QDoubleSpinBox(insert);
        CFD_features_median_size->setObjectName(QStringLiteral("CFD_features_median_size"));
        CFD_features_median_size->setValue(3);

        horizontalLayout_6->addWidget(CFD_features_median_size);

        label_6 = new QLabel(insert);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_6);

        wideningBeamsWithDistance = new QRadioButton(insert);
        wideningBeamsWithDistance->setObjectName(QStringLiteral("wideningBeamsWithDistance"));
        wideningBeamsWithDistance->setChecked(false);
        wideningBeamsWithDistance->setAutoExclusive(false);

        verticalLayout->addWidget(wideningBeamsWithDistance);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        tabWidget->addTab(insert, QString());
        likelihood = new QWidget();
        likelihood->setObjectName(QStringLiteral("likelihood"));
        verticalLayout_3 = new QVBoxLayout(likelihood);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        likelihoodMethod = new QComboBox(likelihood);
        likelihoodMethod->setObjectName(QStringLiteral("likelihoodMethod"));

        horizontalLayout_14->addWidget(likelihoodMethod);

        label_13 = new QLabel(likelihood);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_14->addWidget(label_13);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_13);


        verticalLayout_3->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        LF_stdHit = new QDoubleSpinBox(likelihood);
        LF_stdHit->setObjectName(QStringLiteral("LF_stdHit"));
        LF_stdHit->setValue(0.35);

        horizontalLayout_15->addWidget(LF_stdHit);

        label_14 = new QLabel(likelihood);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_15->addWidget(label_14);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_14);


        verticalLayout_3->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        LF_zHit = new QDoubleSpinBox(likelihood);
        LF_zHit->setObjectName(QStringLiteral("LF_zHit"));
        LF_zHit->setValue(0.95);

        horizontalLayout_16->addWidget(LF_zHit);

        label_15 = new QLabel(likelihood);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_16->addWidget(label_15);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_15);


        verticalLayout_3->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        LF_zRandom = new QDoubleSpinBox(likelihood);
        LF_zRandom->setObjectName(QStringLiteral("LF_zRandom"));
        LF_zRandom->setValue(0.05);

        horizontalLayout_17->addWidget(LF_zRandom);

        label_16 = new QLabel(likelihood);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_17->addWidget(label_16);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_16);


        verticalLayout_3->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        LF_maxRange = new QDoubleSpinBox(likelihood);
        LF_maxRange->setObjectName(QStringLiteral("LF_maxRange"));
        LF_maxRange->setValue(81);

        horizontalLayout_18->addWidget(LF_maxRange);

        label_17 = new QLabel(likelihood);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_18->addWidget(label_17);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_17);


        verticalLayout_3->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        LF_decimation = new QSpinBox(likelihood);
        LF_decimation->setObjectName(QStringLiteral("LF_decimation"));
        LF_decimation->setValue(5);

        horizontalLayout_19->addWidget(LF_decimation);

        label_18 = new QLabel(likelihood);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_19->addWidget(label_18);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_18);


        verticalLayout_3->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        LF_maxCorrsDistance = new QDoubleSpinBox(likelihood);
        LF_maxCorrsDistance->setObjectName(QStringLiteral("LF_maxCorrsDistance"));
        LF_maxCorrsDistance->setValue(0.3);

        horizontalLayout_20->addWidget(LF_maxCorrsDistance);

        label_19 = new QLabel(likelihood);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_20->addWidget(label_19);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_19);


        verticalLayout_3->addLayout(horizontalLayout_20);

        LF_useSquareDist = new QRadioButton(likelihood);
        LF_useSquareDist->setObjectName(QStringLiteral("LF_useSquareDist"));
        LF_useSquareDist->setChecked(false);
        LF_useSquareDist->setAutoExclusive(false);

        verticalLayout_3->addWidget(LF_useSquareDist);

        LF_alternateAverageMethod = new QRadioButton(likelihood);
        LF_alternateAverageMethod->setObjectName(QStringLiteral("LF_alternateAverageMethod"));
        LF_alternateAverageMethod->setChecked(false);
        LF_alternateAverageMethod->setAutoExclusive(false);

        verticalLayout_3->addWidget(LF_alternateAverageMethod);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        MI_exponent = new QDoubleSpinBox(likelihood);
        MI_exponent->setObjectName(QStringLiteral("MI_exponent"));
        MI_exponent->setValue(2.5);

        horizontalLayout_21->addWidget(MI_exponent);

        label_20 = new QLabel(likelihood);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_21->addWidget(label_20);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_20);


        verticalLayout_3->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        MI_skip_rays = new QSpinBox(likelihood);
        MI_skip_rays->setObjectName(QStringLiteral("MI_skip_rays"));
        MI_skip_rays->setValue(10);

        horizontalLayout_22->addWidget(MI_skip_rays);

        label_21 = new QLabel(likelihood);
        label_21->setObjectName(QStringLiteral("label_21"));

        horizontalLayout_22->addWidget(label_21);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_21);


        verticalLayout_3->addLayout(horizontalLayout_22);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        MI_ratio_max_distance = new QDoubleSpinBox(likelihood);
        MI_ratio_max_distance->setObjectName(QStringLiteral("MI_ratio_max_distance"));
        MI_ratio_max_distance->setValue(1.5);

        horizontalLayout_23->addWidget(MI_ratio_max_distance);

        label_22 = new QLabel(likelihood);
        label_22->setObjectName(QStringLiteral("label_22"));

        horizontalLayout_23->addWidget(label_22);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_22);


        verticalLayout_3->addLayout(horizontalLayout_23);

        rayTracing_useDistanceFilter = new QRadioButton(likelihood);
        rayTracing_useDistanceFilter->setObjectName(QStringLiteral("rayTracing_useDistanceFilter"));
        rayTracing_useDistanceFilter->setChecked(true);
        rayTracing_useDistanceFilter->setAutoExclusive(false);

        verticalLayout_3->addWidget(rayTracing_useDistanceFilter);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        rayTracing_decimation = new QSpinBox(likelihood);
        rayTracing_decimation->setObjectName(QStringLiteral("rayTracing_decimation"));
        rayTracing_decimation->setValue(10);

        horizontalLayout_24->addWidget(rayTracing_decimation);

        label_23 = new QLabel(likelihood);
        label_23->setObjectName(QStringLiteral("label_23"));

        horizontalLayout_24->addWidget(label_23);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_23);


        verticalLayout_3->addLayout(horizontalLayout_24);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        rayTracing_stdHit = new QDoubleSpinBox(likelihood);
        rayTracing_stdHit->setObjectName(QStringLiteral("rayTracing_stdHit"));
        rayTracing_stdHit->setValue(1);

        horizontalLayout_25->addWidget(rayTracing_stdHit);

        label_24 = new QLabel(likelihood);
        label_24->setObjectName(QStringLiteral("label_24"));

        horizontalLayout_25->addWidget(label_24);

        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_24);


        verticalLayout_3->addLayout(horizontalLayout_25);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        consensus_takeEachRange = new QSpinBox(likelihood);
        consensus_takeEachRange->setObjectName(QStringLiteral("consensus_takeEachRange"));
        consensus_takeEachRange->setValue(1);

        horizontalLayout_26->addWidget(consensus_takeEachRange);

        label_25 = new QLabel(likelihood);
        label_25->setObjectName(QStringLiteral("label_25"));

        horizontalLayout_26->addWidget(label_25);

        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_26->addItem(horizontalSpacer_25);


        verticalLayout_3->addLayout(horizontalLayout_26);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        consensus_pow = new QDoubleSpinBox(likelihood);
        consensus_pow->setObjectName(QStringLiteral("consensus_pow"));
        consensus_pow->setValue(5);

        horizontalLayout_27->addWidget(consensus_pow);

        label_26 = new QLabel(likelihood);
        label_26->setObjectName(QStringLiteral("label_26"));

        horizontalLayout_27->addWidget(label_26);

        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_27->addItem(horizontalSpacer_26);


        verticalLayout_3->addLayout(horizontalLayout_27);

        enableLikelihoodCache = new QRadioButton(likelihood);
        enableLikelihoodCache->setObjectName(QStringLiteral("enableLikelihoodCache"));
        enableLikelihoodCache->setChecked(true);
        enableLikelihoodCache->setAutoExclusive(false);

        verticalLayout_3->addWidget(enableLikelihoodCache);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        tabWidget->addTab(likelihood, QString());

        horizontalLayout_8->addWidget(tabWidget);


        retranslateUi(COccupancyConfig);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(COccupancyConfig);
    } // setupUi

    void retranslateUi(QWidget *COccupancyConfig)
    {
        COccupancyConfig->setWindowTitle(QApplication::translate("COccupancyConfig", "Form", Q_NULLPTR));
        enableSaveAs3DObject->setText(QApplication::translate("COccupancyConfig", "enableSaveAs3DObject", Q_NULLPTR));
        enableObservationLikelihood->setText(QApplication::translate("COccupancyConfig", "enableObservationLikelihood", Q_NULLPTR));
        enableObservationInsertion->setText(QApplication::translate("COccupancyConfig", "enableObservationInsertion", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(generic), QApplication::translate("COccupancyConfig", "Generic", Q_NULLPTR));
        label_8->setText(QApplication::translate("COccupancyConfig", "min_x", Q_NULLPTR));
        label_9->setText(QApplication::translate("COccupancyConfig", "max_x", Q_NULLPTR));
        label_10->setText(QApplication::translate("COccupancyConfig", "min_y", Q_NULLPTR));
        label_11->setText(QApplication::translate("COccupancyConfig", "max_y", Q_NULLPTR));
        label_12->setText(QApplication::translate("COccupancyConfig", "resolution", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(creation), QApplication::translate("COccupancyConfig", "Creation", Q_NULLPTR));
        label->setText(QApplication::translate("COccupancyConfig", "mapAltitude", Q_NULLPTR));
        useMapAltitude->setText(QApplication::translate("COccupancyConfig", "useMapAltitude", Q_NULLPTR));
        label_2->setText(QApplication::translate("COccupancyConfig", "maxDistanceInsertion", Q_NULLPTR));
        label_3->setText(QApplication::translate("COccupancyConfig", "maxOccupancyUpdateCertainty", Q_NULLPTR));
        considerInvalidRangesAsFreeSpace->setText(QApplication::translate("COccupancyConfig", "considerInvalidRangesAsFreeSpace", Q_NULLPTR));
        label_7->setText(QApplication::translate("COccupancyConfig", "decimation", Q_NULLPTR));
        label_4->setText(QApplication::translate("COccupancyConfig", "horizontalTolerance", Q_NULLPTR));
        label_5->setText(QApplication::translate("COccupancyConfig", "CFD_features_gaussian_size", Q_NULLPTR));
        label_6->setText(QApplication::translate("COccupancyConfig", "CFD_features_median_size", Q_NULLPTR));
        wideningBeamsWithDistance->setText(QApplication::translate("COccupancyConfig", "wideningBeamsWithDistance", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(insert), QApplication::translate("COccupancyConfig", "Insert", Q_NULLPTR));
        label_13->setText(QApplication::translate("COccupancyConfig", "likelihoodMethod", Q_NULLPTR));
        label_14->setText(QApplication::translate("COccupancyConfig", "LF_stdHit", Q_NULLPTR));
        label_15->setText(QApplication::translate("COccupancyConfig", "LF_zHit", Q_NULLPTR));
        label_16->setText(QApplication::translate("COccupancyConfig", "LF_zRandom", Q_NULLPTR));
        label_17->setText(QApplication::translate("COccupancyConfig", "LF_maxRange", Q_NULLPTR));
        label_18->setText(QApplication::translate("COccupancyConfig", "LF_decimation", Q_NULLPTR));
        label_19->setText(QApplication::translate("COccupancyConfig", "LF_maxCorrsDistance", Q_NULLPTR));
        LF_useSquareDist->setText(QApplication::translate("COccupancyConfig", "LF_useSquareDist", Q_NULLPTR));
        LF_alternateAverageMethod->setText(QApplication::translate("COccupancyConfig", "LF_alternateAverageMethod", Q_NULLPTR));
        label_20->setText(QApplication::translate("COccupancyConfig", "MI_exponent", Q_NULLPTR));
        label_21->setText(QApplication::translate("COccupancyConfig", "MI_skip_rays", Q_NULLPTR));
        label_22->setText(QApplication::translate("COccupancyConfig", "MI_ratio_max_distance", Q_NULLPTR));
        rayTracing_useDistanceFilter->setText(QApplication::translate("COccupancyConfig", "rayTracing_useDistanceFilter", Q_NULLPTR));
        label_23->setText(QApplication::translate("COccupancyConfig", "rayTracing_decimation", Q_NULLPTR));
        label_24->setText(QApplication::translate("COccupancyConfig", "rayTracing_stdHit", Q_NULLPTR));
        label_25->setText(QApplication::translate("COccupancyConfig", "consensus_takeEachRange", Q_NULLPTR));
        label_26->setText(QApplication::translate("COccupancyConfig", "consensus_pow", Q_NULLPTR));
        enableLikelihoodCache->setText(QApplication::translate("COccupancyConfig", "enableLikelihoodCache", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(likelihood), QApplication::translate("COccupancyConfig", "Likelihood", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class COccupancyConfig: public Ui_COccupancyConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COCCUPANCYCONFIG_H

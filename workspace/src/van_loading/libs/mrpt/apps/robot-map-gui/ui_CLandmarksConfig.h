/********************************************************************************
** Form generated from reading UI file 'CLandmarksConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLANDMARKSCONFIG_H
#define UI_CLANDMARKSCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
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

class Ui_CLandmarksConfig
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *generic;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *enableSaveAs3DObject;
    QRadioButton *enableObservationLikelihood;
    QRadioButton *enableObservationInsertion;
    QSpacerItem *verticalSpacer_3;
    QWidget *insert;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *insert_SIFTs_from_monocular_images;
    QRadioButton *insert_SIFTs_from_stereo_images;
    QRadioButton *insert_Landmarks_from_range_scans;
    QHBoxLayout *horizontalLayout_7;
    QDoubleSpinBox *SiftCorrRatioThreshold;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_8;
    QDoubleSpinBox *SiftLikelihoodThreshold;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_9;
    QDoubleSpinBox *SiftEDDThreshold;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_10;
    QSpinBox *SIFTMatching3DMethod;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_11;
    QSpinBox *SIFTLikelihoodMethod;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_12;
    QDoubleSpinBox *SIFTsLoadDistanceOfTheMean;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_13;
    QDoubleSpinBox *SIFTsLoadEllipsoidWidth;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_13;
    QHBoxLayout *horizontalLayout_14;
    QDoubleSpinBox *SIFTs_stdXY;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_14;
    QHBoxLayout *horizontalLayout_15;
    QDoubleSpinBox *SIFTs_stdDisparity;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_15;
    QHBoxLayout *horizontalLayout_16;
    QSpinBox *SIFTs_numberOfKLTKeypoints;
    QLabel *label_16;
    QSpacerItem *horizontalSpacer_16;
    QHBoxLayout *horizontalLayout_17;
    QDoubleSpinBox *SIFTs_stereo_maxDepth;
    QLabel *label_17;
    QSpacerItem *horizontalSpacer_17;
    QHBoxLayout *horizontalLayout_18;
    QDoubleSpinBox *SIFTs_epipolar_TH;
    QLabel *label_18;
    QSpacerItem *horizontalSpacer_18;
    QRadioButton *PLOT_IMAGES;
    QSpacerItem *verticalSpacer;
    QWidget *likelihood;
    QVBoxLayout *verticalLayout_22;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_21;
    QHBoxLayout *horizontalLayout_19;
    QSpinBox *rangeScan2D_decimation;
    QLabel *label_19;
    QSpacerItem *horizontalSpacer_19;
    QHBoxLayout *horizontalLayout_5;
    QDoubleSpinBox *SIFTs_sigma_euclidean_dist;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_20;
    QDoubleSpinBox *SIFTs_sigma_descriptor_dist;
    QLabel *label_20;
    QSpacerItem *horizontalSpacer_20;
    QHBoxLayout *horizontalLayout_21;
    QDoubleSpinBox *SIFTs_mahaDist_std;
    QLabel *label_21;
    QSpacerItem *horizontalSpacer_21;
    QHBoxLayout *horizontalLayout_22;
    QDoubleSpinBox *SIFTnullCorrespondenceDistance;
    QLabel *label_22;
    QSpacerItem *horizontalSpacer_22;
    QHBoxLayout *horizontalLayout_24;
    QSpinBox *SIFTs_decimation;
    QLabel *label_24;
    QSpacerItem *horizontalSpacer_24;
    QHBoxLayout *horizontalLayout_25;
    QDoubleSpinBox *beaconRangesStd;
    QLabel *label_25;
    QSpacerItem *horizontalSpacer_25;
    QRadioButton *beaconRangesUseObservationStd;
    QHBoxLayout *horizontalLayout_26;
    QDoubleSpinBox *extRobotPoseStd;
    QLabel *label_26;
    QSpacerItem *horizontalSpacer_26;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *GPS_sigma;
    QLabel *label_27;
    QSpacerItem *horizontalSpacer_27;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_23;
    QDoubleSpinBox *longitude;
    QLabel *label_23;
    QSpacerItem *horizontalSpacer_23;
    QHBoxLayout *horizontalLayout_28;
    QDoubleSpinBox *latitude;
    QLabel *label_28;
    QSpacerItem *horizontalSpacer_28;
    QHBoxLayout *horizontalLayout_29;
    QDoubleSpinBox *altitude;
    QLabel *label_29;
    QSpacerItem *horizontalSpacer_29;
    QHBoxLayout *horizontalLayout_30;
    QDoubleSpinBox *ang;
    QLabel *label_30;
    QSpacerItem *horizontalSpacer_30;
    QHBoxLayout *horizontalLayout_31;
    QDoubleSpinBox *x_shift;
    QLabel *label_31;
    QSpacerItem *horizontalSpacer_31;
    QHBoxLayout *horizontalLayout_32;
    QDoubleSpinBox *y_shift;
    QLabel *label_32;
    QSpacerItem *horizontalSpacer_32;
    QHBoxLayout *horizontalLayout_6;
    QSpinBox *min_sat;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_20;
    QComboBox *TFeatureType;
    QHBoxLayout *horizontalLayout_33;
    QSpinBox *patchSize;
    QLabel *label_33;
    QSpacerItem *horizontalSpacer_33;
    QRadioButton *useMask;
    QRadioButton *addNewFeatures;
    QRadioButton *FIND_SUBPIXEL;
    QTabWidget *tabWidget_2;
    QWidget *tab;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_34;
    QSpinBox *radiusKLTOptions;
    QLabel *label_34;
    QSpacerItem *horizontalSpacer_34;
    QHBoxLayout *horizontalLayout_35;
    QDoubleSpinBox *thresholdKLTOptions;
    QLabel *label_35;
    QSpacerItem *horizontalSpacer_35;
    QHBoxLayout *horizontalLayout_36;
    QDoubleSpinBox *min_distanceKLTOptions;
    QLabel *label_36;
    QSpacerItem *horizontalSpacer_36;
    QRadioButton *tile_imageKLTOptions;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_38;
    QDoubleSpinBox *thresholdHarris;
    QLabel *label_38;
    QSpacerItem *horizontalSpacer_38;
    QHBoxLayout *horizontalLayout_39;
    QDoubleSpinBox *k;
    QLabel *label_39;
    QSpacerItem *horizontalSpacer_39;
    QHBoxLayout *horizontalLayout_40;
    QDoubleSpinBox *sigma;
    QLabel *label_40;
    QSpacerItem *horizontalSpacer_40;
    QHBoxLayout *horizontalLayout_37;
    QSpinBox *radiusHarris;
    QLabel *label_37;
    QSpacerItem *horizontalSpacer_37;
    QHBoxLayout *horizontalLayout_41;
    QDoubleSpinBox *min_distanceHarris;
    QLabel *label_41;
    QSpacerItem *horizontalSpacer_41;
    QRadioButton *tile_imageHarris;
    QSpacerItem *verticalSpacer_9;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_42;
    QSpinBox *thresholdFASTOptions;
    QLabel *label_42;
    QSpacerItem *horizontalSpacer_42;
    QHBoxLayout *horizontalLayout_44;
    QDoubleSpinBox *min_distanceFASTOptions;
    QLabel *label_44;
    QSpacerItem *horizontalSpacer_44;
    QRadioButton *nonmax_suppression;
    QRadioButton *use_KLT_response;
    QSpacerItem *verticalSpacer_5;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_43;
    QSpinBox *n_levels;
    QLabel *label_43;
    QSpacerItem *horizontalSpacer_43;
    QHBoxLayout *horizontalLayout_45;
    QSpinBox *min_distanceORBOptions;
    QLabel *label_45;
    QSpacerItem *horizontalSpacer_45;
    QHBoxLayout *horizontalLayout_46;
    QDoubleSpinBox *scale_factor;
    QLabel *label_46;
    QSpacerItem *horizontalSpacer_46;
    QRadioButton *extract_patch;
    QSpacerItem *verticalSpacer_8;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout;
    QComboBox *implementation;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_48;
    QDoubleSpinBox *thresholdSIFTOptions;
    QLabel *label_48;
    QSpacerItem *horizontalSpacer_48;
    QHBoxLayout *horizontalLayout_49;
    QDoubleSpinBox *edgeThreshold;
    QLabel *label_49;
    QSpacerItem *horizontalSpacer_49;
    QSpacerItem *verticalSpacer_6;
    QWidget *tab_6;
    QVBoxLayout *verticalLayout_9;
    QRadioButton *rotation_invariant;
    QHBoxLayout *horizontalLayout_47;
    QSpinBox *hessianThreshold;
    QLabel *label_47;
    QSpacerItem *horizontalSpacer_47;
    QHBoxLayout *horizontalLayout_50;
    QSpinBox *nOctaves;
    QLabel *label_50;
    QSpacerItem *horizontalSpacer_50;
    QHBoxLayout *horizontalLayout_51;
    QSpinBox *nLayersPerOctave;
    QLabel *label_51;
    QSpacerItem *horizontalSpacer_51;
    QSpacerItem *verticalSpacer_7;
    QWidget *tab_9;
    QVBoxLayout *verticalLayout_17;
    QHBoxLayout *horizontalLayout_82;
    QSpinBox *hist_size_intensity;
    QLabel *label_82;
    QSpacerItem *horizontalSpacer_82;
    QHBoxLayout *horizontalLayout_83;
    QSpinBox *hist_size_distance;
    QLabel *label_83;
    QSpacerItem *horizontalSpacer_83;
    QHBoxLayout *horizontalLayout_85;
    QDoubleSpinBox *std_dist;
    QLabel *label_85;
    QSpacerItem *horizontalSpacer_85;
    QHBoxLayout *horizontalLayout_86;
    QDoubleSpinBox *std_intensity;
    QLabel *label_86;
    QSpacerItem *horizontalSpacer_86;
    QHBoxLayout *horizontalLayout_84;
    QSpinBox *radiusSpinImagesOptions;
    QLabel *label_84;
    QSpacerItem *horizontalSpacer_84;
    QSpacerItem *verticalSpacer_16;
    QWidget *tab_8;
    QVBoxLayout *verticalLayout_18;
    QHBoxLayout *horizontalLayout_55;
    QSpinBox *bins_angle;
    QLabel *label_55;
    QSpacerItem *horizontalSpacer_55;
    QHBoxLayout *horizontalLayout_56;
    QSpinBox *bins_distance;
    QLabel *label_56;
    QSpacerItem *horizontalSpacer_56;
    QHBoxLayout *horizontalLayout_57;
    QSpinBox *radiusPolarImagesOptions;
    QLabel *label_57;
    QSpacerItem *horizontalSpacer_57;
    QSpacerItem *verticalSpacer_17;
    QWidget *tab_7;
    QVBoxLayout *verticalLayout_19;
    QHBoxLayout *horizontalLayout_52;
    QSpinBox *radiusLogPolarImagesOptions;
    QLabel *label_52;
    QSpacerItem *horizontalSpacer_52;
    QHBoxLayout *horizontalLayout_53;
    QSpinBox *num_angles;
    QLabel *label_53;
    QSpacerItem *horizontalSpacer_53;
    QHBoxLayout *horizontalLayout_54;
    QDoubleSpinBox *rho_scale;
    QLabel *label_54;
    QSpacerItem *horizontalSpacer_54;
    QSpacerItem *verticalSpacer_18;

    void setupUi(QWidget *CLandmarksConfig)
    {
        if (CLandmarksConfig->objectName().isEmpty())
            CLandmarksConfig->setObjectName(QStringLiteral("CLandmarksConfig"));
        CLandmarksConfig->resize(829, 917);
        verticalLayout = new QVBoxLayout(CLandmarksConfig);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(CLandmarksConfig);
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

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        tabWidget->addTab(generic, QString());
        insert = new QWidget();
        insert->setObjectName(QStringLiteral("insert"));
        verticalLayout_2 = new QVBoxLayout(insert);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        insert_SIFTs_from_monocular_images = new QRadioButton(insert);
        insert_SIFTs_from_monocular_images->setObjectName(QStringLiteral("insert_SIFTs_from_monocular_images"));
        insert_SIFTs_from_monocular_images->setChecked(false);
        insert_SIFTs_from_monocular_images->setAutoExclusive(false);

        verticalLayout_2->addWidget(insert_SIFTs_from_monocular_images);

        insert_SIFTs_from_stereo_images = new QRadioButton(insert);
        insert_SIFTs_from_stereo_images->setObjectName(QStringLiteral("insert_SIFTs_from_stereo_images"));
        insert_SIFTs_from_stereo_images->setChecked(false);
        insert_SIFTs_from_stereo_images->setAutoExclusive(false);

        verticalLayout_2->addWidget(insert_SIFTs_from_stereo_images);

        insert_Landmarks_from_range_scans = new QRadioButton(insert);
        insert_Landmarks_from_range_scans->setObjectName(QStringLiteral("insert_Landmarks_from_range_scans"));
        insert_Landmarks_from_range_scans->setChecked(false);
        insert_Landmarks_from_range_scans->setAutoExclusive(false);

        verticalLayout_2->addWidget(insert_Landmarks_from_range_scans);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        SiftCorrRatioThreshold = new QDoubleSpinBox(insert);
        SiftCorrRatioThreshold->setObjectName(QStringLiteral("SiftCorrRatioThreshold"));
        SiftCorrRatioThreshold->setValue(0);

        horizontalLayout_7->addWidget(SiftCorrRatioThreshold);

        label_7 = new QLabel(insert);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        SiftLikelihoodThreshold = new QDoubleSpinBox(insert);
        SiftLikelihoodThreshold->setObjectName(QStringLiteral("SiftLikelihoodThreshold"));
        SiftLikelihoodThreshold->setValue(0);

        horizontalLayout_8->addWidget(SiftLikelihoodThreshold);

        label_8 = new QLabel(insert);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_8->addWidget(label_8);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        SiftEDDThreshold = new QDoubleSpinBox(insert);
        SiftEDDThreshold->setObjectName(QStringLiteral("SiftEDDThreshold"));
        SiftEDDThreshold->setValue(0);

        horizontalLayout_9->addWidget(SiftEDDThreshold);

        label_9 = new QLabel(insert);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_9->addWidget(label_9);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        SIFTMatching3DMethod = new QSpinBox(insert);
        SIFTMatching3DMethod->setObjectName(QStringLiteral("SIFTMatching3DMethod"));

        horizontalLayout_10->addWidget(SIFTMatching3DMethod);

        label_10 = new QLabel(insert);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_10->addWidget(label_10);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_10);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        SIFTLikelihoodMethod = new QSpinBox(insert);
        SIFTLikelihoodMethod->setObjectName(QStringLiteral("SIFTLikelihoodMethod"));

        horizontalLayout_11->addWidget(SIFTLikelihoodMethod);

        label_11 = new QLabel(insert);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_11->addWidget(label_11);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_11);


        verticalLayout_2->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        SIFTsLoadDistanceOfTheMean = new QDoubleSpinBox(insert);
        SIFTsLoadDistanceOfTheMean->setObjectName(QStringLiteral("SIFTsLoadDistanceOfTheMean"));
        SIFTsLoadDistanceOfTheMean->setValue(0);

        horizontalLayout_12->addWidget(SIFTsLoadDistanceOfTheMean);

        label_12 = new QLabel(insert);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_12->addWidget(label_12);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_12);


        verticalLayout_2->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        SIFTsLoadEllipsoidWidth = new QDoubleSpinBox(insert);
        SIFTsLoadEllipsoidWidth->setObjectName(QStringLiteral("SIFTsLoadEllipsoidWidth"));
        SIFTsLoadEllipsoidWidth->setValue(0);

        horizontalLayout_13->addWidget(SIFTsLoadEllipsoidWidth);

        label_13 = new QLabel(insert);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_13->addWidget(label_13);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_13);


        verticalLayout_2->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        SIFTs_stdXY = new QDoubleSpinBox(insert);
        SIFTs_stdXY->setObjectName(QStringLiteral("SIFTs_stdXY"));
        SIFTs_stdXY->setValue(0);

        horizontalLayout_14->addWidget(SIFTs_stdXY);

        label_14 = new QLabel(insert);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_14->addWidget(label_14);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_14);


        verticalLayout_2->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        SIFTs_stdDisparity = new QDoubleSpinBox(insert);
        SIFTs_stdDisparity->setObjectName(QStringLiteral("SIFTs_stdDisparity"));
        SIFTs_stdDisparity->setValue(0);

        horizontalLayout_15->addWidget(SIFTs_stdDisparity);

        label_15 = new QLabel(insert);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_15->addWidget(label_15);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_15);


        verticalLayout_2->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        SIFTs_numberOfKLTKeypoints = new QSpinBox(insert);
        SIFTs_numberOfKLTKeypoints->setObjectName(QStringLiteral("SIFTs_numberOfKLTKeypoints"));

        horizontalLayout_16->addWidget(SIFTs_numberOfKLTKeypoints);

        label_16 = new QLabel(insert);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_16->addWidget(label_16);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_16);


        verticalLayout_2->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        SIFTs_stereo_maxDepth = new QDoubleSpinBox(insert);
        SIFTs_stereo_maxDepth->setObjectName(QStringLiteral("SIFTs_stereo_maxDepth"));
        SIFTs_stereo_maxDepth->setValue(0);

        horizontalLayout_17->addWidget(SIFTs_stereo_maxDepth);

        label_17 = new QLabel(insert);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_17->addWidget(label_17);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_17);


        verticalLayout_2->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        SIFTs_epipolar_TH = new QDoubleSpinBox(insert);
        SIFTs_epipolar_TH->setObjectName(QStringLiteral("SIFTs_epipolar_TH"));
        SIFTs_epipolar_TH->setValue(0);

        horizontalLayout_18->addWidget(SIFTs_epipolar_TH);

        label_18 = new QLabel(insert);
        label_18->setObjectName(QStringLiteral("label_18"));

        horizontalLayout_18->addWidget(label_18);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_18);


        verticalLayout_2->addLayout(horizontalLayout_18);

        PLOT_IMAGES = new QRadioButton(insert);
        PLOT_IMAGES->setObjectName(QStringLiteral("PLOT_IMAGES"));
        PLOT_IMAGES->setChecked(false);
        PLOT_IMAGES->setAutoExclusive(false);

        verticalLayout_2->addWidget(PLOT_IMAGES);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabWidget->addTab(insert, QString());
        likelihood = new QWidget();
        likelihood->setObjectName(QStringLiteral("likelihood"));
        verticalLayout_22 = new QVBoxLayout(likelihood);
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        rangeScan2D_decimation = new QSpinBox(likelihood);
        rangeScan2D_decimation->setObjectName(QStringLiteral("rangeScan2D_decimation"));
        rangeScan2D_decimation->setValue(10);

        horizontalLayout_19->addWidget(rangeScan2D_decimation);

        label_19 = new QLabel(likelihood);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_19->addWidget(label_19);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_19);


        verticalLayout_21->addLayout(horizontalLayout_19);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        SIFTs_sigma_euclidean_dist = new QDoubleSpinBox(likelihood);
        SIFTs_sigma_euclidean_dist->setObjectName(QStringLiteral("SIFTs_sigma_euclidean_dist"));
        SIFTs_sigma_euclidean_dist->setValue(1);

        horizontalLayout_5->addWidget(SIFTs_sigma_euclidean_dist);

        label_5 = new QLabel(likelihood);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_21->addLayout(horizontalLayout_5);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        SIFTs_sigma_descriptor_dist = new QDoubleSpinBox(likelihood);
        SIFTs_sigma_descriptor_dist->setObjectName(QStringLiteral("SIFTs_sigma_descriptor_dist"));
        SIFTs_sigma_descriptor_dist->setValue(1);

        horizontalLayout_20->addWidget(SIFTs_sigma_descriptor_dist);

        label_20 = new QLabel(likelihood);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_20->addWidget(label_20);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_20);


        verticalLayout_21->addLayout(horizontalLayout_20);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        SIFTs_mahaDist_std = new QDoubleSpinBox(likelihood);
        SIFTs_mahaDist_std->setObjectName(QStringLiteral("SIFTs_mahaDist_std"));
        SIFTs_mahaDist_std->setValue(1);

        horizontalLayout_21->addWidget(SIFTs_mahaDist_std);

        label_21 = new QLabel(likelihood);
        label_21->setObjectName(QStringLiteral("label_21"));

        horizontalLayout_21->addWidget(label_21);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer_21);


        verticalLayout_21->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        SIFTnullCorrespondenceDistance = new QDoubleSpinBox(likelihood);
        SIFTnullCorrespondenceDistance->setObjectName(QStringLiteral("SIFTnullCorrespondenceDistance"));
        SIFTnullCorrespondenceDistance->setValue(1);

        horizontalLayout_22->addWidget(SIFTnullCorrespondenceDistance);

        label_22 = new QLabel(likelihood);
        label_22->setObjectName(QStringLiteral("label_22"));

        horizontalLayout_22->addWidget(label_22);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_22);


        verticalLayout_21->addLayout(horizontalLayout_22);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        SIFTs_decimation = new QSpinBox(likelihood);
        SIFTs_decimation->setObjectName(QStringLiteral("SIFTs_decimation"));
        SIFTs_decimation->setValue(10);

        horizontalLayout_24->addWidget(SIFTs_decimation);

        label_24 = new QLabel(likelihood);
        label_24->setObjectName(QStringLiteral("label_24"));

        horizontalLayout_24->addWidget(label_24);

        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_24);


        verticalLayout_21->addLayout(horizontalLayout_24);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        beaconRangesStd = new QDoubleSpinBox(likelihood);
        beaconRangesStd->setObjectName(QStringLiteral("beaconRangesStd"));
        beaconRangesStd->setValue(1);

        horizontalLayout_25->addWidget(beaconRangesStd);

        label_25 = new QLabel(likelihood);
        label_25->setObjectName(QStringLiteral("label_25"));

        horizontalLayout_25->addWidget(label_25);

        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_25);


        verticalLayout_21->addLayout(horizontalLayout_25);

        beaconRangesUseObservationStd = new QRadioButton(likelihood);
        beaconRangesUseObservationStd->setObjectName(QStringLiteral("beaconRangesUseObservationStd"));
        beaconRangesUseObservationStd->setChecked(false);
        beaconRangesUseObservationStd->setAutoExclusive(false);

        verticalLayout_21->addWidget(beaconRangesUseObservationStd);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        extRobotPoseStd = new QDoubleSpinBox(likelihood);
        extRobotPoseStd->setObjectName(QStringLiteral("extRobotPoseStd"));
        extRobotPoseStd->setValue(1);

        horizontalLayout_26->addWidget(extRobotPoseStd);

        label_26 = new QLabel(likelihood);
        label_26->setObjectName(QStringLiteral("label_26"));

        horizontalLayout_26->addWidget(label_26);

        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_26->addItem(horizontalSpacer_26);


        verticalLayout_21->addLayout(horizontalLayout_26);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        GPS_sigma = new QDoubleSpinBox(likelihood);
        GPS_sigma->setObjectName(QStringLiteral("GPS_sigma"));
        GPS_sigma->setValue(1);

        horizontalLayout_2->addWidget(GPS_sigma);

        label_27 = new QLabel(likelihood);
        label_27->setObjectName(QStringLiteral("label_27"));

        horizontalLayout_2->addWidget(label_27);

        horizontalSpacer_27 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_27);


        verticalLayout_21->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_21);

        groupBox = new QGroupBox(likelihood);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        longitude = new QDoubleSpinBox(groupBox);
        longitude->setObjectName(QStringLiteral("longitude"));
        longitude->setValue(1);

        horizontalLayout_23->addWidget(longitude);

        label_23 = new QLabel(groupBox);
        label_23->setObjectName(QStringLiteral("label_23"));

        horizontalLayout_23->addWidget(label_23);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_23);


        verticalLayout_3->addLayout(horizontalLayout_23);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName(QStringLiteral("horizontalLayout_28"));
        latitude = new QDoubleSpinBox(groupBox);
        latitude->setObjectName(QStringLiteral("latitude"));
        latitude->setValue(1);

        horizontalLayout_28->addWidget(latitude);

        label_28 = new QLabel(groupBox);
        label_28->setObjectName(QStringLiteral("label_28"));

        horizontalLayout_28->addWidget(label_28);

        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_28->addItem(horizontalSpacer_28);


        verticalLayout_3->addLayout(horizontalLayout_28);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setObjectName(QStringLiteral("horizontalLayout_29"));
        altitude = new QDoubleSpinBox(groupBox);
        altitude->setObjectName(QStringLiteral("altitude"));
        altitude->setValue(1);

        horizontalLayout_29->addWidget(altitude);

        label_29 = new QLabel(groupBox);
        label_29->setObjectName(QStringLiteral("label_29"));

        horizontalLayout_29->addWidget(label_29);

        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_29->addItem(horizontalSpacer_29);


        verticalLayout_3->addLayout(horizontalLayout_29);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setObjectName(QStringLiteral("horizontalLayout_30"));
        ang = new QDoubleSpinBox(groupBox);
        ang->setObjectName(QStringLiteral("ang"));
        ang->setValue(1);

        horizontalLayout_30->addWidget(ang);

        label_30 = new QLabel(groupBox);
        label_30->setObjectName(QStringLiteral("label_30"));

        horizontalLayout_30->addWidget(label_30);

        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_30->addItem(horizontalSpacer_30);


        verticalLayout_3->addLayout(horizontalLayout_30);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setObjectName(QStringLiteral("horizontalLayout_31"));
        x_shift = new QDoubleSpinBox(groupBox);
        x_shift->setObjectName(QStringLiteral("x_shift"));
        x_shift->setValue(1);

        horizontalLayout_31->addWidget(x_shift);

        label_31 = new QLabel(groupBox);
        label_31->setObjectName(QStringLiteral("label_31"));

        horizontalLayout_31->addWidget(label_31);

        horizontalSpacer_31 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_31->addItem(horizontalSpacer_31);


        verticalLayout_3->addLayout(horizontalLayout_31);

        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setObjectName(QStringLiteral("horizontalLayout_32"));
        y_shift = new QDoubleSpinBox(groupBox);
        y_shift->setObjectName(QStringLiteral("y_shift"));
        y_shift->setValue(1);

        horizontalLayout_32->addWidget(y_shift);

        label_32 = new QLabel(groupBox);
        label_32->setObjectName(QStringLiteral("label_32"));

        horizontalLayout_32->addWidget(label_32);

        horizontalSpacer_32 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_32->addItem(horizontalSpacer_32);


        verticalLayout_3->addLayout(horizontalLayout_32);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        min_sat = new QSpinBox(groupBox);
        min_sat->setObjectName(QStringLiteral("min_sat"));
        min_sat->setValue(10);

        horizontalLayout_6->addWidget(min_sat);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        verticalLayout_3->addLayout(horizontalLayout_6);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout_3->addWidget(groupBox);


        verticalLayout_22->addLayout(horizontalLayout_3);

        groupBox_2 = new QGroupBox(likelihood);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_20 = new QVBoxLayout(groupBox_2);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        TFeatureType = new QComboBox(groupBox_2);
        TFeatureType->setObjectName(QStringLiteral("TFeatureType"));

        verticalLayout_20->addWidget(TFeatureType);

        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setObjectName(QStringLiteral("horizontalLayout_33"));
        patchSize = new QSpinBox(groupBox_2);
        patchSize->setObjectName(QStringLiteral("patchSize"));
        patchSize->setValue(10);

        horizontalLayout_33->addWidget(patchSize);

        label_33 = new QLabel(groupBox_2);
        label_33->setObjectName(QStringLiteral("label_33"));

        horizontalLayout_33->addWidget(label_33);

        horizontalSpacer_33 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_33->addItem(horizontalSpacer_33);


        verticalLayout_20->addLayout(horizontalLayout_33);

        useMask = new QRadioButton(groupBox_2);
        useMask->setObjectName(QStringLiteral("useMask"));
        useMask->setChecked(false);
        useMask->setAutoExclusive(false);

        verticalLayout_20->addWidget(useMask);

        addNewFeatures = new QRadioButton(groupBox_2);
        addNewFeatures->setObjectName(QStringLiteral("addNewFeatures"));
        addNewFeatures->setChecked(false);
        addNewFeatures->setAutoExclusive(false);

        verticalLayout_20->addWidget(addNewFeatures);

        FIND_SUBPIXEL = new QRadioButton(groupBox_2);
        FIND_SUBPIXEL->setObjectName(QStringLiteral("FIND_SUBPIXEL"));
        FIND_SUBPIXEL->setChecked(false);
        FIND_SUBPIXEL->setAutoExclusive(false);

        verticalLayout_20->addWidget(FIND_SUBPIXEL);

        tabWidget_2 = new QTabWidget(groupBox_2);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_10 = new QVBoxLayout(tab);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        horizontalLayout_34 = new QHBoxLayout();
        horizontalLayout_34->setObjectName(QStringLiteral("horizontalLayout_34"));
        radiusKLTOptions = new QSpinBox(tab);
        radiusKLTOptions->setObjectName(QStringLiteral("radiusKLTOptions"));
        radiusKLTOptions->setValue(10);

        horizontalLayout_34->addWidget(radiusKLTOptions);

        label_34 = new QLabel(tab);
        label_34->setObjectName(QStringLiteral("label_34"));

        horizontalLayout_34->addWidget(label_34);

        horizontalSpacer_34 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_34->addItem(horizontalSpacer_34);


        verticalLayout_10->addLayout(horizontalLayout_34);

        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setObjectName(QStringLiteral("horizontalLayout_35"));
        thresholdKLTOptions = new QDoubleSpinBox(tab);
        thresholdKLTOptions->setObjectName(QStringLiteral("thresholdKLTOptions"));
        thresholdKLTOptions->setValue(1);

        horizontalLayout_35->addWidget(thresholdKLTOptions);

        label_35 = new QLabel(tab);
        label_35->setObjectName(QStringLiteral("label_35"));

        horizontalLayout_35->addWidget(label_35);

        horizontalSpacer_35 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_35->addItem(horizontalSpacer_35);


        verticalLayout_10->addLayout(horizontalLayout_35);

        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setObjectName(QStringLiteral("horizontalLayout_36"));
        min_distanceKLTOptions = new QDoubleSpinBox(tab);
        min_distanceKLTOptions->setObjectName(QStringLiteral("min_distanceKLTOptions"));
        min_distanceKLTOptions->setValue(1);

        horizontalLayout_36->addWidget(min_distanceKLTOptions);

        label_36 = new QLabel(tab);
        label_36->setObjectName(QStringLiteral("label_36"));

        horizontalLayout_36->addWidget(label_36);

        horizontalSpacer_36 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_36->addItem(horizontalSpacer_36);


        verticalLayout_10->addLayout(horizontalLayout_36);

        tile_imageKLTOptions = new QRadioButton(tab);
        tile_imageKLTOptions->setObjectName(QStringLiteral("tile_imageKLTOptions"));
        tile_imageKLTOptions->setChecked(false);
        tile_imageKLTOptions->setAutoExclusive(false);

        verticalLayout_10->addWidget(tile_imageKLTOptions);

        verticalSpacer_4 = new QSpacerItem(20, 101, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_4);

        tabWidget_2->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_8 = new QVBoxLayout(tab_3);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_38 = new QHBoxLayout();
        horizontalLayout_38->setObjectName(QStringLiteral("horizontalLayout_38"));
        thresholdHarris = new QDoubleSpinBox(tab_3);
        thresholdHarris->setObjectName(QStringLiteral("thresholdHarris"));
        thresholdHarris->setValue(1);

        horizontalLayout_38->addWidget(thresholdHarris);

        label_38 = new QLabel(tab_3);
        label_38->setObjectName(QStringLiteral("label_38"));

        horizontalLayout_38->addWidget(label_38);

        horizontalSpacer_38 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_38->addItem(horizontalSpacer_38);


        verticalLayout_8->addLayout(horizontalLayout_38);

        horizontalLayout_39 = new QHBoxLayout();
        horizontalLayout_39->setObjectName(QStringLiteral("horizontalLayout_39"));
        k = new QDoubleSpinBox(tab_3);
        k->setObjectName(QStringLiteral("k"));
        k->setValue(1);

        horizontalLayout_39->addWidget(k);

        label_39 = new QLabel(tab_3);
        label_39->setObjectName(QStringLiteral("label_39"));

        horizontalLayout_39->addWidget(label_39);

        horizontalSpacer_39 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_39->addItem(horizontalSpacer_39);


        verticalLayout_8->addLayout(horizontalLayout_39);

        horizontalLayout_40 = new QHBoxLayout();
        horizontalLayout_40->setObjectName(QStringLiteral("horizontalLayout_40"));
        sigma = new QDoubleSpinBox(tab_3);
        sigma->setObjectName(QStringLiteral("sigma"));
        sigma->setValue(1);

        horizontalLayout_40->addWidget(sigma);

        label_40 = new QLabel(tab_3);
        label_40->setObjectName(QStringLiteral("label_40"));

        horizontalLayout_40->addWidget(label_40);

        horizontalSpacer_40 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_40->addItem(horizontalSpacer_40);


        verticalLayout_8->addLayout(horizontalLayout_40);

        horizontalLayout_37 = new QHBoxLayout();
        horizontalLayout_37->setObjectName(QStringLiteral("horizontalLayout_37"));
        radiusHarris = new QSpinBox(tab_3);
        radiusHarris->setObjectName(QStringLiteral("radiusHarris"));
        radiusHarris->setValue(10);

        horizontalLayout_37->addWidget(radiusHarris);

        label_37 = new QLabel(tab_3);
        label_37->setObjectName(QStringLiteral("label_37"));

        horizontalLayout_37->addWidget(label_37);

        horizontalSpacer_37 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_37->addItem(horizontalSpacer_37);


        verticalLayout_8->addLayout(horizontalLayout_37);

        horizontalLayout_41 = new QHBoxLayout();
        horizontalLayout_41->setObjectName(QStringLiteral("horizontalLayout_41"));
        min_distanceHarris = new QDoubleSpinBox(tab_3);
        min_distanceHarris->setObjectName(QStringLiteral("min_distanceHarris"));
        min_distanceHarris->setValue(1);

        horizontalLayout_41->addWidget(min_distanceHarris);

        label_41 = new QLabel(tab_3);
        label_41->setObjectName(QStringLiteral("label_41"));

        horizontalLayout_41->addWidget(label_41);

        horizontalSpacer_41 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_41->addItem(horizontalSpacer_41);


        verticalLayout_8->addLayout(horizontalLayout_41);

        tile_imageHarris = new QRadioButton(tab_3);
        tile_imageHarris->setObjectName(QStringLiteral("tile_imageHarris"));
        tile_imageHarris->setChecked(false);
        tile_imageHarris->setAutoExclusive(false);

        verticalLayout_8->addWidget(tile_imageHarris);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_9);

        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayout_6 = new QVBoxLayout(tab_4);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_42 = new QHBoxLayout();
        horizontalLayout_42->setObjectName(QStringLiteral("horizontalLayout_42"));
        thresholdFASTOptions = new QSpinBox(tab_4);
        thresholdFASTOptions->setObjectName(QStringLiteral("thresholdFASTOptions"));
        thresholdFASTOptions->setValue(10);

        horizontalLayout_42->addWidget(thresholdFASTOptions);

        label_42 = new QLabel(tab_4);
        label_42->setObjectName(QStringLiteral("label_42"));

        horizontalLayout_42->addWidget(label_42);

        horizontalSpacer_42 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_42->addItem(horizontalSpacer_42);


        verticalLayout_6->addLayout(horizontalLayout_42);

        horizontalLayout_44 = new QHBoxLayout();
        horizontalLayout_44->setObjectName(QStringLiteral("horizontalLayout_44"));
        min_distanceFASTOptions = new QDoubleSpinBox(tab_4);
        min_distanceFASTOptions->setObjectName(QStringLiteral("min_distanceFASTOptions"));
        min_distanceFASTOptions->setValue(1);

        horizontalLayout_44->addWidget(min_distanceFASTOptions);

        label_44 = new QLabel(tab_4);
        label_44->setObjectName(QStringLiteral("label_44"));

        horizontalLayout_44->addWidget(label_44);

        horizontalSpacer_44 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_44->addItem(horizontalSpacer_44);


        verticalLayout_6->addLayout(horizontalLayout_44);

        nonmax_suppression = new QRadioButton(tab_4);
        nonmax_suppression->setObjectName(QStringLiteral("nonmax_suppression"));
        nonmax_suppression->setChecked(false);
        nonmax_suppression->setAutoExclusive(false);

        verticalLayout_6->addWidget(nonmax_suppression);

        use_KLT_response = new QRadioButton(tab_4);
        use_KLT_response->setObjectName(QStringLiteral("use_KLT_response"));
        use_KLT_response->setChecked(false);
        use_KLT_response->setAutoExclusive(false);

        verticalLayout_6->addWidget(use_KLT_response);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_5);

        tabWidget_2->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_5 = new QVBoxLayout(tab_2);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_43 = new QHBoxLayout();
        horizontalLayout_43->setObjectName(QStringLiteral("horizontalLayout_43"));
        n_levels = new QSpinBox(tab_2);
        n_levels->setObjectName(QStringLiteral("n_levels"));
        n_levels->setValue(10);

        horizontalLayout_43->addWidget(n_levels);

        label_43 = new QLabel(tab_2);
        label_43->setObjectName(QStringLiteral("label_43"));

        horizontalLayout_43->addWidget(label_43);

        horizontalSpacer_43 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_43->addItem(horizontalSpacer_43);


        verticalLayout_5->addLayout(horizontalLayout_43);

        horizontalLayout_45 = new QHBoxLayout();
        horizontalLayout_45->setObjectName(QStringLiteral("horizontalLayout_45"));
        min_distanceORBOptions = new QSpinBox(tab_2);
        min_distanceORBOptions->setObjectName(QStringLiteral("min_distanceORBOptions"));
        min_distanceORBOptions->setValue(10);

        horizontalLayout_45->addWidget(min_distanceORBOptions);

        label_45 = new QLabel(tab_2);
        label_45->setObjectName(QStringLiteral("label_45"));

        horizontalLayout_45->addWidget(label_45);

        horizontalSpacer_45 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_45->addItem(horizontalSpacer_45);


        verticalLayout_5->addLayout(horizontalLayout_45);

        horizontalLayout_46 = new QHBoxLayout();
        horizontalLayout_46->setObjectName(QStringLiteral("horizontalLayout_46"));
        scale_factor = new QDoubleSpinBox(tab_2);
        scale_factor->setObjectName(QStringLiteral("scale_factor"));
        scale_factor->setValue(1);

        horizontalLayout_46->addWidget(scale_factor);

        label_46 = new QLabel(tab_2);
        label_46->setObjectName(QStringLiteral("label_46"));

        horizontalLayout_46->addWidget(label_46);

        horizontalSpacer_46 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_46->addItem(horizontalSpacer_46);


        verticalLayout_5->addLayout(horizontalLayout_46);

        extract_patch = new QRadioButton(tab_2);
        extract_patch->setObjectName(QStringLiteral("extract_patch"));
        extract_patch->setChecked(false);
        extract_patch->setAutoExclusive(false);

        verticalLayout_5->addWidget(extract_patch);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_8);

        tabWidget_2->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        verticalLayout_7 = new QVBoxLayout(tab_5);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        implementation = new QComboBox(tab_5);
        implementation->setObjectName(QStringLiteral("implementation"));

        horizontalLayout->addWidget(implementation);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_7->addLayout(horizontalLayout);

        horizontalLayout_48 = new QHBoxLayout();
        horizontalLayout_48->setObjectName(QStringLiteral("horizontalLayout_48"));
        thresholdSIFTOptions = new QDoubleSpinBox(tab_5);
        thresholdSIFTOptions->setObjectName(QStringLiteral("thresholdSIFTOptions"));
        thresholdSIFTOptions->setValue(1);

        horizontalLayout_48->addWidget(thresholdSIFTOptions);

        label_48 = new QLabel(tab_5);
        label_48->setObjectName(QStringLiteral("label_48"));

        horizontalLayout_48->addWidget(label_48);

        horizontalSpacer_48 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_48->addItem(horizontalSpacer_48);


        verticalLayout_7->addLayout(horizontalLayout_48);

        horizontalLayout_49 = new QHBoxLayout();
        horizontalLayout_49->setObjectName(QStringLiteral("horizontalLayout_49"));
        edgeThreshold = new QDoubleSpinBox(tab_5);
        edgeThreshold->setObjectName(QStringLiteral("edgeThreshold"));
        edgeThreshold->setValue(1);

        horizontalLayout_49->addWidget(edgeThreshold);

        label_49 = new QLabel(tab_5);
        label_49->setObjectName(QStringLiteral("label_49"));

        horizontalLayout_49->addWidget(label_49);

        horizontalSpacer_49 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_49->addItem(horizontalSpacer_49);


        verticalLayout_7->addLayout(horizontalLayout_49);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_6);

        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        verticalLayout_9 = new QVBoxLayout(tab_6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        rotation_invariant = new QRadioButton(tab_6);
        rotation_invariant->setObjectName(QStringLiteral("rotation_invariant"));
        rotation_invariant->setChecked(false);
        rotation_invariant->setAutoExclusive(false);

        verticalLayout_9->addWidget(rotation_invariant);

        horizontalLayout_47 = new QHBoxLayout();
        horizontalLayout_47->setObjectName(QStringLiteral("horizontalLayout_47"));
        hessianThreshold = new QSpinBox(tab_6);
        hessianThreshold->setObjectName(QStringLiteral("hessianThreshold"));
        hessianThreshold->setValue(10);

        horizontalLayout_47->addWidget(hessianThreshold);

        label_47 = new QLabel(tab_6);
        label_47->setObjectName(QStringLiteral("label_47"));

        horizontalLayout_47->addWidget(label_47);

        horizontalSpacer_47 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_47->addItem(horizontalSpacer_47);


        verticalLayout_9->addLayout(horizontalLayout_47);

        horizontalLayout_50 = new QHBoxLayout();
        horizontalLayout_50->setObjectName(QStringLiteral("horizontalLayout_50"));
        nOctaves = new QSpinBox(tab_6);
        nOctaves->setObjectName(QStringLiteral("nOctaves"));
        nOctaves->setValue(10);

        horizontalLayout_50->addWidget(nOctaves);

        label_50 = new QLabel(tab_6);
        label_50->setObjectName(QStringLiteral("label_50"));

        horizontalLayout_50->addWidget(label_50);

        horizontalSpacer_50 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_50->addItem(horizontalSpacer_50);


        verticalLayout_9->addLayout(horizontalLayout_50);

        horizontalLayout_51 = new QHBoxLayout();
        horizontalLayout_51->setObjectName(QStringLiteral("horizontalLayout_51"));
        nLayersPerOctave = new QSpinBox(tab_6);
        nLayersPerOctave->setObjectName(QStringLiteral("nLayersPerOctave"));
        nLayersPerOctave->setValue(10);

        horizontalLayout_51->addWidget(nLayersPerOctave);

        label_51 = new QLabel(tab_6);
        label_51->setObjectName(QStringLiteral("label_51"));

        horizontalLayout_51->addWidget(label_51);

        horizontalSpacer_51 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_51->addItem(horizontalSpacer_51);


        verticalLayout_9->addLayout(horizontalLayout_51);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_7);

        tabWidget_2->addTab(tab_6, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        verticalLayout_17 = new QVBoxLayout(tab_9);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        horizontalLayout_82 = new QHBoxLayout();
        horizontalLayout_82->setObjectName(QStringLiteral("horizontalLayout_82"));
        hist_size_intensity = new QSpinBox(tab_9);
        hist_size_intensity->setObjectName(QStringLiteral("hist_size_intensity"));
        hist_size_intensity->setValue(10);

        horizontalLayout_82->addWidget(hist_size_intensity);

        label_82 = new QLabel(tab_9);
        label_82->setObjectName(QStringLiteral("label_82"));

        horizontalLayout_82->addWidget(label_82);

        horizontalSpacer_82 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_82->addItem(horizontalSpacer_82);


        verticalLayout_17->addLayout(horizontalLayout_82);

        horizontalLayout_83 = new QHBoxLayout();
        horizontalLayout_83->setObjectName(QStringLiteral("horizontalLayout_83"));
        hist_size_distance = new QSpinBox(tab_9);
        hist_size_distance->setObjectName(QStringLiteral("hist_size_distance"));
        hist_size_distance->setValue(10);

        horizontalLayout_83->addWidget(hist_size_distance);

        label_83 = new QLabel(tab_9);
        label_83->setObjectName(QStringLiteral("label_83"));

        horizontalLayout_83->addWidget(label_83);

        horizontalSpacer_83 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_83->addItem(horizontalSpacer_83);


        verticalLayout_17->addLayout(horizontalLayout_83);

        horizontalLayout_85 = new QHBoxLayout();
        horizontalLayout_85->setObjectName(QStringLiteral("horizontalLayout_85"));
        std_dist = new QDoubleSpinBox(tab_9);
        std_dist->setObjectName(QStringLiteral("std_dist"));
        std_dist->setValue(1);

        horizontalLayout_85->addWidget(std_dist);

        label_85 = new QLabel(tab_9);
        label_85->setObjectName(QStringLiteral("label_85"));

        horizontalLayout_85->addWidget(label_85);

        horizontalSpacer_85 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_85->addItem(horizontalSpacer_85);


        verticalLayout_17->addLayout(horizontalLayout_85);

        horizontalLayout_86 = new QHBoxLayout();
        horizontalLayout_86->setObjectName(QStringLiteral("horizontalLayout_86"));
        std_intensity = new QDoubleSpinBox(tab_9);
        std_intensity->setObjectName(QStringLiteral("std_intensity"));
        std_intensity->setValue(1);

        horizontalLayout_86->addWidget(std_intensity);

        label_86 = new QLabel(tab_9);
        label_86->setObjectName(QStringLiteral("label_86"));

        horizontalLayout_86->addWidget(label_86);

        horizontalSpacer_86 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_86->addItem(horizontalSpacer_86);


        verticalLayout_17->addLayout(horizontalLayout_86);

        horizontalLayout_84 = new QHBoxLayout();
        horizontalLayout_84->setObjectName(QStringLiteral("horizontalLayout_84"));
        radiusSpinImagesOptions = new QSpinBox(tab_9);
        radiusSpinImagesOptions->setObjectName(QStringLiteral("radiusSpinImagesOptions"));
        radiusSpinImagesOptions->setValue(10);

        horizontalLayout_84->addWidget(radiusSpinImagesOptions);

        label_84 = new QLabel(tab_9);
        label_84->setObjectName(QStringLiteral("label_84"));

        horizontalLayout_84->addWidget(label_84);

        horizontalSpacer_84 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_84->addItem(horizontalSpacer_84);


        verticalLayout_17->addLayout(horizontalLayout_84);

        verticalSpacer_16 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_17->addItem(verticalSpacer_16);

        tabWidget_2->addTab(tab_9, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        verticalLayout_18 = new QVBoxLayout(tab_8);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        horizontalLayout_55 = new QHBoxLayout();
        horizontalLayout_55->setObjectName(QStringLiteral("horizontalLayout_55"));
        bins_angle = new QSpinBox(tab_8);
        bins_angle->setObjectName(QStringLiteral("bins_angle"));
        bins_angle->setValue(10);

        horizontalLayout_55->addWidget(bins_angle);

        label_55 = new QLabel(tab_8);
        label_55->setObjectName(QStringLiteral("label_55"));

        horizontalLayout_55->addWidget(label_55);

        horizontalSpacer_55 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_55->addItem(horizontalSpacer_55);


        verticalLayout_18->addLayout(horizontalLayout_55);

        horizontalLayout_56 = new QHBoxLayout();
        horizontalLayout_56->setObjectName(QStringLiteral("horizontalLayout_56"));
        bins_distance = new QSpinBox(tab_8);
        bins_distance->setObjectName(QStringLiteral("bins_distance"));
        bins_distance->setValue(10);

        horizontalLayout_56->addWidget(bins_distance);

        label_56 = new QLabel(tab_8);
        label_56->setObjectName(QStringLiteral("label_56"));

        horizontalLayout_56->addWidget(label_56);

        horizontalSpacer_56 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_56->addItem(horizontalSpacer_56);


        verticalLayout_18->addLayout(horizontalLayout_56);

        horizontalLayout_57 = new QHBoxLayout();
        horizontalLayout_57->setObjectName(QStringLiteral("horizontalLayout_57"));
        radiusPolarImagesOptions = new QSpinBox(tab_8);
        radiusPolarImagesOptions->setObjectName(QStringLiteral("radiusPolarImagesOptions"));
        radiusPolarImagesOptions->setValue(10);

        horizontalLayout_57->addWidget(radiusPolarImagesOptions);

        label_57 = new QLabel(tab_8);
        label_57->setObjectName(QStringLiteral("label_57"));

        horizontalLayout_57->addWidget(label_57);

        horizontalSpacer_57 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_57->addItem(horizontalSpacer_57);


        verticalLayout_18->addLayout(horizontalLayout_57);

        verticalSpacer_17 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_18->addItem(verticalSpacer_17);

        tabWidget_2->addTab(tab_8, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        verticalLayout_19 = new QVBoxLayout(tab_7);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        horizontalLayout_52 = new QHBoxLayout();
        horizontalLayout_52->setObjectName(QStringLiteral("horizontalLayout_52"));
        radiusLogPolarImagesOptions = new QSpinBox(tab_7);
        radiusLogPolarImagesOptions->setObjectName(QStringLiteral("radiusLogPolarImagesOptions"));
        radiusLogPolarImagesOptions->setValue(10);

        horizontalLayout_52->addWidget(radiusLogPolarImagesOptions);

        label_52 = new QLabel(tab_7);
        label_52->setObjectName(QStringLiteral("label_52"));

        horizontalLayout_52->addWidget(label_52);

        horizontalSpacer_52 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_52->addItem(horizontalSpacer_52);


        verticalLayout_19->addLayout(horizontalLayout_52);

        horizontalLayout_53 = new QHBoxLayout();
        horizontalLayout_53->setObjectName(QStringLiteral("horizontalLayout_53"));
        num_angles = new QSpinBox(tab_7);
        num_angles->setObjectName(QStringLiteral("num_angles"));
        num_angles->setValue(10);

        horizontalLayout_53->addWidget(num_angles);

        label_53 = new QLabel(tab_7);
        label_53->setObjectName(QStringLiteral("label_53"));

        horizontalLayout_53->addWidget(label_53);

        horizontalSpacer_53 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_53->addItem(horizontalSpacer_53);


        verticalLayout_19->addLayout(horizontalLayout_53);

        horizontalLayout_54 = new QHBoxLayout();
        horizontalLayout_54->setObjectName(QStringLiteral("horizontalLayout_54"));
        rho_scale = new QDoubleSpinBox(tab_7);
        rho_scale->setObjectName(QStringLiteral("rho_scale"));
        rho_scale->setValue(1);

        horizontalLayout_54->addWidget(rho_scale);

        label_54 = new QLabel(tab_7);
        label_54->setObjectName(QStringLiteral("label_54"));

        horizontalLayout_54->addWidget(label_54);

        horizontalSpacer_54 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_54->addItem(horizontalSpacer_54);


        verticalLayout_19->addLayout(horizontalLayout_54);

        verticalSpacer_18 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_19->addItem(verticalSpacer_18);

        tabWidget_2->addTab(tab_7, QString());

        verticalLayout_20->addWidget(tabWidget_2);


        verticalLayout_22->addWidget(groupBox_2);

        tabWidget->addTab(likelihood, QString());
        beaconRangesUseObservationStd->raise();
        label_5->raise();
        groupBox->raise();
        groupBox_2->raise();

        verticalLayout->addWidget(tabWidget);


        retranslateUi(CLandmarksConfig);

        tabWidget->setCurrentIndex(2);
        tabWidget_2->setCurrentIndex(8);


        QMetaObject::connectSlotsByName(CLandmarksConfig);
    } // setupUi

    void retranslateUi(QWidget *CLandmarksConfig)
    {
        CLandmarksConfig->setWindowTitle(QApplication::translate("CLandmarksConfig", "Form", Q_NULLPTR));
        enableSaveAs3DObject->setText(QApplication::translate("CLandmarksConfig", "enableSaveAs3DObject", Q_NULLPTR));
        enableObservationLikelihood->setText(QApplication::translate("CLandmarksConfig", "enableObservationLikelihood", Q_NULLPTR));
        enableObservationInsertion->setText(QApplication::translate("CLandmarksConfig", "enableObservationInsertion", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(generic), QApplication::translate("CLandmarksConfig", "Generic", Q_NULLPTR));
        insert_SIFTs_from_monocular_images->setText(QApplication::translate("CLandmarksConfig", "insert_SIFTs_from_monocular_images", Q_NULLPTR));
        insert_SIFTs_from_stereo_images->setText(QApplication::translate("CLandmarksConfig", "insert_SIFTs_from_stereo_images", Q_NULLPTR));
        insert_Landmarks_from_range_scans->setText(QApplication::translate("CLandmarksConfig", "insert_Landmarks_from_range_scans", Q_NULLPTR));
        label_7->setText(QApplication::translate("CLandmarksConfig", "SiftCorrRatioThreshold", Q_NULLPTR));
        label_8->setText(QApplication::translate("CLandmarksConfig", "SiftLikelihoodThreshold", Q_NULLPTR));
        label_9->setText(QApplication::translate("CLandmarksConfig", "SiftEDDThreshold", Q_NULLPTR));
        label_10->setText(QApplication::translate("CLandmarksConfig", "SIFTMatching3DMethod", Q_NULLPTR));
        label_11->setText(QApplication::translate("CLandmarksConfig", "SIFTLikelihoodMethod", Q_NULLPTR));
        label_12->setText(QApplication::translate("CLandmarksConfig", "SIFTsLoadDistanceOfTheMean", Q_NULLPTR));
        label_13->setText(QApplication::translate("CLandmarksConfig", "SIFTsLoadEllipsoidWidth", Q_NULLPTR));
        label_14->setText(QApplication::translate("CLandmarksConfig", "SIFTs_stdXY", Q_NULLPTR));
        label_15->setText(QApplication::translate("CLandmarksConfig", "SIFTs_stdDisparity", Q_NULLPTR));
        label_16->setText(QApplication::translate("CLandmarksConfig", "SIFTs_numberOfKLTKeypoints", Q_NULLPTR));
        label_17->setText(QApplication::translate("CLandmarksConfig", "SIFTs_stereo_maxDepth", Q_NULLPTR));
        label_18->setText(QApplication::translate("CLandmarksConfig", "SIFTs_epipolar_TH", Q_NULLPTR));
        PLOT_IMAGES->setText(QApplication::translate("CLandmarksConfig", "PLOT_IMAGES", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(insert), QApplication::translate("CLandmarksConfig", "Insert", Q_NULLPTR));
        label_19->setText(QApplication::translate("CLandmarksConfig", "rangeScan2D_decimation", Q_NULLPTR));
        label_5->setText(QApplication::translate("CLandmarksConfig", "SIFTs_sigma_euclidean_dist", Q_NULLPTR));
        label_20->setText(QApplication::translate("CLandmarksConfig", "SIFTs_sigma_descriptor_dist", Q_NULLPTR));
        label_21->setText(QApplication::translate("CLandmarksConfig", "SIFTs_mahaDist_std", Q_NULLPTR));
        label_22->setText(QApplication::translate("CLandmarksConfig", "SIFTnullCorrespondenceDistance", Q_NULLPTR));
        label_24->setText(QApplication::translate("CLandmarksConfig", "SIFTs_decimation", Q_NULLPTR));
        label_25->setText(QApplication::translate("CLandmarksConfig", "beaconRangesStd", Q_NULLPTR));
        beaconRangesUseObservationStd->setText(QApplication::translate("CLandmarksConfig", "beaconRangesUseObservationStd", Q_NULLPTR));
        label_26->setText(QApplication::translate("CLandmarksConfig", "extRobotPoseStd", Q_NULLPTR));
        label_27->setText(QApplication::translate("CLandmarksConfig", "GPS_sigma", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("CLandmarksConfig", "GPSOrigin", Q_NULLPTR));
        label_23->setText(QApplication::translate("CLandmarksConfig", "longitude", Q_NULLPTR));
        label_28->setText(QApplication::translate("CLandmarksConfig", "latitude", Q_NULLPTR));
        label_29->setText(QApplication::translate("CLandmarksConfig", "altitude", Q_NULLPTR));
        label_30->setText(QApplication::translate("CLandmarksConfig", "ang", Q_NULLPTR));
        label_31->setText(QApplication::translate("CLandmarksConfig", "x_shift", Q_NULLPTR));
        label_32->setText(QApplication::translate("CLandmarksConfig", "y_shift", Q_NULLPTR));
        label_6->setText(QApplication::translate("CLandmarksConfig", "min_sat", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("CLandmarksConfig", "SIFT_feat_options", Q_NULLPTR));
        label_33->setText(QApplication::translate("CLandmarksConfig", "patchSize", Q_NULLPTR));
        useMask->setText(QApplication::translate("CLandmarksConfig", "useMask", Q_NULLPTR));
        addNewFeatures->setText(QApplication::translate("CLandmarksConfig", "addNewFeatures", Q_NULLPTR));
        FIND_SUBPIXEL->setText(QApplication::translate("CLandmarksConfig", "FIND_SUBPIXEL", Q_NULLPTR));
        label_34->setText(QApplication::translate("CLandmarksConfig", "radius", Q_NULLPTR));
        label_35->setText(QApplication::translate("CLandmarksConfig", "threshold", Q_NULLPTR));
        label_36->setText(QApplication::translate("CLandmarksConfig", "min_distance", Q_NULLPTR));
        tile_imageKLTOptions->setText(QApplication::translate("CLandmarksConfig", "tile_image", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab), QApplication::translate("CLandmarksConfig", "KLTOptions", Q_NULLPTR));
        label_38->setText(QApplication::translate("CLandmarksConfig", "threshold", Q_NULLPTR));
        label_39->setText(QApplication::translate("CLandmarksConfig", "k", Q_NULLPTR));
        label_40->setText(QApplication::translate("CLandmarksConfig", "sigma", Q_NULLPTR));
        label_37->setText(QApplication::translate("CLandmarksConfig", "radius", Q_NULLPTR));
        label_41->setText(QApplication::translate("CLandmarksConfig", "min_distance", Q_NULLPTR));
        tile_imageHarris->setText(QApplication::translate("CLandmarksConfig", "tile_image", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("CLandmarksConfig", "HarrisOptions", Q_NULLPTR));
        label_42->setText(QApplication::translate("CLandmarksConfig", "threshold", Q_NULLPTR));
        label_44->setText(QApplication::translate("CLandmarksConfig", "min_distance", Q_NULLPTR));
        nonmax_suppression->setText(QApplication::translate("CLandmarksConfig", "nonmax_suppression", Q_NULLPTR));
        use_KLT_response->setText(QApplication::translate("CLandmarksConfig", "use_KLT_response", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("CLandmarksConfig", "FASTOptions", Q_NULLPTR));
        label_43->setText(QApplication::translate("CLandmarksConfig", "n_levels", Q_NULLPTR));
        label_45->setText(QApplication::translate("CLandmarksConfig", "min_distance", Q_NULLPTR));
        label_46->setText(QApplication::translate("CLandmarksConfig", "scale_factor", Q_NULLPTR));
        extract_patch->setText(QApplication::translate("CLandmarksConfig", "extract_patch", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_2), QApplication::translate("CLandmarksConfig", "ORBOptions", Q_NULLPTR));
        label_48->setText(QApplication::translate("CLandmarksConfig", "threshold", Q_NULLPTR));
        label_49->setText(QApplication::translate("CLandmarksConfig", "edgeThreshold", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("CLandmarksConfig", "SIFTOptions", Q_NULLPTR));
        rotation_invariant->setText(QApplication::translate("CLandmarksConfig", "rotation_invariant", Q_NULLPTR));
        label_47->setText(QApplication::translate("CLandmarksConfig", "hessianThreshold", Q_NULLPTR));
        label_50->setText(QApplication::translate("CLandmarksConfig", "nOctaves", Q_NULLPTR));
        label_51->setText(QApplication::translate("CLandmarksConfig", "nLayersPerOctave", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("CLandmarksConfig", "SURFOptions", Q_NULLPTR));
        label_82->setText(QApplication::translate("CLandmarksConfig", "hist_size_intensity", Q_NULLPTR));
        label_83->setText(QApplication::translate("CLandmarksConfig", "hist_size_distance", Q_NULLPTR));
        label_85->setText(QApplication::translate("CLandmarksConfig", "std_dist", Q_NULLPTR));
        label_86->setText(QApplication::translate("CLandmarksConfig", "std_intensity", Q_NULLPTR));
        label_84->setText(QApplication::translate("CLandmarksConfig", "radius", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_9), QApplication::translate("CLandmarksConfig", "SpinImagesOptions", Q_NULLPTR));
        label_55->setText(QApplication::translate("CLandmarksConfig", "bins_angle", Q_NULLPTR));
        label_56->setText(QApplication::translate("CLandmarksConfig", "bins_distance", Q_NULLPTR));
        label_57->setText(QApplication::translate("CLandmarksConfig", "radius", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QApplication::translate("CLandmarksConfig", "PolarImagesOptions", Q_NULLPTR));
        label_52->setText(QApplication::translate("CLandmarksConfig", "radius", Q_NULLPTR));
        label_53->setText(QApplication::translate("CLandmarksConfig", "num_angles", Q_NULLPTR));
        label_54->setText(QApplication::translate("CLandmarksConfig", "rho_scale", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("CLandmarksConfig", "LogPolarImagesOptions", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(likelihood), QApplication::translate("CLandmarksConfig", "Likelihood", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CLandmarksConfig: public Ui_CLandmarksConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLANDMARKSCONFIG_H

/********************************************************************************
** Form generated from reading UI file 'CPointsConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CPOINTSCONFIG_H
#define UI_CPOINTSCONFIG_H

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

class Ui_CPointsConfig
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
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *minDistBetweenLaserPoints;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QRadioButton *addToExistingPointsMap;
    QRadioButton *also_interpolate;
    QRadioButton *disableDeletion;
    QRadioButton *fuseWithExisting;
    QRadioButton *isPlanarMap;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *horizontalTolerance;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QDoubleSpinBox *maxDistForInterpolatePoints;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QRadioButton *insertInvalidPoints;
    QSpacerItem *verticalSpacer;
    QWidget *likelihood;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QDoubleSpinBox *sigma_dist;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QDoubleSpinBox *max_corr_distance;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QSpinBox *decimation;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *CPointsConfig)
    {
        if (CPointsConfig->objectName().isEmpty())
            CPointsConfig->setObjectName(QStringLiteral("CPointsConfig"));
        CPointsConfig->resize(695, 601);
        verticalLayout = new QVBoxLayout(CPointsConfig);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(CPointsConfig);
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
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        minDistBetweenLaserPoints = new QDoubleSpinBox(insert);
        minDistBetweenLaserPoints->setObjectName(QStringLiteral("minDistBetweenLaserPoints"));
        minDistBetweenLaserPoints->setValue(0.02);

        horizontalLayout->addWidget(minDistBetweenLaserPoints);

        label = new QLabel(insert);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        addToExistingPointsMap = new QRadioButton(insert);
        addToExistingPointsMap->setObjectName(QStringLiteral("addToExistingPointsMap"));
        addToExistingPointsMap->setChecked(false);
        addToExistingPointsMap->setAutoExclusive(false);

        verticalLayout_2->addWidget(addToExistingPointsMap);

        also_interpolate = new QRadioButton(insert);
        also_interpolate->setObjectName(QStringLiteral("also_interpolate"));
        also_interpolate->setChecked(false);
        also_interpolate->setAutoExclusive(false);

        verticalLayout_2->addWidget(also_interpolate);

        disableDeletion = new QRadioButton(insert);
        disableDeletion->setObjectName(QStringLiteral("disableDeletion"));
        disableDeletion->setChecked(true);
        disableDeletion->setAutoExclusive(false);

        verticalLayout_2->addWidget(disableDeletion);

        fuseWithExisting = new QRadioButton(insert);
        fuseWithExisting->setObjectName(QStringLiteral("fuseWithExisting"));
        fuseWithExisting->setChecked(false);
        fuseWithExisting->setAutoExclusive(false);

        verticalLayout_2->addWidget(fuseWithExisting);

        isPlanarMap = new QRadioButton(insert);
        isPlanarMap->setObjectName(QStringLiteral("isPlanarMap"));
        isPlanarMap->setChecked(false);
        isPlanarMap->setAutoExclusive(false);

        verticalLayout_2->addWidget(isPlanarMap);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalTolerance = new QDoubleSpinBox(insert);
        horizontalTolerance->setObjectName(QStringLiteral("horizontalTolerance"));
        horizontalTolerance->setValue(0);

        horizontalLayout_2->addWidget(horizontalTolerance);

        label_2 = new QLabel(insert);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        maxDistForInterpolatePoints = new QDoubleSpinBox(insert);
        maxDistForInterpolatePoints->setObjectName(QStringLiteral("maxDistForInterpolatePoints"));
        maxDistForInterpolatePoints->setValue(0);

        horizontalLayout_3->addWidget(maxDistForInterpolatePoints);

        label_3 = new QLabel(insert);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_3);

        insertInvalidPoints = new QRadioButton(insert);
        insertInvalidPoints->setObjectName(QStringLiteral("insertInvalidPoints"));
        insertInvalidPoints->setChecked(false);
        insertInvalidPoints->setAutoExclusive(false);

        verticalLayout_2->addWidget(insertInvalidPoints);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tabWidget->addTab(insert, QString());
        likelihood = new QWidget();
        likelihood->setObjectName(QStringLiteral("likelihood"));
        verticalLayout_3 = new QVBoxLayout(likelihood);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        sigma_dist = new QDoubleSpinBox(likelihood);
        sigma_dist->setObjectName(QStringLiteral("sigma_dist"));
        sigma_dist->setValue(0.25);

        horizontalLayout_4->addWidget(sigma_dist);

        label_4 = new QLabel(likelihood);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        max_corr_distance = new QDoubleSpinBox(likelihood);
        max_corr_distance->setObjectName(QStringLiteral("max_corr_distance"));
        max_corr_distance->setValue(1);

        horizontalLayout_5->addWidget(max_corr_distance);

        label_5 = new QLabel(likelihood);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        decimation = new QSpinBox(likelihood);
        decimation->setObjectName(QStringLiteral("decimation"));
        decimation->setValue(10);

        horizontalLayout_6->addWidget(decimation);

        label_6 = new QLabel(likelihood);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        verticalLayout_3->addLayout(horizontalLayout_6);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        tabWidget->addTab(likelihood, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(CPointsConfig);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(CPointsConfig);
    } // setupUi

    void retranslateUi(QWidget *CPointsConfig)
    {
        CPointsConfig->setWindowTitle(QApplication::translate("CPointsConfig", "Form", Q_NULLPTR));
        enableSaveAs3DObject->setText(QApplication::translate("CPointsConfig", "enableSaveAs3DObject", Q_NULLPTR));
        enableObservationLikelihood->setText(QApplication::translate("CPointsConfig", "enableObservationLikelihood", Q_NULLPTR));
        enableObservationInsertion->setText(QApplication::translate("CPointsConfig", "enableObservationInsertion", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(generic), QApplication::translate("CPointsConfig", "Generic", Q_NULLPTR));
        label->setText(QApplication::translate("CPointsConfig", "minDistBetweenLaserPoints", Q_NULLPTR));
        addToExistingPointsMap->setText(QApplication::translate("CPointsConfig", "addToExistingPointsMap", Q_NULLPTR));
        also_interpolate->setText(QApplication::translate("CPointsConfig", "also_interpolate", Q_NULLPTR));
        disableDeletion->setText(QApplication::translate("CPointsConfig", "disableDeletion", Q_NULLPTR));
        fuseWithExisting->setText(QApplication::translate("CPointsConfig", "fuseWithExisting", Q_NULLPTR));
        isPlanarMap->setText(QApplication::translate("CPointsConfig", "isPlanarMap", Q_NULLPTR));
        label_2->setText(QApplication::translate("CPointsConfig", "horizontalTolerance", Q_NULLPTR));
        label_3->setText(QApplication::translate("CPointsConfig", "maxDistForInterpolatePoints", Q_NULLPTR));
        insertInvalidPoints->setText(QApplication::translate("CPointsConfig", "insertInvalidPoints", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(insert), QApplication::translate("CPointsConfig", "Insert", Q_NULLPTR));
        label_4->setText(QApplication::translate("CPointsConfig", "sigma_dist", Q_NULLPTR));
        label_5->setText(QApplication::translate("CPointsConfig", "max_corr_distance", Q_NULLPTR));
        label_6->setText(QApplication::translate("CPointsConfig", "decimation", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(likelihood), QApplication::translate("CPointsConfig", "Likelihood", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CPointsConfig: public Ui_CPointsConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CPOINTSCONFIG_H

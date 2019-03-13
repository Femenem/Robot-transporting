/********************************************************************************
** Form generated from reading UI file 'CGeneralConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CGENERALCONFIG_H
#define UI_CGENERALCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CGeneralConfig
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *m_backgroundColor;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *m_gridColor;
    QSpacerItem *horizontalSpacer;
    QCheckBox *m_enableGrid;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *m_bots;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QDoubleSpinBox *m_robotPosesSize;
    QLabel *label_4;
    QComboBox *m_robotPosesColor;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QDoubleSpinBox *m_selectedRobotPosesSize;
    QLabel *label_6;
    QComboBox *m_selectedRobotPosesColor;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *CGeneralConfig)
    {
        if (CGeneralConfig->objectName().isEmpty())
            CGeneralConfig->setObjectName(QStringLiteral("CGeneralConfig"));
        CGeneralConfig->resize(797, 629);
        verticalLayout = new QVBoxLayout(CGeneralConfig);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        m_backgroundColor = new QPushButton(CGeneralConfig);
        m_backgroundColor->setObjectName(QStringLiteral("m_backgroundColor"));

        horizontalLayout_2->addWidget(m_backgroundColor);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_gridColor = new QPushButton(CGeneralConfig);
        m_gridColor->setObjectName(QStringLiteral("m_gridColor"));

        horizontalLayout->addWidget(m_gridColor);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        m_enableGrid = new QCheckBox(CGeneralConfig);
        m_enableGrid->setObjectName(QStringLiteral("m_enableGrid"));
        m_enableGrid->setChecked(true);

        verticalLayout->addWidget(m_enableGrid);

        groupBox = new QGroupBox(CGeneralConfig);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        m_bots = new QComboBox(groupBox);
        m_bots->setObjectName(QStringLiteral("m_bots"));

        horizontalLayout_3->addWidget(m_bots);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(CGeneralConfig);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_4->addWidget(label);

        m_robotPosesSize = new QDoubleSpinBox(groupBox_2);
        m_robotPosesSize->setObjectName(QStringLiteral("m_robotPosesSize"));
        m_robotPosesSize->setMaximum(999.99);
        m_robotPosesSize->setValue(10);

        horizontalLayout_4->addWidget(m_robotPosesSize);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        m_robotPosesColor = new QComboBox(groupBox_2);
        m_robotPosesColor->setObjectName(QStringLiteral("m_robotPosesColor"));

        horizontalLayout_4->addWidget(m_robotPosesColor);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(CGeneralConfig);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        horizontalLayout_5 = new QHBoxLayout(groupBox_3);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);

        m_selectedRobotPosesSize = new QDoubleSpinBox(groupBox_3);
        m_selectedRobotPosesSize->setObjectName(QStringLiteral("m_selectedRobotPosesSize"));
        m_selectedRobotPosesSize->setMaximum(999.99);
        m_selectedRobotPosesSize->setValue(15);

        horizontalLayout_5->addWidget(m_selectedRobotPosesSize);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_5->addWidget(label_6);

        m_selectedRobotPosesColor = new QComboBox(groupBox_3);
        m_selectedRobotPosesColor->setObjectName(QStringLiteral("m_selectedRobotPosesColor"));

        horizontalLayout_5->addWidget(m_selectedRobotPosesColor);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout->addWidget(groupBox_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(CGeneralConfig);

        m_selectedRobotPosesColor->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(CGeneralConfig);
    } // setupUi

    void retranslateUi(QWidget *CGeneralConfig)
    {
        CGeneralConfig->setWindowTitle(QApplication::translate("CGeneralConfig", "Form", Q_NULLPTR));
        m_backgroundColor->setText(QApplication::translate("CGeneralConfig", "Background color", Q_NULLPTR));
        m_gridColor->setText(QApplication::translate("CGeneralConfig", "Grid color", Q_NULLPTR));
        m_enableGrid->setText(QApplication::translate("CGeneralConfig", "Grid Plane XY", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("CGeneralConfig", "\320\222ots of poses ", Q_NULLPTR));
        m_bots->clear();
        m_bots->insertItems(0, QStringList()
         << QApplication::translate("CGeneralConfig", "CornerXYZSimple", Q_NULLPTR)
         << QApplication::translate("CGeneralConfig", "CornerXYZ", Q_NULLPTR)
         << QApplication::translate("CGeneralConfig", "RobotGiraff", Q_NULLPTR)
         << QApplication::translate("CGeneralConfig", "RobotRhodon", Q_NULLPTR)
         << QApplication::translate("CGeneralConfig", "RobotPioneer", Q_NULLPTR)
         << QApplication::translate("CGeneralConfig", "BumblebeeCamera", Q_NULLPTR)
        );
        groupBox_2->setTitle(QApplication::translate("CGeneralConfig", "Robot poses", Q_NULLPTR));
        label->setText(QApplication::translate("CGeneralConfig", "Size", Q_NULLPTR));
        label_4->setText(QApplication::translate("CGeneralConfig", "Color", Q_NULLPTR));
        m_robotPosesColor->clear();
        m_robotPosesColor->insertItems(0, QStringList()
         << QApplication::translate("CGeneralConfig", "Red", Q_NULLPTR)
         << QApplication::translate("CGeneralConfig", "Green", Q_NULLPTR)
         << QApplication::translate("CGeneralConfig", "Blue", Q_NULLPTR)
         << QApplication::translate("CGeneralConfig", "White", Q_NULLPTR)
         << QApplication::translate("CGeneralConfig", "Black", Q_NULLPTR)
         << QApplication::translate("CGeneralConfig", "Gray", Q_NULLPTR)
        );
        groupBox_3->setTitle(QApplication::translate("CGeneralConfig", "Selected robot poses", Q_NULLPTR));
        label_3->setText(QApplication::translate("CGeneralConfig", "Size", Q_NULLPTR));
        label_6->setText(QApplication::translate("CGeneralConfig", "Color", Q_NULLPTR));
        m_selectedRobotPosesColor->clear();
        m_selectedRobotPosesColor->insertItems(0, QStringList()
         << QApplication::translate("CGeneralConfig", "Red", Q_NULLPTR)
         << QApplication::translate("CGeneralConfig", "Green", Q_NULLPTR)
         << QApplication::translate("CGeneralConfig", "Blue", Q_NULLPTR)
         << QApplication::translate("CGeneralConfig", "White", Q_NULLPTR)
         << QApplication::translate("CGeneralConfig", "Black", Q_NULLPTR)
         << QApplication::translate("CGeneralConfig", "Gray", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class CGeneralConfig: public Ui_CGeneralConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CGENERALCONFIG_H

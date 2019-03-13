/********************************************************************************
** Form generated from reading UI file 'CPoseDirection.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CPOSEDIRECTION_H
#define UI_CPOSEDIRECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CPoseDirection
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QDoubleSpinBox *yaw;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QDoubleSpinBox *pitch;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QDoubleSpinBox *roll;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *CPoseDirection)
    {
        if (CPoseDirection->objectName().isEmpty())
            CPoseDirection->setObjectName(QStringLiteral("CPoseDirection"));
        CPoseDirection->resize(400, 300);
        gridLayout = new QGridLayout(CPoseDirection);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(CPoseDirection);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        yaw = new QDoubleSpinBox(CPoseDirection);
        yaw->setObjectName(QStringLiteral("yaw"));
        yaw->setDecimals(3);
        yaw->setMinimum(-9999);
        yaw->setMaximum(9999.99);

        gridLayout->addWidget(yaw, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(244, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        label_2 = new QLabel(CPoseDirection);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        pitch = new QDoubleSpinBox(CPoseDirection);
        pitch->setObjectName(QStringLiteral("pitch"));
        pitch->setDecimals(3);
        pitch->setMinimum(-9999);
        pitch->setMaximum(9999);

        gridLayout->addWidget(pitch, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(244, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        label_3 = new QLabel(CPoseDirection);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        roll = new QDoubleSpinBox(CPoseDirection);
        roll->setObjectName(QStringLiteral("roll"));
        roll->setDecimals(3);
        roll->setMinimum(-9999);
        roll->setMaximum(9999);

        gridLayout->addWidget(roll, 2, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(244, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);


        retranslateUi(CPoseDirection);

        QMetaObject::connectSlotsByName(CPoseDirection);
    } // setupUi

    void retranslateUi(QWidget *CPoseDirection)
    {
        CPoseDirection->setWindowTitle(QApplication::translate("CPoseDirection", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("CPoseDirection", "Yaw", Q_NULLPTR));
        label_2->setText(QApplication::translate("CPoseDirection", "Pitch", Q_NULLPTR));
        label_3->setText(QApplication::translate("CPoseDirection", "Roll", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CPoseDirection: public Ui_CPoseDirection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CPOSEDIRECTION_H

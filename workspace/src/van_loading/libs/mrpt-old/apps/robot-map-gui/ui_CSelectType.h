/********************************************************************************
** Form generated from reading UI file 'CSelectType.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSELECTTYPE_H
#define UI_CSELECTTYPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CSelectType
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QListWidget *m_typeList;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_ok;
    QPushButton *m_cancel;

    void setupUi(QDialog *CSelectType)
    {
        if (CSelectType->objectName().isEmpty())
            CSelectType->setObjectName(QStringLiteral("CSelectType"));
        CSelectType->resize(456, 310);
        verticalLayout = new QVBoxLayout(CSelectType);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(CSelectType);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        m_typeList = new QListWidget(groupBox);
        m_typeList->setObjectName(QStringLiteral("m_typeList"));

        horizontalLayout->addWidget(m_typeList);


        verticalLayout->addWidget(groupBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        m_ok = new QPushButton(CSelectType);
        m_ok->setObjectName(QStringLiteral("m_ok"));

        horizontalLayout_2->addWidget(m_ok);

        m_cancel = new QPushButton(CSelectType);
        m_cancel->setObjectName(QStringLiteral("m_cancel"));

        horizontalLayout_2->addWidget(m_cancel);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(CSelectType);
        QObject::connect(m_cancel, SIGNAL(released()), CSelectType, SLOT(reject()));
        QObject::connect(m_ok, SIGNAL(released()), CSelectType, SLOT(accept()));

        QMetaObject::connectSlotsByName(CSelectType);
    } // setupUi

    void retranslateUi(QDialog *CSelectType)
    {
        CSelectType->setWindowTitle(QApplication::translate("CSelectType", "Type of the map", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("CSelectType", "Type of the map", Q_NULLPTR));
        m_ok->setText(QApplication::translate("CSelectType", "Ok", Q_NULLPTR));
        m_cancel->setText(QApplication::translate("CSelectType", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CSelectType: public Ui_CSelectType {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSELECTTYPE_H

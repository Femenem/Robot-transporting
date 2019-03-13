/********************************************************************************
** Form generated from reading UI file 'CConfigWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CCONFIGWIDGET_H
#define UI_CCONFIGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CConfigWidget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QListWidget *m_config;
    QHBoxLayout *horizontalLayout;
    QPushButton *m_add;
    QPushButton *m_remove;
    QSpacerItem *horizontalSpacer;
    QStackedWidget *stackedWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *m_loadConfig;
    QPushButton *m_saveConfig;
    QSpacerItem *verticalSpacer;
    QPushButton *m_apply;

    void setupUi(QWidget *CConfigWidget)
    {
        if (CConfigWidget->objectName().isEmpty())
            CConfigWidget->setObjectName(QStringLiteral("CConfigWidget"));
        CConfigWidget->resize(928, 806);
        horizontalLayout_2 = new QHBoxLayout(CConfigWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        m_config = new QListWidget(CConfigWidget);
        m_config->setObjectName(QStringLiteral("m_config"));

        verticalLayout_2->addWidget(m_config);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_add = new QPushButton(CConfigWidget);
        m_add->setObjectName(QStringLiteral("m_add"));

        horizontalLayout->addWidget(m_add);

        m_remove = new QPushButton(CConfigWidget);
        m_remove->setObjectName(QStringLiteral("m_remove"));

        horizontalLayout->addWidget(m_remove);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_2);

        stackedWidget = new QStackedWidget(CConfigWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));

        horizontalLayout_2->addWidget(stackedWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        m_loadConfig = new QPushButton(CConfigWidget);
        m_loadConfig->setObjectName(QStringLiteral("m_loadConfig"));

        verticalLayout->addWidget(m_loadConfig);

        m_saveConfig = new QPushButton(CConfigWidget);
        m_saveConfig->setObjectName(QStringLiteral("m_saveConfig"));

        verticalLayout->addWidget(m_saveConfig);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        m_apply = new QPushButton(CConfigWidget);
        m_apply->setObjectName(QStringLiteral("m_apply"));

        verticalLayout->addWidget(m_apply);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(CConfigWidget);

        QMetaObject::connectSlotsByName(CConfigWidget);
    } // setupUi

    void retranslateUi(QWidget *CConfigWidget)
    {
        CConfigWidget->setWindowTitle(QApplication::translate("CConfigWidget", "Form", Q_NULLPTR));
        m_add->setText(QApplication::translate("CConfigWidget", "Add", Q_NULLPTR));
        m_remove->setText(QApplication::translate("CConfigWidget", "Remove", Q_NULLPTR));
        m_loadConfig->setText(QApplication::translate("CConfigWidget", "Load config", Q_NULLPTR));
        m_saveConfig->setText(QApplication::translate("CConfigWidget", "Save config", Q_NULLPTR));
        m_apply->setText(QApplication::translate("CConfigWidget", "Apply", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CConfigWidget: public Ui_CConfigWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CCONFIGWIDGET_H

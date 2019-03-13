/********************************************************************************
** Form generated from reading UI file 'CViewerContainer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CVIEWERCONTAINER_H
#define UI_CVIEWERCONTAINER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CViewerContainer
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QDoubleSpinBox *m_azimDeg;
    QLabel *label_2;
    QDoubleSpinBox *m_elevationDeg;
    QTabWidget *m_tabWidget;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *m_zoom;
    QSlider *m_zoomSlider;
    QSpacerItem *horizontalSpacer;
    QLineEdit *m_infoUnderCursor;

    void setupUi(QWidget *CViewerContainer)
    {
        if (CViewerContainer->objectName().isEmpty())
            CViewerContainer->setObjectName(QStringLiteral("CViewerContainer"));
        CViewerContainer->resize(771, 701);
        verticalLayout = new QVBoxLayout(CViewerContainer);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new QPushButton(CViewerContainer);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/update.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label = new QLabel(CViewerContainer);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        m_azimDeg = new QDoubleSpinBox(CViewerContainer);
        m_azimDeg->setObjectName(QStringLiteral("m_azimDeg"));
        m_azimDeg->setFocusPolicy(Qt::ClickFocus);
        m_azimDeg->setMinimum(-360);
        m_azimDeg->setMaximum(360);

        horizontalLayout_2->addWidget(m_azimDeg);

        label_2 = new QLabel(CViewerContainer);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        m_elevationDeg = new QDoubleSpinBox(CViewerContainer);
        m_elevationDeg->setObjectName(QStringLiteral("m_elevationDeg"));
        m_elevationDeg->setFocusPolicy(Qt::ClickFocus);
        m_elevationDeg->setMinimum(-360);
        m_elevationDeg->setMaximum(360);

        horizontalLayout_2->addWidget(m_elevationDeg);


        verticalLayout->addLayout(horizontalLayout_2);

        m_tabWidget = new QTabWidget(CViewerContainer);
        m_tabWidget->setObjectName(QStringLiteral("m_tabWidget"));

        verticalLayout->addWidget(m_tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        m_zoom = new QDoubleSpinBox(CViewerContainer);
        m_zoom->setObjectName(QStringLiteral("m_zoom"));
        m_zoom->setMinimum(1);
        m_zoom->setMaximum(3200);
        m_zoom->setValue(100);

        horizontalLayout->addWidget(m_zoom);

        m_zoomSlider = new QSlider(CViewerContainer);
        m_zoomSlider->setObjectName(QStringLiteral("m_zoomSlider"));
        m_zoomSlider->setMinimum(1);
        m_zoomSlider->setMaximum(3200);
        m_zoomSlider->setPageStep(1);
        m_zoomSlider->setValue(50);
        m_zoomSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(m_zoomSlider);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_infoUnderCursor = new QLineEdit(CViewerContainer);
        m_infoUnderCursor->setObjectName(QStringLiteral("m_infoUnderCursor"));
        m_infoUnderCursor->setReadOnly(true);

        horizontalLayout->addWidget(m_infoUnderCursor);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CViewerContainer);

        QMetaObject::connectSlotsByName(CViewerContainer);
    } // setupUi

    void retranslateUi(QWidget *CViewerContainer)
    {
        CViewerContainer->setWindowTitle(QApplication::translate("CViewerContainer", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("CViewerContainer", "Update", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QString());
        label->setText(QApplication::translate("CViewerContainer", "Azimuth degree", Q_NULLPTR));
        label_2->setText(QApplication::translate("CViewerContainer", "Elevation degree", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CViewerContainer: public Ui_CViewerContainer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CVIEWERCONTAINER_H

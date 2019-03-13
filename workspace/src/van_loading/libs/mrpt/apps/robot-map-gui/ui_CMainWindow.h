/********************************************************************************
** Form generated from reading UI file 'CMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMAINWINDOW_H
#define UI_CMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <gui/glWidget/CPoseDirection.h>
#include "gui/configWidget/CConfigWidget.h"
#include "gui/glWidget/CViewerContainer.h"
#include "gui/observationTree/CObservationTree.h"

QT_BEGIN_NAMESPACE

class Ui_CMainWindow
{
public:
    QAction *m_actionOpen;
    QAction *actionAbout;
    QAction *m_actionAbout;
    QAction *m_actionShowObs;
    QAction *m_actionShowConfig;
    QAction *m_actionShowAllObs;
    QAction *m_actionLoadConfig;
    QAction *m_actionMapConfiguration;
    QAction *actionExit;
    QAction *m_undoAction;
    QAction *m_redoAction;
    QAction *m_actionSave;
    QAction *m_actionSaveAsText;
    QAction *m_actionSaveAsPNG;
    QAction *m_actionGraphSlam;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    CViewerContainer *m_viewer;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *m_menuRecentFiles;
    QMenu *m_saveMetricMapRepresentation;
    QMenu *m_saveMetricmapInBinaryFormat;
    QMenu *menuHelp;
    QMenu *menuTools;
    QMenu *menuEdit;
    QDockWidget *m_dockWidgetObs;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *m_expandAll;
    QPushButton *m_collapseAll;
    QSpacerItem *horizontalSpacer_2;
    CObservationTree *m_observationsTree;
    QDockWidget *m_dockWidgetNodeViewer;
    QWidget *m_contentsNodeViewer;
    QHBoxLayout *horizontalLayout_3;
    QDockWidget *m_dockWidgetConfig;
    CConfigWidget *m_configWidget;
    QVBoxLayout *verticalLayout_2;
    QToolBar *m_toolBar;
    QDockWidget *m_dockWidgetDirection;
    CPoseDirection *m_poseDirection;

    void setupUi(QMainWindow *CMainWindow)
    {
        if (CMainWindow->objectName().isEmpty())
            CMainWindow->setObjectName(QStringLiteral("CMainWindow"));
        CMainWindow->resize(902, 615);
        m_actionOpen = new QAction(CMainWindow);
        m_actionOpen->setObjectName(QStringLiteral("m_actionOpen"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/openSimplemap.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_actionOpen->setIcon(icon);
        actionAbout = new QAction(CMainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        m_actionAbout = new QAction(CMainWindow);
        m_actionAbout->setObjectName(QStringLiteral("m_actionAbout"));
        m_actionShowObs = new QAction(CMainWindow);
        m_actionShowObs->setObjectName(QStringLiteral("m_actionShowObs"));
        m_actionShowObs->setCheckable(true);
        m_actionShowObs->setChecked(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/showObservationsTree.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_actionShowObs->setIcon(icon1);
        m_actionShowConfig = new QAction(CMainWindow);
        m_actionShowConfig->setObjectName(QStringLiteral("m_actionShowConfig"));
        m_actionShowConfig->setCheckable(true);
        m_actionShowConfig->setChecked(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/showConfig.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_actionShowConfig->setIcon(icon2);
        m_actionShowAllObs = new QAction(CMainWindow);
        m_actionShowAllObs->setObjectName(QStringLiteral("m_actionShowAllObs"));
        m_actionShowAllObs->setCheckable(true);
        m_actionShowAllObs->setChecked(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/showObservations.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_actionShowAllObs->setIcon(icon3);
        m_actionLoadConfig = new QAction(CMainWindow);
        m_actionLoadConfig->setObjectName(QStringLiteral("m_actionLoadConfig"));
        m_actionMapConfiguration = new QAction(CMainWindow);
        m_actionMapConfiguration->setObjectName(QStringLiteral("m_actionMapConfiguration"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/showConfigInWindow.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_actionMapConfiguration->setIcon(icon4);
        actionExit = new QAction(CMainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        m_undoAction = new QAction(CMainWindow);
        m_undoAction->setObjectName(QStringLiteral("m_undoAction"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_undoAction->setIcon(icon5);
        m_redoAction = new QAction(CMainWindow);
        m_redoAction->setObjectName(QStringLiteral("m_redoAction"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_redoAction->setIcon(icon6);
        m_actionSave = new QAction(CMainWindow);
        m_actionSave->setObjectName(QStringLiteral("m_actionSave"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_actionSave->setIcon(icon7);
        m_actionSaveAsText = new QAction(CMainWindow);
        m_actionSaveAsText->setObjectName(QStringLiteral("m_actionSaveAsText"));
        m_actionSaveAsPNG = new QAction(CMainWindow);
        m_actionSaveAsPNG->setObjectName(QStringLiteral("m_actionSaveAsPNG"));
        m_actionGraphSlam = new QAction(CMainWindow);
        m_actionGraphSlam->setObjectName(QStringLiteral("m_actionGraphSlam"));
        centralwidget = new QWidget(CMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        m_viewer = new CViewerContainer(centralwidget);
        m_viewer->setObjectName(QStringLiteral("m_viewer"));

        verticalLayout_4->addWidget(m_viewer);

        CMainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(CMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 902, 19));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        m_menuRecentFiles = new QMenu(menuFile);
        m_menuRecentFiles->setObjectName(QStringLiteral("m_menuRecentFiles"));
        m_saveMetricMapRepresentation = new QMenu(menuFile);
        m_saveMetricMapRepresentation->setObjectName(QStringLiteral("m_saveMetricMapRepresentation"));
        m_saveMetricmapInBinaryFormat = new QMenu(menuFile);
        m_saveMetricmapInBinaryFormat->setObjectName(QStringLiteral("m_saveMetricmapInBinaryFormat"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        CMainWindow->setMenuBar(menuBar);
        m_dockWidgetObs = new QDockWidget(CMainWindow);
        m_dockWidgetObs->setObjectName(QStringLiteral("m_dockWidgetObs"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        m_expandAll = new QPushButton(dockWidgetContents);
        m_expandAll->setObjectName(QStringLiteral("m_expandAll"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/expand.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_expandAll->setIcon(icon8);

        horizontalLayout_2->addWidget(m_expandAll);

        m_collapseAll = new QPushButton(dockWidgetContents);
        m_collapseAll->setObjectName(QStringLiteral("m_collapseAll"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/collapse.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_collapseAll->setIcon(icon9);

        horizontalLayout_2->addWidget(m_collapseAll);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        m_observationsTree = new CObservationTree(dockWidgetContents);
        m_observationsTree->setObjectName(QStringLiteral("m_observationsTree"));
        m_observationsTree->header()->setVisible(false);

        verticalLayout->addWidget(m_observationsTree);

        m_dockWidgetObs->setWidget(dockWidgetContents);
        CMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), m_dockWidgetObs);
        m_dockWidgetNodeViewer = new QDockWidget(CMainWindow);
        m_dockWidgetNodeViewer->setObjectName(QStringLiteral("m_dockWidgetNodeViewer"));
        m_contentsNodeViewer = new QWidget();
        m_contentsNodeViewer->setObjectName(QStringLiteral("m_contentsNodeViewer"));
        horizontalLayout_3 = new QHBoxLayout(m_contentsNodeViewer);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        m_dockWidgetNodeViewer->setWidget(m_contentsNodeViewer);
        CMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), m_dockWidgetNodeViewer);
        m_dockWidgetConfig = new QDockWidget(CMainWindow);
        m_dockWidgetConfig->setObjectName(QStringLiteral("m_dockWidgetConfig"));
        m_dockWidgetConfig->setEnabled(true);
        m_dockWidgetConfig->setFloating(false);
        m_configWidget = new CConfigWidget();
        m_configWidget->setObjectName(QStringLiteral("m_configWidget"));
        verticalLayout_2 = new QVBoxLayout(m_configWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        m_dockWidgetConfig->setWidget(m_configWidget);
        CMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), m_dockWidgetConfig);
        m_toolBar = new QToolBar(CMainWindow);
        m_toolBar->setObjectName(QStringLiteral("m_toolBar"));
        CMainWindow->addToolBar(Qt::TopToolBarArea, m_toolBar);
        m_dockWidgetDirection = new QDockWidget(CMainWindow);
        m_dockWidgetDirection->setObjectName(QStringLiteral("m_dockWidgetDirection"));
        m_dockWidgetDirection->setFloating(false);
        m_poseDirection = new CPoseDirection();
        m_poseDirection->setObjectName(QStringLiteral("m_poseDirection"));
        m_dockWidgetDirection->setWidget(m_poseDirection);
        CMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), m_dockWidgetDirection);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(m_actionOpen);
        menuFile->addAction(m_menuRecentFiles->menuAction());
        menuFile->addAction(m_actionSave);
        menuFile->addAction(m_actionSaveAsText);
        menuFile->addAction(m_actionSaveAsPNG);
        menuFile->addAction(m_saveMetricMapRepresentation->menuAction());
        menuFile->addAction(m_saveMetricmapInBinaryFormat->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(m_actionLoadConfig);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuFile->addAction(m_actionGraphSlam);
        menuHelp->addAction(m_actionAbout);
        menuTools->addAction(m_actionShowObs);
        menuTools->addAction(m_actionShowConfig);
        menuTools->addAction(m_actionShowAllObs);
        menuTools->addSeparator();
        menuTools->addAction(m_actionMapConfiguration);
        menuEdit->addAction(m_undoAction);
        menuEdit->addAction(m_redoAction);
        m_toolBar->addAction(m_actionOpen);
        m_toolBar->addAction(m_actionSave);
        m_toolBar->addSeparator();
        m_toolBar->addAction(m_undoAction);
        m_toolBar->addAction(m_redoAction);
        m_toolBar->addSeparator();
        m_toolBar->addAction(m_actionShowObs);
        m_toolBar->addAction(m_actionShowAllObs);
        m_toolBar->addSeparator();
        m_toolBar->addAction(m_actionLoadConfig);
        m_toolBar->addAction(m_actionShowConfig);
        m_toolBar->addAction(m_actionMapConfiguration);

        retranslateUi(CMainWindow);
        QObject::connect(m_dockWidgetConfig, SIGNAL(visibilityChanged(bool)), m_actionShowConfig, SLOT(setChecked(bool)));
        QObject::connect(m_actionShowObs, SIGNAL(toggled(bool)), m_dockWidgetObs, SLOT(setVisible(bool)));
        QObject::connect(m_dockWidgetObs, SIGNAL(visibilityChanged(bool)), m_actionShowObs, SLOT(setChecked(bool)));
        QObject::connect(m_actionShowConfig, SIGNAL(triggered(bool)), m_dockWidgetConfig, SLOT(setVisible(bool)));
        QObject::connect(m_dockWidgetConfig, SIGNAL(visibilityChanged(bool)), m_actionMapConfiguration, SLOT(setDisabled(bool)));
        QObject::connect(actionExit, SIGNAL(triggered()), CMainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(CMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CMainWindow)
    {
        CMainWindow->setWindowTitle(QApplication::translate("CMainWindow", "Main Window", Q_NULLPTR));
        m_actionOpen->setText(QApplication::translate("CMainWindow", "Open simplemap", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        m_actionOpen->setShortcut(QApplication::translate("CMainWindow", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionAbout->setText(QApplication::translate("CMainWindow", "About", Q_NULLPTR));
        m_actionAbout->setText(QApplication::translate("CMainWindow", "About", Q_NULLPTR));
        m_actionShowObs->setText(QApplication::translate("CMainWindow", "Show observations tree", Q_NULLPTR));
        m_actionShowConfig->setText(QApplication::translate("CMainWindow", "Show configuration", Q_NULLPTR));
        m_actionShowAllObs->setText(QApplication::translate("CMainWindow", "Show all observation", Q_NULLPTR));
        m_actionLoadConfig->setText(QApplication::translate("CMainWindow", "Load config", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        m_actionLoadConfig->setShortcut(QApplication::translate("CMainWindow", "Ctrl+E", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        m_actionMapConfiguration->setText(QApplication::translate("CMainWindow", "Map configuration", Q_NULLPTR));
        actionExit->setText(QApplication::translate("CMainWindow", "Exit", Q_NULLPTR));
        m_undoAction->setText(QApplication::translate("CMainWindow", "Undo", Q_NULLPTR));
        m_redoAction->setText(QApplication::translate("CMainWindow", "Redo", Q_NULLPTR));
        m_actionSave->setText(QApplication::translate("CMainWindow", "Save as simplemap", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        m_actionSave->setShortcut(QApplication::translate("CMainWindow", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        m_actionSaveAsText->setText(QApplication::translate("CMainWindow", "Save points map as text", Q_NULLPTR));
        m_actionSaveAsPNG->setText(QApplication::translate("CMainWindow", "Save gridmap as PNG", Q_NULLPTR));
        m_actionGraphSlam->setText(QApplication::translate("CMainWindow", "graph-slam", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("CMainWindow", "File", Q_NULLPTR));
        m_menuRecentFiles->setTitle(QApplication::translate("CMainWindow", "Recent files", Q_NULLPTR));
        m_saveMetricMapRepresentation->setTitle(QApplication::translate("CMainWindow", "Save metric map representation", Q_NULLPTR));
        m_saveMetricmapInBinaryFormat->setTitle(QApplication::translate("CMainWindow", "Save metric map in binary format", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("CMainWindow", "Help", Q_NULLPTR));
        menuTools->setTitle(QApplication::translate("CMainWindow", "Tools", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("CMainWindow", "Edit", Q_NULLPTR));
        m_dockWidgetObs->setWindowTitle(QApplication::translate("CMainWindow", "Observations", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        m_expandAll->setToolTip(QApplication::translate("CMainWindow", "Expand all", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        m_expandAll->setText(QString());
#ifndef QT_NO_TOOLTIP
        m_collapseAll->setToolTip(QApplication::translate("CMainWindow", "Collapse all", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        m_collapseAll->setText(QString());
        m_dockWidgetNodeViewer->setWindowTitle(QApplication::translate("CMainWindow", "Observations viewer", Q_NULLPTR));
        m_dockWidgetConfig->setWindowTitle(QApplication::translate("CMainWindow", "Configuration", Q_NULLPTR));
        m_toolBar->setWindowTitle(QApplication::translate("CMainWindow", "toolBar", Q_NULLPTR));
        m_dockWidgetDirection->setWindowTitle(QApplication::translate("CMainWindow", "Pose direction", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CMainWindow: public Ui_CMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMAINWINDOW_H

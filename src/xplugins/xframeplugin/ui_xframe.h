/********************************************************************************
** Form generated from reading UI file 'xframe.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XFRAME_H
#define UI_XFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>

QT_BEGIN_NAMESPACE

class Ui_XFrame
{
public:
    QTabWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *XFrame)
    {
        if (XFrame->objectName().isEmpty())
            XFrame->setObjectName(QStringLiteral("XFrame"));
        XFrame->resize(400, 300);
        XFrame->setAcceptDrops(false);
        XFrame->setDocumentMode(false);
        XFrame->setDockNestingEnabled(false);
        centralWidget = new QTabWidget(XFrame);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setTabsClosable(true);
        centralWidget->setMovable(true);
        XFrame->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(XFrame);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        XFrame->setMenuBar(menuBar);
        mainToolBar = new QToolBar(XFrame);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        XFrame->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(XFrame);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        XFrame->setStatusBar(statusBar);

        retranslateUi(XFrame);

        QMetaObject::connectSlotsByName(XFrame);
    } // setupUi

    void retranslateUi(QMainWindow *XFrame)
    {
        XFrame->setWindowTitle(QApplication::translate("XFrame", "XFrame", 0));
    } // retranslateUi

};

namespace Ui {
    class XFrame: public Ui_XFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XFRAME_H

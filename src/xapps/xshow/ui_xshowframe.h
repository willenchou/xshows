/********************************************************************************
** Form generated from reading UI file 'xshowframe.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XSHOWFRAME_H
#define UI_XSHOWFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_xShowFrame
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *xShowFrame)
    {
        if (xShowFrame->objectName().isEmpty())
            xShowFrame->setObjectName(QStringLiteral("xShowFrame"));
        xShowFrame->resize(400, 300);
        menuBar = new QMenuBar(xShowFrame);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        xShowFrame->setMenuBar(menuBar);
        mainToolBar = new QToolBar(xShowFrame);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        xShowFrame->addToolBar(mainToolBar);
        centralWidget = new QWidget(xShowFrame);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        xShowFrame->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(xShowFrame);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        xShowFrame->setStatusBar(statusBar);

        retranslateUi(xShowFrame);

        QMetaObject::connectSlotsByName(xShowFrame);
    } // setupUi

    void retranslateUi(QMainWindow *xShowFrame)
    {
        xShowFrame->setWindowTitle(QApplication::translate("xShowFrame", "xShowFrame", 0));
    } // retranslateUi

};

namespace Ui {
    class xShowFrame: public Ui_xShowFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XSHOWFRAME_H

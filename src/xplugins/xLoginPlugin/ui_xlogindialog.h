/********************************************************************************
** Form generated from reading UI file 'xlogindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XLOGINDIALOG_H
#define UI_XLOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_XLoginDialog
{
public:
    QComboBox *comb_username_;
    QLineEdit *le_password_;
    QPushButton *pb_login;
    QPushButton *pb_cancel;
    QCheckBox *cekb_rempwd;

    void setupUi(QDialog *XLoginDialog)
    {
        if (XLoginDialog->objectName().isEmpty())
            XLoginDialog->setObjectName(QStringLiteral("XLoginDialog"));
        XLoginDialog->resize(400, 300);
        comb_username_ = new QComboBox(XLoginDialog);
        comb_username_->setObjectName(QStringLiteral("comb_username_"));
        comb_username_->setGeometry(QRect(100, 80, 160, 24));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        comb_username_->setFont(font);
        comb_username_->setStyleSheet(QStringLiteral(""));
        comb_username_->setEditable(true);
        comb_username_->setIconSize(QSize(20, 20));
        le_password_ = new QLineEdit(XLoginDialog);
        le_password_->setObjectName(QStringLiteral("le_password_"));
        le_password_->setGeometry(QRect(100, 120, 161, 23));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        le_password_->setFont(font1);
        le_password_->setStyleSheet(QStringLiteral(""));
        le_password_->setEchoMode(QLineEdit::Password);
        pb_login = new QPushButton(XLoginDialog);
        pb_login->setObjectName(QStringLiteral("pb_login"));
        pb_login->setGeometry(QRect(130, 200, 51, 25));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pb_login->sizePolicy().hasHeightForWidth());
        pb_login->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(8);
        pb_login->setFont(font2);
        pb_login->setLayoutDirection(Qt::LeftToRight);
        pb_login->setStyleSheet(QStringLiteral(""));
        pb_login->setAutoDefault(true);
        pb_cancel = new QPushButton(XLoginDialog);
        pb_cancel->setObjectName(QStringLiteral("pb_cancel"));
        pb_cancel->setGeometry(QRect(210, 200, 51, 25));
        sizePolicy.setHeightForWidth(pb_cancel->sizePolicy().hasHeightForWidth());
        pb_cancel->setSizePolicy(sizePolicy);
        pb_cancel->setFont(font2);
        pb_cancel->setLayoutDirection(Qt::LeftToRight);
        pb_cancel->setStyleSheet(QStringLiteral(""));
        pb_cancel->setAutoDefault(true);
        cekb_rempwd = new QCheckBox(XLoginDialog);
        cekb_rempwd->setObjectName(QStringLiteral("cekb_rempwd"));
        cekb_rempwd->setGeometry(QRect(120, 150, 141, 20));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cekb_rempwd->sizePolicy().hasHeightForWidth());
        cekb_rempwd->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setFamily(QStringLiteral("Ubuntu Mono"));
        font3.setPointSize(10);
        cekb_rempwd->setFont(font3);
        cekb_rempwd->setContextMenuPolicy(Qt::PreventContextMenu);
        cekb_rempwd->setLayoutDirection(Qt::RightToLeft);
        cekb_rempwd->setStyleSheet(QStringLiteral(""));

        retranslateUi(XLoginDialog);

        pb_login->setDefault(true);
        pb_cancel->setDefault(true);


        QMetaObject::connectSlotsByName(XLoginDialog);
    } // setupUi

    void retranslateUi(QDialog *XLoginDialog)
    {
        XLoginDialog->setWindowTitle(QApplication::translate("XLoginDialog", "Dialog", 0));
        pb_login->setText(QApplication::translate("XLoginDialog", "Login", 0));
        pb_cancel->setText(QApplication::translate("XLoginDialog", "cancel", 0));
        cekb_rempwd->setText(QApplication::translate("XLoginDialog", "Remember Password", 0));
    } // retranslateUi

};

namespace Ui {
    class XLoginDialog: public Ui_XLoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XLOGINDIALOG_H

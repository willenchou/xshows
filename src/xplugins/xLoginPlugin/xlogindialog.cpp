#include "xlogindialog.h"
#include "ui_xlogindialog.h"

XLoginDialog::XLoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::XLoginDialog)
{
    ui->setupUi(this);
}

XLoginDialog::~XLoginDialog()
{
    delete ui;
}

void  XLoginDialog:: SetContainer(IContainer * _container)
{
    container = _container;
}

void XLoginDialog::on_pb_login_clicked()
{
    accept();
}

void XLoginDialog::on_pb_cancel_clicked()
{
    reject();
}

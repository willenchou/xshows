#ifndef XLOGINDIALOG_H
#define XLOGINDIALOG_H

#include <QDialog>
#include "xserviceinf.h"
namespace Ui {
class  XLoginDialog;
}

class XLoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit XLoginDialog(QWidget *parent = 0);
    ~XLoginDialog();
public:
    void SetContainer(IContainer * _container);
private slots:
    void on_pb_login_clicked();

    void on_pb_cancel_clicked();

private:
    Ui::XLoginDialog *ui;
private:
    IContainer* container;
};

#endif // XLOGINDIALOG_H

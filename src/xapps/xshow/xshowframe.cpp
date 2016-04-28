#include "xshowframe.h"
#include "ui_xshowframe.h"

xShowFrame::xShowFrame(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::xShowFrame)
{
    ui->setupUi(this);
}

xShowFrame::~xShowFrame()
{
    delete ui;
}

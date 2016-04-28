#ifndef XSHOWFRAME_H
#define XSHOWFRAME_H

#include <QMainWindow>

namespace Ui {
class xShowFrame;
}

class xShowFrame : public QMainWindow
{
    Q_OBJECT

public:
    explicit xShowFrame(QWidget *parent = 0);
    ~xShowFrame();

private:
    Ui::xShowFrame *ui;
};

#endif // XSHOWFRAME_H

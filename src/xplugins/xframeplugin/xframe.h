#ifndef XFRAME_H
#define XFRAME_H

#include <QMainWindow>
#include "xbaseframe.h"
#include "xplugininf.h"
#include "xserviceinf.h"
#include "xdef.h"

namespace Ui {
class XFrame;
}

class XFrame : public QMainWindow,public XBaseIOC<IIoc>
{
    Q_OBJECT

public:
    explicit XFrame(QWidget *parent = 0);
    ~XFrame();

public:
    void Init();
    bool IsLogin();

private:
    Ui::XFrame *ui;
private:
   void downloadActions();
   void loadActionsDefault();
private:
   void openPluginWindows(QString pluginID);
   bool login(QString pluginID);
   bool relogin(QString pluginID);

private Q_SLOTS:
   void slotOnRemoveSubTab(int tabIndex);
   void slotOnDotriggerd(QAction* action);

};

#endif // XFRAME_H

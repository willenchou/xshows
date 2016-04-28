#include "xframe.h"
#include "ui_xframe.h"
#include "qmessagebox.h"
#include "xmenudef.h"
///菜单查找：先找根节点，再从根节点往下找，树形结构
//菜单字段：
// dll名称：xlogin.xlogin(xlogin)
// 主版本：1
// 次版本：0
// id:
//上级id:
//节点类型：根节点，中间节点，叶子节点
//功能类型：无，窗口，发送功能号，
//功能号
//权限
///

XFrame::XFrame(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::XFrame)
{
    ui->setupUi(this);
    this->resize( QSize( 800, 600 ));
}

XFrame::~XFrame()
{
    ui->centralWidget->clear();
    delete ui;
}
////////////////////////////////////////////////
///
/// \brief XFrame::Init
///
void XFrame::Init()
{

    loadActionsDefault();
    connect(ui->centralWidget,SIGNAL(tabCloseRequested(int)),this,SLOT(slotOnRemoveSubTab(int)));

}
bool XFrame::IsLogin()
{
        return false;
}

//////////////////////////////////////////////////
///
/// \brief XFrame::loadActions
///
void XFrame::downloadActions()
{

    //


}
void XFrame::loadActionsDefault()
{
    QMenu *menu = ui->menuBar->addMenu(MENU_FILE);

    QAction* action = new QAction( MENU_ITEM_LOGIN, this);
    menu->addAction(action);

    action = new QAction( MENU_ITEM_EXIT, this);
    // menu = ui->menuBar->addMenu(tr("&Quit"));
    //connect(action, &QAction::triggered, this, &XFrame::ondoaction);
    menu->addAction(action);

    action = new QAction( MENU_ITEM_TESTPLUGIN, this);
    menu->addAction(action);

    connect(menu, SIGNAL(triggered(QAction*)), this, SLOT(slotOnDotriggerd(QAction*)));
    menu->exec();
    //

}
bool XFrame::login(QString pluginID)
{
    if(!IsLogin())
    {
       return relogin(pluginID);
    }

    QMessageBox::about(NULL, "About", "已经登录");

    return true;
}
bool XFrame::relogin(QString pluginID)
{
    IKnown* plugin = container->GetService(pluginID);
    if(plugin== NULL)
    {
        return false;
    }
   IXLoginPlugin * login =static_cast<IXLoginPlugin*> (plugin->QueryInterface(SID_XLOGIN));

    if(login == NULL)
    {
        return false;
    }
    if(login->Login() != RetSucc)
   {
     return false ;
   }

   return true;
}
void XFrame::openPluginWindows(QString pluginID)
{
    if(!IsLogin())
    {
       if(!relogin(MENU_ITEM_LOGIN))
       {
            return;
       }

    }


    //校验权限

    //查看是否已经存在，存在着聚焦

    //添加到最近打开（如果存在换到第一位）

    //未打开，去获取插件
    IXContextPlugin* subWidget = static_cast<IXContextPlugin *> (container->GetService(pluginID)->QueryInterface(SID_XTESTPLUGIN));

    if(!subWidget)
    {
      return;
    }
    ui->centralWidget->addTab(subWidget->GetWidget(),pluginID);

}

void XFrame::slotOnRemoveSubTab(int tabIndex)
{
    ui->centralWidget->removeTab(tabIndex);
}

//菜单指令类别，创建业务窗口，特殊命令（如退出）。。。
void XFrame::slotOnDotriggerd(QAction* action)
{

    //特殊退出
    if(action->text() == MENU_ITEM_EXIT)
    {
        return qApp->exit();
    }
    else if(action->text() == MENU_ITEM_LOGIN)
    {
        login(MENU_ITEM_LOGIN);
    }
    else if(action->text() == MENU_ITEM_RELOGIN)
    {
        relogin(MENU_ITEM_LOGIN);
    }
    else
    {
        openPluginWindows(action->text());
    }

}

#ifndef XCONTAINER_H
#define XCONTAINER_H
#include "xcore.h"
#include "xpluginmng.h"
#include "xserviceinf.h"

class XCORESHARED_EXPORT xContainer:public IContainer
{
public:
    xContainer();
    ~xContainer();
public:
    //IContainer///////
    virtual IKnown * GetService(QString id);

    //加载注册所有在插件目录下的插件
    int RegisterAll(const QString &strPluginPath);

private:
    IKnown * AddService(QString id);

private:

    xPluginMng pluginMng; //DLLMng

    typedef QMap<QString,IKnown *> Name2Service;
    //使用QObject 可以使用 QT 的 信号槽机制，方便通信，同时也可兼容使用QTPLUGINLOADER
    Name2Service RunningServices; //正在使用的基础服务

    QStringList pluginsPaths;
};

#endif // XCONTAINER_H

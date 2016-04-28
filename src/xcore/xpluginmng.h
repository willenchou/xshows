#ifndef XPLUGINMNG_H
#define XPLUGINMNG_H

#include <QObject>
#include "xdllapi.h"
#include <QMap>
#include "xcore.h"
#include "xserviceinfo.h"

///
/// \brief The xPluginMng class
/// 插件管理，注册加载插件
///
///
class XCORESHARED_EXPORT xPluginMng
{
public:
    xPluginMng();

public:
    int LoadAllPlugin(const QString &strPluginPath, const QStringList &strFilter);
    XServiceInfo* GetPlugin(const QString &strPluginPath, QString  pluginname);

static  QString GetDLLName(QString  id);
static  QString GetSID(QString id);


public:
  //dllsManage
 private:
    QMap<QString,XPluginInfo*> regpluginmaps; //注册的DLL信息
  QMap<QString,XServiceInfo*> regservicemaps;//注册的服务信息
};

#endif // XPLUGINMNG_H

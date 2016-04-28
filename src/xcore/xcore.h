#ifndef XCORE_H
#define XCORE_H

#include "xcore_global.h"
#include "qobject.h"
#include "xplugininf.h"
//



//

struct XCORESHARED_EXPORT XVER
{
   int major;
   int minor;
};

typedef  IKnown * (*APIGetPluginService)(const char *serviceID);
typedef  char* (*APIGetDependPluginServiceID)(const char *serviceID);

//插件信息
 class XCORESHARED_EXPORT XSERVICEINFOS
{
 public:
    XVER version;//判断依赖插件的版本是否可用，
    QString sid;
    APIGetDependPluginServiceID _getDependPluginService;
    APIGetPluginService _getPluginService;

};

//DLL信息
class XCORESHARED_EXPORT XDLLINFO
{
public:
   XVER version; //判断升级
   QString dllname;
};

////////////////////////////////////////////////


class XCORESHARED_EXPORT IContainer
{
public:
    virtual IKnown* GetService(QString id)= 0;
};

class  IIoc
{
public:
    virtual void SetContainer(IContainer * _container) = 0;
};

#endif // XCORE_H

#ifndef XSERVICEINFO_H
#define XSERVICEINFO_H



#include <QString>
#include "xcore_global.h"
#include "xplugininfo.h"
#include "xcore.h"
#include "xserviceinf.h"




class XServiceInfo
{
public:
    XServiceInfo();
public:

    IKnown * GetPluginService(const QString &serviceID);

    int RegisterPlugin(XSERVICEINFOS* _serviceinfo );
    int SetOwner(XPluginInfo* _pluginInfo);
private:
    XSERVICEINFOS serviceinfo;
    XPluginInfo* plugininfo;
};
#endif // XSERVICEINFO_H

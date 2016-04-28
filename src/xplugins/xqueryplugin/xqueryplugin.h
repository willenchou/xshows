#ifndef XQUERYPLUGIN_H
#define XQUERYPLUGIN_H

#include "xqueryplugin_global.h"
#include "xcore.h"
#include "xserviceinf.h"
#include "xplugininf.h"
#include "xbasecontextplugin.h"
#include "dialogtest.h"

class XQUERYPLUGINSHARED_EXPORT Xqueryplugin:public XBaseContextPlugin<Xqueryplugin,DialogTest>
{

public:
    Xqueryplugin();
    virtual void*   QueryInterface( const char* iid);
};


extern "C" {

XQUERYPLUGINSHARED_EXPORT    int GetServiceInfo(int index,XSERVICEINFOS *serviceinfo);
XQUERYPLUGINSHARED_EXPORT    int GetDLLInfo(XDLLINFO* info);
XQUERYPLUGINSHARED_EXPORT    IKnown* GetPluginService(const char* pluginID);
}
#endif // XQUERYPLUGIN_H

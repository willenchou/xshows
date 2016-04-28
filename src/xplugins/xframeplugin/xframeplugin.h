#ifndef XFRAMEPLUGIN_H
#define XFRAMEPLUGIN_H

#include "xframeplugin_global.h"
#include "xcore.h"
#include "xserviceinf.h"
#include "xframe.h"
class XFRAMEPLUGINSHARED_EXPORT Xframeplugin:public RefCounted<Xframeplugin, IXFramePlugin>,IIoc
{
public:
    Xframeplugin();
    virtual void SetContainer(IContainer* container);
    virtual void Show();
    virtual void*   QueryInterface( const char* iid);
   // virtual int AddRef() ;
   // virtual int Release();
private:
    XFrame frame;
};
extern "C" {

XFRAMEPLUGINSHARED_EXPORT    int GetServiceInfo(int index,XSERVICEINFOS *serviceinfo);
XFRAMEPLUGINSHARED_EXPORT    int GetDLLInfo(XDLLINFO* info);
XFRAMEPLUGINSHARED_EXPORT    IKnown* GetPluginService(const char* pluginID);
}
#endif // XFRAMEPLUGIN_H

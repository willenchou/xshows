#ifndef XLOGINPLUGIN_H
#define XLOGINPLUGIN_H

#include "xloginplugin_global.h"
#include "xlogindialog.h"
#include "xcore.h"
#include "xserviceinf.h"
#include "xplugininf.h"

class XLOGINPLUGINSHARED_EXPORT XLoginPlugin:public RefCounted<XLoginPlugin, IXLoginPlugin>,public IIoc
{

public:
    XLoginPlugin();
public:
    /// IKnown
    /// \brief QueryInterface
    /// \param iid
    /// \param ppv
    /// \return
    ///
    virtual void*   QueryInterface( const char* iid );
    ///
    /// IIoc
    /// \brief SetContainer
    /// \param _container
    /// \return
    ///
    virtual void   SetContainer(IContainer * _container);
public:
    virtual  int Login();
private:
    XLoginDialog loginDlg;

};
extern "C" {

XLOGINPLUGINSHARED_EXPORT    int GetServiceInfo(int index,XSERVICEINFOS *serviceinfo);
XLOGINPLUGINSHARED_EXPORT    int GetDLLInfo(XDLLINFO* info);
XLOGINPLUGINSHARED_EXPORT    IKnown* GetPluginService(const char* pluginID);
}
#endif // XLOGINPLUGIN_H

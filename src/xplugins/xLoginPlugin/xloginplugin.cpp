#include "xloginplugin.h"

#include"qmessagebox.h"
#include "qtextedit.h"
#include "xdef.h"

XLoginPlugin::XLoginPlugin()
{
}
void*  XLoginPlugin::QueryInterface( const char* iid )
{
    if (strcmp(iid, SID_XLOGIN) == 0)
        {
           return this;
        }
    else if(strcmp(iid, SID_IOC) == 0)
        {
            return static_cast<IIoc*>(this);

        }
    else
        {
            return NULL;

        }

    return NULL;
}
void  XLoginPlugin:: SetContainer(IContainer * _container)
{
    loginDlg.SetContainer(_container);
}

int XLoginPlugin::Login()
{
   loginDlg.exec();

   return loginDlg.result();
}

/////////////////////extern "C"////////////////////////////

///
/// \brief GetPluginService
/// \param pluginID
/// \return
///
IKnown* GetPluginService(const char* pluginID)
{
    //QMessageBox::about(NULL, "About", "Get XLoginPlugin");
    if (strcmp(pluginID, SID_XLOGIN) == 0)
        {
           return new XLoginPlugin();

        }
    else
    {
        return NULL;
    }
}
int GetServiceInfo(int index,XSERVICEINFOS *serviceinfo)
{
    switch (index)
    {
    case 0:
         serviceinfo->sid = SID_XLOGIN;
         serviceinfo->version.major = XLOGIN_VER_MAJOR;
         serviceinfo->version.minor = XLOGIN_VER_MINOR;
         serviceinfo->_getPluginService = GetPluginService;
        return 1;
        break;
    default:
        return 0;
        break;
    }

}

int GetDLLInfo(XDLLINFO* info)
{
    info->dllname = SID_XLOGIN;
    info->version.major = XLOGIN_VER_MAJOR;
    info->version.minor = XLOGIN_VER_MINOR;

    return 1;
}


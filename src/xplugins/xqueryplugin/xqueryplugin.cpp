#include "xqueryplugin.h"
#include "qmessagebox.h"


Xqueryplugin::Xqueryplugin()
{

}
void* Xqueryplugin::  QueryInterface( const char* iid)
{
    if(strcmp(iid, SID_XPLUGIN_SERVICE) == 0 || strcmp(iid, SID_XTESTPLUGIN) == 0)
        {
             return this;
        }
    else
        {
            return XBaseContextPlugin::QueryInterface(iid);// XBaseContextPlugin::QueryInterface(iid);

        }
}

//////////////////////////////////

IKnown* GetPluginService(const char* pluginID)
{
    QMessageBox::about(NULL, "About", "Get XTestPlugin");
    if(strcmp(pluginID, SID_XTESTPLUGIN) == 0)
    {
        return new Xqueryplugin();
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
         serviceinfo->sid = SID_XTESTPLUGIN;
         serviceinfo->version.major = XQUERY_VER_MAJOR;
         serviceinfo->version.minor = XQUERY_VER_MINOR;
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
    info->dllname = SID_XQUERY;
    info->version.major = XQUERY_VER_MAJOR;
    info->version.minor = XQUERY_VER_MINOR;

    return 1;
}

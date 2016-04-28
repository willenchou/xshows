#include "xframeplugin.h"


Xframeplugin::Xframeplugin()
{
}

 void Xframeplugin::SetContainer(IContainer* container)
 {
    frame.SetContainer(container);
 }

void Xframeplugin::Show()
{
    frame.Init();
    frame.show();
}
void* Xframeplugin::  QueryInterface( const char* iid )
{

    if (strcmp(iid, SID_XFRAME) == 0)
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

IKnown* GetPluginService(const char* pluginID)
{

    if (strcmp(pluginID, SID_XFRAME) == 0)
        {
          return new Xframeplugin();

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
         serviceinfo->sid = SID_XFRAME;
         serviceinfo->version.major = XFRAME_VER_MAJOR;
         serviceinfo->version.minor = XFRAME_VER_MINOR;
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
    info->dllname = SID_XFRAME;
    info->version.major = XFRAME_VER_MAJOR;
    info->version.minor = XFRAME_VER_MINOR;

    return 1;
}

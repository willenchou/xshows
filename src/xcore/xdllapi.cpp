#include "xdllapi.h"

xdllapi::xdllapi()
{
    _getDllInfo = NULL;
    _getServiceInfo = NULL;
}
xdllapi::~xdllapi()
{
    if(dll.isLoaded())
    {
        dll.unload();
    }
    _getDllInfo = NULL;
    _getServiceInfo = NULL;
}
int xdllapi::GetServiceInfo(int index,XSERVICEINFOS *serviceinfo)
{
    if (_getServiceInfo)
    {
        return _getServiceInfo(index,serviceinfo);
    }

  return  0;
}
int xdllapi:: GetDLLInfo(XDLLINFO* info)
{
    if (_getDllInfo)
    {
        return  _getDllInfo(info);
    }

  return  0;
}

bool  xdllapi::LoadDLL(const QString& path)
{
    if(dll.isLoaded())
    {
        return true;
    }

    dll.setFileName(path);
         if (!dll.load())
         {
             return false;
         }

    _getDllInfo = (APIGetDLLInfo)dll.resolve("GetDLLInfo");
    _getServiceInfo = (APIGetServiceInfo)dll.resolve("GetServiceInfo");
    return true;
}
bool xdllapi:: UnLoadDLL()
{
    if(dll.isLoaded())
    {
        dll.unload();
    }
    _getDllInfo = NULL;
    _getServiceInfo = NULL;
}

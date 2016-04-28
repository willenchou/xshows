#include "xplugininfo.h"

XPluginInfo::XPluginInfo()
{

}



bool XPluginInfo::LoadDLL(const QString& path)
{
    if(!dllapi.LoadDLL( path))
    {
      dllapi.UnLoadDLL();
      return false;
    }

    if(dllapi.GetDLLInfo(&dllinfo) != 1)
    {
      return false;
    }

    return true;
}



#include "xlinkplugin.h"




   int GetServiceInfo(int index,XSERVICEINFOS *serviceinfo)
   {
       switch (index)
       {
       case 0:
            serviceinfo->sid = SID_XLINK;
            serviceinfo->version.major = XLINK_VER_MAJOR;
            serviceinfo->version.minor = XLINK_VER_MINOR;
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
       info->dllname = SID_XLINK;
       info->version.major = XLINK_VER_MAJOR;
       info->version.minor = XLINK_VER_MINOR;

       return 1;
   }

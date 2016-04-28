#ifndef XLINKPLUGIN_H
#define XLINKPLUGIN_H
#include "xlink_global.h"
#include "xcore.h"
#include "xlink.h"


extern "C" {

XLINKSHARED_EXPORT    int GetServiceInfo(int index,XSERVICEINFOS *serviceinfo);
XLINKSHARED_EXPORT    int GetDLLInfo(XDLLINFO* info);
}

#endif // XLINKPLUGIN_H

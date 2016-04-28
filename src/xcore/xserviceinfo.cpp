#include "xserviceinfo.h"

XServiceInfo::XServiceInfo()
{

   plugininfo = NULL;
}

IKnown * XServiceInfo::GetPluginService(const QString &serviceID)
{

   return serviceinfo._getPluginService(serviceID.toStdString().c_str());
}

int XServiceInfo::SetOwner(XPluginInfo* _pluginInfo)
{
   plugininfo = _pluginInfo;
}

int XServiceInfo::RegisterPlugin(XSERVICEINFOS* _serviceinfo )
{
   serviceinfo.sid = _serviceinfo->sid;
   serviceinfo.version.major = _serviceinfo->version.major;
   serviceinfo.version.minor = _serviceinfo->version.minor;
   serviceinfo._getPluginService = _serviceinfo->_getPluginService;
   return 1;
}



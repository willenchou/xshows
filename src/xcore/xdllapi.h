#ifndef XDLLAPI_H
#define XDLLAPI_H


#include <QLibrary>
#include "xcore_global.h"
#include "xcore.h"




///
///将插件信息注册到xml
///
///
typedef int (*APIGetServiceInfo)(int index,XSERVICEINFOS *serviceinfo);
typedef int (*APIGetDLLInfo)(XDLLINFO* info);

class XCORESHARED_EXPORT xdllapi
{
public:
    xdllapi();
    ~xdllapi();
    int GetServiceInfo(int index,XSERVICEINFOS *serviceinfo);
    int GetDLLInfo(XDLLINFO* info);
public:

   bool  LoadDLL(const QString& path);
   bool  UnLoadDLL();
private:
   APIGetDLLInfo          _getDllInfo;
   APIGetServiceInfo      _getServiceInfo;
private:
  QLibrary dll;
};

#endif // XDLLAPI_H

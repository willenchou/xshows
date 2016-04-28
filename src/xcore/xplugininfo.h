#ifndef XPLUGININFO_H
#define XPLUGININFO_H
#include <QString>
#include "xcore_global.h"
#include "xcore.h"
#include "xdllapi.h"




class XPluginInfo
{
public:
    XPluginInfo();
public:

   bool LoadDLL(const QString& path);
public:
    XDLLINFO dllinfo;
    xdllapi dllapi;
};

#endif // XPLUGININFO_H

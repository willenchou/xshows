#ifndef XLOGINPLUGIN_GLOBAL_H
#define XLOGINPLUGIN_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(XLOGINPLUGIN_LIBRARY)
#  define XLOGINPLUGINSHARED_EXPORT Q_DECL_EXPORT
#else
#  define XLOGINPLUGINSHARED_EXPORT Q_DECL_IMPORT
#endif

#define XLOGIN_VER_MAJOR 1
#define XLOGIN_VER_MINOR 0
#endif // XLOGINPLUGIN_GLOBAL_H
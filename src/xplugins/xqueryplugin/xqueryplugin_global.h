#ifndef XQUERYPLUGIN_GLOBAL_H
#define XQUERYPLUGIN_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(XQUERYPLUGIN_LIBRARY)
#  define XQUERYPLUGINSHARED_EXPORT Q_DECL_EXPORT
#else
#  define XQUERYPLUGINSHARED_EXPORT Q_DECL_IMPORT
#endif

#define XQUERY_VER_MAJOR 1
#define XQUERY_VER_MINOR 0

#endif // XQUERYPLUGIN_GLOBAL_H

#ifndef XLINK_GLOBAL_H
#define XLINK_GLOBAL_H

#include <QtCore/qglobal.h>
#include <qobject.h>
#if defined(XLINK_LIBRARY)
#  define XLINKSHARED_EXPORT Q_DECL_EXPORT
#else
#  define XLINKSHARED_EXPORT Q_DECL_IMPORT
#endif

#define SID_XLINK  "xlink"
#define XLINK_VER_MAJOR 1
#define XLINK_VER_MINOR 0

#endif // XLINK_GLOBAL_H

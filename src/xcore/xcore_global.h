#ifndef XCORE_GLOBAL_H
#define XCORE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(XCORE_LIBRARY)
#  define XCORESHARED_EXPORT Q_DECL_EXPORT
#else
#  define XCORESHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // XCORE_GLOBAL_H

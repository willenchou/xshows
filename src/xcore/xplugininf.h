#ifndef XPLUGININF
#define XPLUGININF
#include "xcore_global.h"
#include "qatomic.h"
#define SID_XPLUGIN_SERVICE "x_pluginservice"

#define SID_XFRAME  "xframe"
#define SID_XLOGIN  "xlogin"
#define SID_XQUERY  "xqueryplugin"

#define SID_XTESTPLUGIN "xtextplugin"


#define SID_IOC    "XIoc"
class IRefCounted
{
public:
    virtual int AddRef() = 0;
    virtual int Release() = 0;
};
//类IKnown
class IKnown:public IRefCounted
{
public:
  virtual void * QueryInterface( const char* iid) = 0;

};






////////////////////////////////////////////////////////////

#endif // XPLUGININF


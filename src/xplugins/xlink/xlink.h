#ifndef XLINK_H
#define XLINK_H

#include "xlink_global.h"
#include "xserviceinf.h"
#include "xplugininf.h"



class XLINKSHARED_EXPORT Xlink:public RefCountedThreadSafe<Xlink, IXServicePlugin>
{

public:
    Xlink();
    ~Xlink();
public:
    virtual void*   QueryInterface( const char* iid);
};
extern "C" {

XLINKSHARED_EXPORT    IKnown* GetPluginService(const char* pluginID);
}


#endif // XLINK_H

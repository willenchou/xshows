#include "xlink.h"
#include "xdef.h"

Xlink::Xlink()
{
}
Xlink::~Xlink()
{
}
void*  Xlink::QueryInterface( const char* iid )
{
    return NULL;
}

IKnown* GetPluginService(const char* pluginID)
{
    if (strcmp(pluginID, SID_XLINK) == 0)
        {
           return new Xlink();
        }
    else
        {
            return NULL;
        }
}

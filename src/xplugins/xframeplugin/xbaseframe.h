#ifndef XBASEFRAME
#define XBASEFRAME
#include "xcore.h"
class XBaseFrame
{

public:
    XBaseFrame(){ container = NULL; }
    void SetContainer(IContainer* _container){container = _container; }
protected:
    IContainer* container;
};

#endif // XBASEFRAME


#include "xserviceinf.h"

template<class T,class R= QWidget>
class  XBaseContextPlugin:public RefCounted<T, IXContextPlugin>,public  XBaseIOC<IIoc>
{
public:
    XBaseContextPlugin()
    {
        //_widget = NULL;
    }
protected:
   R _widget;
public:
    virtual void*   QueryInterface( const char* iid)
    {
        if(strcmp(iid, SID_IOC) == 0)
            {
                return static_cast<IIoc*>(this);

            }
        else
            {
                return NULL;

            }

        return NULL;
    }

    virtual QWidget* GetWidget()
    {

        return &_widget;
    }

};

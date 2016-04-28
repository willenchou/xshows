#ifndef XSERVICEINF
#define XSERVICEINF
#include "xcore_global.h"
#include "xcore.h"
#include "xplugininf.h"
class IXServicePlugin:public IKnown
{

};

class IXLoginPlugin:public IXServicePlugin
{
public:
  virtual int Login() = 0;
};


class  IXFramePlugin:public IXServicePlugin
{
public:
  virtual void Show() = 0;
};


class  IXContextPlugin:public IXServicePlugin
{
public:
  virtual QWidget* GetWidget() = 0;
};

template<class T, class R = IRefCounted>
class   RefCounted: public R
{
public:
    RefCounted(){ ref_ = 1; }
    virtual ~RefCounted(){ }
public:
    virtual int AddRef() { return ref_++; }
    virtual int Release()
    {
        if (--ref_ == 0)
        {
            delete static_cast<T*>(this);
        }
        return ref_;
    }
private:
    mutable int ref_;
};

template<class T, class R = IRefCounted>
class  RefCountedThreadSafe : public R {
public:
    RefCountedThreadSafe() { ref_ = 1; }
    ~RefCountedThreadSafe() { }
    virtual int AddRef() {return QAtomicInt(ref_)++; }
    virtual int Release()
    {
        if (--QAtomicInt(ref_) == 0)
        {
            delete static_cast<T*>(this);
        }
        return ref_;
    }
private:
    int ref_;
};

template<class R = IIoc>
class XBaseIOC: public R
{

public:
    XBaseIOC(){ container = NULL; }
    virtual void SetContainer(IContainer* _container){container = _container; }
protected:
    IContainer* container;
};


#endif // XSERVICEINF


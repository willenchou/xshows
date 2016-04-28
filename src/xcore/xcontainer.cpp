#include "xcontainer.h"
#include "xplugininf.h"

xContainer::xContainer()
{

}
xContainer::~xContainer()
{
    //TODO 负责  RunningServices 剩余释放
    Name2Service::iterator it;
    for ( it = RunningServices.begin(); it != RunningServices.end(); ++it )
    {
       if(it.value() != NULL)
       {
        it.value()->Release();
       }
    }
    RunningServices.clear();
}
//IContainer///////
IKnown * xContainer::GetService(QString id)
{
   QString sid = xPluginMng::GetSID(id);
    Name2Service::Iterator service = RunningServices.find(sid);
    if(service != RunningServices.end())
    {
      return service.value();
    }

    return AddService(id);
}



IKnown * xContainer::AddService(QString id)
{
    QListIterator<QString> ipath(pluginsPaths);
    XServiceInfo* sinfo = NULL;
    while (sinfo== NULL && ipath.hasNext())
    {
        sinfo = pluginMng.GetPlugin(ipath.next(),id);
    }
   if(sinfo == NULL)
   {
       return NULL;
   }
  QString sid = xPluginMng::GetSID(id);
  IKnown* sv= NULL;
  sv= sinfo->GetPluginService(sid);
  RunningServices[sid] =sv;

  return RunningServices[sid];
}

//APP实例调用
//加载注册所有在插件目录下的插件


int xContainer::RegisterAll(const QString &strPluginPath)
{
    pluginsPaths.append(strPluginPath);
    QStringList libFilter;
      libFilter << "*.dll" << "*.so" << "*.dylib";
   return  pluginMng.LoadAllPlugin(strPluginPath,libFilter);
}





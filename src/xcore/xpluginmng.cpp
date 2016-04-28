#include "xpluginmng.h"
#include "qdiriterator.h"

xPluginMng::xPluginMng()
{

}
int xPluginMng::LoadAllPlugin(const QString &strPluginPath, const QStringList &strFilter)
{

    //QStringList libFilter;
     // libFilter << "*.dll" << "*.so" << "*.dylib";
      QDir dir(strPluginPath);
      QDirIterator dirIter(strPluginPath, strFilter, QDir::Files);
      XPluginInfo* pdll = NULL;
      int index = 0;

      while(dirIter.hasNext())
      {

              pdll= new XPluginInfo();
            if(!pdll->LoadDLL(dirIter.next()))
            {
              delete pdll;
              pdll = NULL;
              continue;
            }

            regpluginmaps[pdll->dllinfo.dllname] = pdll;

            index = 0;
            XSERVICEINFOS sinfo;
            while( pdll->dllapi.GetServiceInfo(index++,&sinfo) == 1)
            {

                XServiceInfo* serviceInfo = new XServiceInfo();
                serviceInfo->SetOwner(pdll);
                serviceInfo->RegisterPlugin(&sinfo);
                regservicemaps[sinfo.sid] = serviceInfo;
            }
      }
      return 1;

}
XServiceInfo* xPluginMng::GetPlugin(const QString &strPluginPath, QString  pluginname)
{
  QString sid = xPluginMng::GetSID(pluginname);
  QMap<QString,XServiceInfo*>::Iterator serviceinfo = regservicemaps.find(sid);
  if(serviceinfo != regservicemaps.end())
  {
    return serviceinfo.value();
  }
  QString dllname = xPluginMng::GetDLLName(pluginname);
  /////
  QStringList libFilter;
    libFilter << dllname+".dll" << dllname+".so" <<dllname+".dylib";
 if(LoadAllPlugin(strPluginPath,libFilter) ==1)
 {
     serviceinfo = regservicemaps.find(sid);
     if(serviceinfo != regservicemaps.end())
     {
       return serviceinfo.value();
     }
 }

 return NULL;
}

QString xPluginMng::GetDLLName( QString id)
{
    if(id.contains('.'))
    {
       return id.section(QChar('.'),0,0);
    }
    else
    {
        return id;
    }

}

QString xPluginMng::GetSID( QString  id)
{

    if(id.contains('.'))
    {
       return id.section('.',1,1);

    }
    else
    {
        return id;
    }
}

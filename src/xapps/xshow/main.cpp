#include "xshowframe.h"
#include <QApplication>
#include "xcontainer.h"
#include "xserviceinf.h"
#include "qobject.h"
#include "qdebug.h"
#include "xdef.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setApplicationDisplayName( QObject::tr("X2"));

    QApplication::addLibraryPath("./plugins");
    QApplication::addLibraryPath("./libs");
    xContainer container;
    QString pluginpath = a.applicationDirPath()+"/plugins";

    container.RegisterAll(pluginpath);


   IKnown* plugin = container.GetService(SID_XFRAME);
   IIoc* pIoc = static_cast<IIoc*>(plugin->QueryInterface(SID_IOC));
   if(pIoc)
   {
     pIoc->SetContainer(&container);
   }

   IXFramePlugin* pframe = static_cast<IXFramePlugin*>(plugin->QueryInterface(SID_XFRAME));
   if(pframe)
   {
     pframe->Show();
   }

   //if(plugin)
  // {
  //     plugin->SetContainer(&container);
  //     plugin->Show();
  // }

    return a.exec();
}

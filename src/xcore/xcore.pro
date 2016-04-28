#-------------------------------------------------
#
# Project created by QtCreator 2015-09-01T19:10:35
#
#-------------------------------------------------

QT       -= gui

TARGET = xcore
TEMPLATE = lib

DEFINES += XCORE_LIBRARY
DESTDIR=../../bin/libs
SOURCES += \
    xpluginmng.cpp \
    xdllapi.cpp \
    xplugininfo.cpp \
    xcontainer.cpp \
    xserviceinfo.cpp

HEADERS += xcore.h\
        xcore_global.h \
    xpluginmng.h \
    xdllapi.h \
    xplugininfo.h \
    xcontainer.h \
    xserviceinfo.h \
    xplugininf.h \
    xserviceinf.h \
    xdef.h \
    xmenudef.h \
    xbasecontextplugin.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

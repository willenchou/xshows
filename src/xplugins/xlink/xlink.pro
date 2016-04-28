#-------------------------------------------------
#
# Project created by QtCreator 2015-09-02T17:33:53
#
#-------------------------------------------------

QT       -= gui

TARGET = xlink
TEMPLATE = lib

DEFINES += XLINK_LIBRARY

SOURCES += xlink.cpp \
    xlinkplugin.cpp

HEADERS += xlink.h\
        xlink_global.h \
    xlinkplugin.h

DESTDIR=../../../bin/plugins


unix {
    target.path = /usr/lib
    INSTALLS += target
}

unix|win32: LIBS += -L$$PWD/../../../bin/libs/ -lxcore

INCLUDEPATH += $$PWD/../../xcore
DEPENDPATH += $$PWD/../../xcore

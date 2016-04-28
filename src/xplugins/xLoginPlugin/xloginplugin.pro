#-------------------------------------------------
#
# Project created by QtCreator 2015-08-30T12:45:13
#
#-------------------------------------------------

QT       += widgets

TARGET = xLogin
TEMPLATE = lib

DESTDIR=../../../bin/plugins

DEFINES += XLOGINPLUGIN_LIBRARY

SOURCES += xloginplugin.cpp \
    xlogindialog.cpp

HEADERS += xloginplugin.h\
        xloginplugin_global.h \
    xlogindialog.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}


FORMS += \
    xlogindialog.ui

unix|win32: LIBS += -L$$PWD/../../../bin/libs/ -lxcore

INCLUDEPATH += $$PWD/../../xcore\
DEPENDPATH += $$PWD/../../../bin/libs

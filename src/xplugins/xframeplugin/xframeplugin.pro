#-------------------------------------------------
#
# Project created by QtCreator 2015-09-07T12:18:34
#
#-------------------------------------------------

QT       += widgets

TARGET = xframe
TEMPLATE = lib

DEFINES += XFRAMEPLUGIN_LIBRARY

SOURCES += xframeplugin.cpp \
    xframe.cpp

HEADERS += xframeplugin.h\
        xframeplugin_global.h \
    xframe.h \
    xbaseframe.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
DESTDIR=../../../bin/plugins

FORMS += \
    xframe.ui



unix|win32: LIBS += -L$$PWD/../../../bin/libs/ -lxcore

INCLUDEPATH += $$PWD/../../xcore\
DEPENDPATH += $$PWD/../../../bin/libs

#-------------------------------------------------
#
# Project created by QtCreator 2015-09-09T08:46:15
#
#-------------------------------------------------

QT       += widgets xml

TARGET = xqueryplugin
TEMPLATE = lib

DESTDIR=../../../bin/plugins

DEFINES += XQUERYPLUGIN_LIBRARY

SOURCES += xqueryplugin.cpp \
    dialogtest.cpp

HEADERS += xqueryplugin.h\
        xqueryplugin_global.h \
    dialogtest.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

unix|win32: LIBS += -L$$PWD/../../../bin/libs/ -lxcore

INCLUDEPATH += $$PWD/../../xcore\
DEPENDPATH += $$PWD/../../../bin/libs

FORMS += \
    dialogtest.ui

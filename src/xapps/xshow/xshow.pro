#-------------------------------------------------
#
# Project created by QtCreator 2015-09-06T10:36:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = xshow
TEMPLATE = app

DESTDIR=../../../bin
SOURCES += main.cpp\
        xshowframe.cpp

HEADERS  += xshowframe.h

FORMS    += xshowframe.ui



INCLUDEPATH += $$PWD/../../xcore \

unix|win32: LIBS += -L$$PWD/../../../bin/libs/ -lxcore

DEPENDPATH += $$PWD/../../xcore

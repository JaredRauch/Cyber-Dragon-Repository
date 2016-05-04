#-------------------------------------------------
#
# Project created by QtCreator 2016-04-29T15:41:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AdminUI
TEMPLATE = app


SOURCES += main.cpp\
        customerlist.cpp \
    customerinfo.cpp \
    addcustomerwindow.cpp \
    removewindow.cpp \
    errorwindow.cpp

HEADERS  += customerlist.h \
    customerinfo.h \
    addcustomerwindow.h \
    removewindow.h \
    errorwindow.h

FORMS    += customerlist.ui \
    customerinfo.ui \
    addcustomerwindow.ui \
    removewindow.ui \
    errorwindow.ui

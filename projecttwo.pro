#-------------------------------------------------
#
# Project created by QtCreator 2016-04-30T10:19:44
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = projecttwo
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Address.cpp \
    Customer.cpp \
    Database.cpp \
    sha1.cpp \
    Testimonial.cpp \
    sqlite3.c \
    dialog.cpp \
    customertestimonials.cpp \
    requestpamphlet.cpp \
    orderproduct.cpp \
    sqlite3.c \
    Date.cpp \
    Purchase.cpp \
    addcustomerwindow.cpp \
    customerinfo.cpp \
    customerlist.cpp \
    errorwindow.cpp \
    removewindow.cpp


HEADERS  += mainwindow.h \
    Address.h \
    Customer.h \
    Database.h \
    sha1.h \
    sqlite3.h \
    Testimonial.h \
    dialog.h \
    customertestimonials.h \
    requestpamphlet.h \
    orderproduct.h \
    Date.h \
    Purchase.h \
    addcustomerwindow.h \
    customerinfo.h \
    customerlist.h \
    errorwindow.h \
    removewindow.h


FORMS    += mainwindow.ui \
    dialog.ui \
    maintenanceplan.ui \
    customertestimonials.ui \
    requestpamphlet.ui \
    orderproduct.ui \
    addcustomerwindow.ui \
    customerinfo.ui \
    customerlist.ui \
    errorwindow.ui \
    removewindow.ui

DISTFILES += \
    customers.txt \
    iCyberSecurity.sqlite

RESOURCES += \
    Resources.qrc

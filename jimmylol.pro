#-------------------------------------------------
#
# Project created by QtCreator 2015-12-12T14:19:37
#
#-------------------------------------------------

QT       += core gui
QT += network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = jimmylol
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    networker.cpp \
    basic_info.cpp

HEADERS  += mainwindow.h \
    networker.h \
    basic_info.h

FORMS    +=

RESOURCES += \
    resource.qrc



 CONFIG += c++11

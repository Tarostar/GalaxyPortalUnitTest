#-------------------------------------------------
#
# Project created by QtCreator 2014-03-01T12:16:49
#
#-------------------------------------------------

# include(../GalaxyPortal/GalaxyPortalSrc.pri)

#QT       -= gui

QT       += testlib core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = tst_galaxyportalunittesttest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += tst_galaxyportalunittesttest.cpp \
    ../GalaxyPortal/login.cpp
HEADERS  += ../GalaxyPortal/login.h
DEFINES += SRCDIR=\\\"$$PWD/\\\"



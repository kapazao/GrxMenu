#-------------------------------------------------
#
# Project created by QtCreator 2017-07-07T12:17:11
#
#-------------------------------------------------

QT       += core gui widgets sql network

TARGET = GrxMenu
TEMPLATE = app
CONFIG += c++11

SOURCES += main.cpp \
    botonera.cpp \
    configuracion.cpp \
    usuario.cpp \
    nmap_xml.cpp \
    sedes.cpp \
    soporte.cpp \
    equipos.cpp

HEADERS  += \
    botonera.h \
    configuracion.h \
    usuario.h \
    nmap_xml.h \
    sedes.h \
    soporte.h \
    equipos.h

FORMS    += \
    botonera.ui \
    configuracion.ui \
    usuario.ui \
    sedes.ui \
    soporte.ui \
    equipos.ui
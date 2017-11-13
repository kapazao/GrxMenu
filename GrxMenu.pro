#-------------------------------------------------
#
# Project created by QtCreator 2017-07-07T12:17:11
#
#-------------------------------------------------

QT       += core gui widgets sql network

TARGET = GrxMenu
TEMPLATE = app
CONFIG += c++11 static
QMAKE_CFLAGS = -fpermissive
QMAKE_CXXFLAGS = -fpermissive
QMAKE_LFLAGS = -fpermissive
SOURCES += main.cpp \
    botonera.cpp \
    configuracion.cpp \
    usuario.cpp \
    nmap_xml.cpp \
    sedes.cpp \
    soporte.cpp \
    equipos.cpp \
    tunel.cpp \
    ejecutahilo.cpp \
    tabescaner.cpp \



HEADERS  += \
    botonera.h \
    configuracion.h \
    usuario.h \
    nmap_xml.h \
    sedes.h \
    soporte.h \
    equipos.h \
    tunel.h \
    ejecutahilo.h \
    tabescaner.h \



FORMS    += \
    botonera.ui \
    configuracion.ui \
    usuario.ui \
    sedes.ui \
    soporte.ui \
    equipos.ui \


LIBS += -lssh2


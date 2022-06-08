TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    persona.cpp \
    profesor.cpp \
    alumno.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    persona.h \
    profesor.h \
    alumno.h


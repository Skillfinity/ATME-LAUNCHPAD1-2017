TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c \
    floatpar.c \
    intpar.c

HEADERS += \
    intpar.h \
    floatpar.h \
    switch.h

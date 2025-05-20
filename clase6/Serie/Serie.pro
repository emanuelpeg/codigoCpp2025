TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        juego.cpp \
        main.cpp \
        serie.cpp \
        serieimpar.cpp \
        serieloca.cpp \
        seriepar.cpp \
        seriealternada.cpp \
        serieexponencial.cpp \
        serieprimo.cpp

HEADERS += \
    juego.h \
    serie.h \
    serieimpar.h \
    serieloca.h \
    seriepar.h \
    seriealternada.h \
    serieexponencial.h \
    serieprimo.h

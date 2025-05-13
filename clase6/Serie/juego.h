#ifndef JUEGO_H
#define JUEGO_H
#include "serie.h"

class Juego
{
private:
    int puntos = 0;
    Serie * serie = nullptr;
    void generar();
public:
    Juego();    
    bool estaBien(int resp);
    int getNro1();
    int getNro2();
    int getNro4();
    int getPuntos();
};

#endif // JUEGO_H

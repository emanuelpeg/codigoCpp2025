#include "juego.h"
#include "seriepar.h"
#include "serieimpar.h"
#include "serieloca.h"
#include "seriealternada.h"
#include "serieexponencial.h"
#include "serieprimo.h"
#include <cstdlib>
#include <ctime>

Juego::Juego()
{
    this->generar();
}

void Juego::generar()
{
    if (this->serie != 0) delete this->serie;
    srand(time(0));
    int semilla = (rand() % 5);

    switch (semilla) {
    case 0:
        this->serie = new SeriePar();
        break;
    case 1:
        this->serie = new SerieLoca();
        break;
    case 2:
        this->serie = new SeriePrimo();
        break;
    case 3:
        this->serie = new serielternada();
        break;
    case 4:
        this->serie = new serieexponencial();
        break;
    default:
        this->serie = new SerieImpar();
        break;
    }
    this->serie->generar();
}

bool Juego::estaBien(int resp)
{
    if (this->serie->getNros()[2] == resp) {
        this->puntos++;
        this->generar();
        return true;
    } else {
        this->puntos--;
        this->generar();
        return false;
    }
}

int Juego::getNro1()
{
    return this->serie->getNros()[0];
}

int Juego::getNro2()
{
    return this->serie->getNros()[1];
}

int Juego::getNro4()
{
    return this->serie->getNros()[3];
}

int Juego::getPuntos()
{
    return this->puntos;
}

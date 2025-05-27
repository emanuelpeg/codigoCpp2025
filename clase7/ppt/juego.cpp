#include "juego.h"
#include <ctime>
#include <random>

int Juego::getOpUs() const
{
    return opUs;
}

int Juego::getOpIA() const
{
    return opIA;
}

Juego::Juego()
{

}

int Juego::verificar()
{
    if (this->opUs == this->opIA) {
        return 0;
    }
    if (this->opUs == 0) {
        if (this->opIA == 1) {
            return -1;
        } else {
            return 1;
        }
    }

    if (this->opUs == 1) {
        if (this->opIA == 2) {
            return -1;
        } else {
            return 1;
        }
    }

    if (this->opUs == 2) {
        if (this->opIA == 0) {
            return -1;
        } else {
            return 1;
        }
    }
    return 0;
}

int Juego::generarIA()
{
    srand(time(nullptr));
    this->opIA = rand() % 3;
    return this->opIA;
}

void Juego::elegir(int opUs)
{
    this->opUs = opUs;
}

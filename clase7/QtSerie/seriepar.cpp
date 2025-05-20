#include "seriepar.h"
#include <cstdlib>
#include <ctime>

SeriePar::SeriePar()
{

}

void SeriePar::generar()
{
    srand(time(0));
    int semilla = (rand() % 50) * 2;
    for (int i = 0; i < 4; i++){
        this->nros[i] = semilla + i * 2;
    }
}

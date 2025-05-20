#include "serieimpar.h"
#include <cstdlib>
#include <ctime>

SerieImpar::SerieImpar()
{

}

void SerieImpar::generar()
{
    srand(time(0));
    int semilla = (rand() % 50) * 2 + 1;
    for (int i = 0; i < 4; i++){
        this->nros[i] = semilla + i * 2;
    }
}

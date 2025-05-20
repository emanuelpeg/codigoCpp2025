#include "serieloca.h"
#include <cstdlib>
#include <ctime>

SerieLoca::SerieLoca()
{

}

void SerieLoca::generar()
{
    srand(time(0));
    int multiplo = (rand() % 10);
    int semilla = (rand() % 50) * multiplo;
    for (int i = 0; i < 4; i++){
        this->nros[i] = semilla + i * multiplo;
    }
}

#include "seriealternada.h"
#include <cmath>
#include <cstdlib>
#include <ctime>

serielternada::serielternada() {}

void serielternada::generar()
{

    srand(time(0));
    int semilla = (rand() % 50) * 2;
    int signo = 1 - 2 * (rand() % 2);

    for (int i = 0; i < 4; i++){
        signo = -signo;

        this->nros[i] = signo*(semilla + i * 2 );
    }
}

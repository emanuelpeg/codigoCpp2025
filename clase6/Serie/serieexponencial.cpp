#include "serieexponencial.h"
#include <cstdlib>
#include <ctime>
#include "math.h"

serieexponencial::serieexponencial() {}
void serieexponencial::generar()
{
    srand(time(0));
    int semilla = (rand() % 5)  + 1;
    int exponente = (rand() % 4) + 2; // valores bajos para que los valores de la serie no sean tan altos
    for (int i = 0; i < 4; i++){
        this->nros[i] = pow(semilla+i,exponente);;
;    }
}

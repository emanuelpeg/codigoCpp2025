#include "planmedio.h"


PlanMedio::PlanMedio()
{

}

bool PlanMedio::aprobo(const Alumno *a)
{
    float *notas = a->getNotas();
    if (a->getCantNotas() != 3)
        return false;
    float sum = 0;
    for (int i=0; i<a->getCantNotas();i++)
        sum += notas[i];
    return (sum / 3.0f) > 70;
}



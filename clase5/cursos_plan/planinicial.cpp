#include "planinicial.h"


PlanInicial::PlanInicial()
{

}

bool PlanInicial::aprobo(const Alumno* a)
{
    /*
     * const auto& notas = a->getNotas();
    return !notas.empty() && notas[0] > 60;*/

    float* notas = a->getNotas();
    int cant = a->getCantNotas();

    return (cant > 0) && (notas[0] > 60);
}

#include "planpremium.h"


PlanPremium::PlanPremium(): Plan()
{

}

bool PlanPremium::aprobo(const Alumno *a)
{
    /*
    const auto& notas = a->getNotas();
    if (notas.size() != 5)
        return false;
    float sum = 0;
    for (float n : notas) {
        if (n <= 70)
            return false;
        sum += n;
    }
    return (sum / 5.0f) > 80;*/
    float* notas = a->getNotas();
    int cant = a->getCantNotas();

        if (cant != 5)
            return false;

        float sum = 0;
        for (int i = 0; i < cant; ++i) {
            if (notas[i] <= 70)
                return false;
            sum += notas[i];
        }

        return (sum / 5.0f) > 80;
}


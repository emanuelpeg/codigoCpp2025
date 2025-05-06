#ifndef PLANINICIAL_H
#define PLANINICIAL_H
#include "plan.h"

class PlanInicial: public Plan
{
public:
    PlanInicial();

    bool aprobo(const Alumno *a);
};

#endif // PLANINICIAL_H


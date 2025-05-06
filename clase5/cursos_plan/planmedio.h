#ifndef PLANMEDIO_H
#define PLANMEDIO_H
#include "plan.h"

class PlanMedio: public Plan
{
public:
    PlanMedio();
    bool aprobo(const Alumno *a)  ;
};

#endif // PLANMEDIO_H

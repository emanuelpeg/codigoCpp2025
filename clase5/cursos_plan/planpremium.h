#ifndef PLANPREMIUM_H
#define PLANPREMIUM_H

#include "plan.h"

class PlanPremium : public Plan
{
public:
    PlanPremium();
     bool aprobo(const Alumno *a)  ;
};

#endif // PLANPREMIUM_H

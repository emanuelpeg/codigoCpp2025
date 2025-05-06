#ifndef PLAN_H
#define PLAN_H

class Alumno; // Forward declaration
#include "alumno.h"

class Plan
{
private:
    Alumno *a;
public:
    Plan();
    virtual bool aprobo(const Alumno * a)  = 0;
};

#endif // PLAN_H

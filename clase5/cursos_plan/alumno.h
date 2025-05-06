#ifndef ALUMNO_H
#define ALUMNO_H
class Plan;  // Forward declaration

#include "plan.h"

class Alumno
{
private:
    int dni;
    Plan * plan;
    float * notas;
    int cantNotas = 0;
public:
    Alumno(int dni, Plan *plan);

    bool aprobo() const;
    int getDNI() const;
    void agregarNota(float nota);    
    void clear();
    void cambiarPlan(Plan *nuevoPlan);
    float *getNotas() const ;

    int getCantNotas() const;
};

#endif // ALUMNO_H

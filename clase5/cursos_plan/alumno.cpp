#include "alumno.h"

int Alumno::getCantNotas() const
{
    return cantNotas;
}

Alumno::Alumno(int dni, Plan *plan)
{
    notas = nullptr;
    cantNotas = 0;
    this->dni = dni;
    this->plan = plan;
}

int Alumno::getDNI() const {
    return dni;
}

bool Alumno::aprobo() const {
        return plan->aprobo(this);   // Lógica delegada al plan
    }

void Alumno::agregarNota(float nota) {

    float* aux = new float[cantNotas + 1];
    for (int i = 0; i < cantNotas; i++) {
           aux[i] = notas[i];
       }
    aux[cantNotas] = nota;
    delete[] notas;
    notas = aux;
    cantNotas++;
}

void Alumno::clear()
{
    delete[] notas;
    notas = nullptr;
    cantNotas = 0;
}

float *Alumno::getNotas() const {
    return this->notas;
}


void Alumno::cambiarPlan(Plan* nuevoPlan) {
    plan = nuevoPlan;
    this->clear();  // Reiniciar notas si cambia de modalidad
}

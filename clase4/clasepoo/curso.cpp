#include "curso.h"

Curso::Curso(char *nombre)
{
    this->nombre = nombre;
}

char *Curso::getNombre() const
{
    return nombre;
}

void Curso::add(Alumno a)
{
    Alumno *aux = new Alumno[this->cant + 1];
    for(int i = 0; i < this->cant; i++) {
        aux[i] = this->alumnos[i];
    }
    aux[this->cant] = a;
    this->cant++;
    delete [] this->alumnos;
    this->alumnos = aux;
}

double Curso::promedio()
{
    double acu = 0;
    for(int i = 0; i< this->cant; i++) {
        acu += this->alumnos[i].promedio();
    }
    return acu / cant;
}


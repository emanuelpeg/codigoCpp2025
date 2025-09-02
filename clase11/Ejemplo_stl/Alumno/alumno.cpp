#include "alumno.h"
#include <numeric>

Alumno::Alumno(int dni, char * nombre)
{
    this->dni = dni;
    this->nombre = nombre;
}

double Alumno::promedio()
{
    return std::accumulate(this->notas.begin(),
                           this->notas.end(),
                           0)
            / this->notas.size();
}

int Alumno::getDni() const
{
    return dni;
}

char *Alumno::getNombre() const
{
    return nombre;
}

void Alumno::setNombre(char *newNombre)
{
    nombre = newNombre;
}

void Alumno::addNota(double nota)
{
    this->notas.push_back(nota);
}

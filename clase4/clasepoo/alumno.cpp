#include "alumno.h"

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

int Alumno::getNota1() const
{
    return nota1;
}

void Alumno::setNota1(int newNota1)
{
    nota1 = newNota1;
}

int Alumno::getNota2() const
{
    return nota2;
}

void Alumno::setNota2(int newNota2)
{
    nota2 = newNota2;
}

double Alumno::promedio()
{
    return (this->nota1 + nota2) / 2.0;
}

Alumno::Alumno(int dni)
{
   this->dni = dni;
}

#include "alumno.h"

Alumno::Alumno(int dni, char * nombre)
{
    this->dni = dni;
    this->nombre = nombre;
}

double Alumno::promedio()
{
    return (nota1 + nota2 + nota3) / 3.0;
}

void Alumno::setNota1(int nota)
{
    this->nota1 = nota;
}

void Alumno::setNota2(int nota)
{
    this->nota2 = nota;
}

void Alumno::setNota3(int nota)
{
    this->nota3 = nota;
}

int Alumno::getDni()
{
    return this->dni;
}

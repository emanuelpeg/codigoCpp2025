#include "alumno.h"
#include <string.h>
#include <iostream>

int Alumno::getDni() const
{
    return dni;
}

const char *Alumno::getNombre()
{
    return nombre;
}

void Alumno::setNombre(const char *newNombre)
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

Alumno::~Alumno()
{
    //std::cout << "murio " << this->getNombre() << std::endl;
   // delete [] this->nombre;
}

Alumno::Alumno()
{
}

Alumno::Alumno(int dni)
{
    this->dni = dni;
}

Alumno::Alumno(const Alumno &a)
{
    this->dni = a.dni;
    this->nota1 = a.nota1;
    this->nota2 = a.nota2;
    char * nom = new char(strlen(a.nombre));
    strcpy(nom, a.nombre);
    this->nombre = nom;
}

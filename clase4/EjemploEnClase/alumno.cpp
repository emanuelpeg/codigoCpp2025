#include <iostream>
#include "alumno.h"
#include "string.h"

long Alumno::getDni() const
{
    return dni;
}

char *Alumno::getNombre() const
{
    return nombre;
}

void Alumno::setNombre(char *newNombre)
{
    this->nombre = new char[strlen(newNombre) + 1];
    strcpy(this->nombre, newNombre);
}

int Alumno::getNota1() const
{
    return notas[0];
}

void Alumno::setNota1(int newNota1)
{
    notas[0] = newNota1;
}

int Alumno::getNota2() const
{
    return notas[1];
}

void Alumno::setNota2(int newNota2)
{
    notas[1] = newNota2;
}

int Alumno::getNota3() const
{
    return notas[2];
}

void Alumno::setNota3(int newNota3)
{
    notas[2] = newNota3;
}

double Alumno::promedio()
{
    return (notas[0]+notas[1]+notas[2])/3.0;
}

Alumno::Alumno(long dni)
{
    this->dni = dni;
}

Alumno::Alumno(long dni, char *nombre)
{
    this->dni = dni;
    this->nombre = new char[strlen(nombre) + 1];
    strcpy(this->nombre, nombre);
}

Alumno::Alumno(Alumno &a)
{
    this->dni = a.getDni();
    this->setNombre(a.getNombre());
    this->setNota1(a.getNota1());
    this->setNota2(a.getNota2());
    this->setNota3(a.getNota3());
    std::cout<<"uso el constructor de copia" << std::endl;
}


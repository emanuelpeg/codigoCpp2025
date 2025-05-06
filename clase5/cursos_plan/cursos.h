#ifndef CURSOS_H
#define CURSOS_H
#include <vector>
#include <iostream>
#include "alumno.h"
class Cursos
{
private:
    Alumno ** alumnos;
    int cant;
public:
    Cursos();

    void agregarAlumno(Alumno a);
    void imprimirAlumnos() const;
};

#endif // CURSOS_H

#ifndef CURSO_H
#define CURSO_H
#include "alumno.h"


class Curso
{
private:
    char * nombre;
    Alumno* alumnos = nullptr;
    int cant = 0;
public:
    Curso(char * nombre);
    char *getNombre() const;
    void add(Alumno a);
    double promedio();
};

#endif // CURSO_H

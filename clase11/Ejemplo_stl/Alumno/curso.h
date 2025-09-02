#ifndef CURSO_H
#define CURSO_H
#include <vector>
#include "alumno.h"

class Curso
{
private:
    std::vector<Alumno> alumnos;
public:
    Curso();
    void addAlumno(Alumno a);
    std::vector<Alumno> aprobados();
    double promedioGeneral();
    void alumnosPorPromedio();
    const std::vector<Alumno> &getAlumnos() const;
};

#endif // CURSO_H

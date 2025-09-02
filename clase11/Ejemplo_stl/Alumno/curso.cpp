#include "curso.h"
#include <algorithm>
#include <numeric>
#include <cstring>

const std::vector<Alumno> &Curso::getAlumnos() const
{
    return alumnos;
}

Curso::Curso()
{

}

void Curso::addAlumno(Alumno a)
{
    this->alumnos.push_back(a);
}

std::vector<Alumno> Curso::aprobados()
{
    std::vector<Alumno> resultado;
    std::copy_if(this->alumnos.begin(),
                 this->alumnos.end(),
                 std::back_inserter(resultado),
                 [](Alumno a){ return a.promedio() > 60; });
    return resultado;
}

double Curso::promedioGeneral()
{
    std::vector<double> promedios(this->alumnos.size());

    std::transform(this->alumnos.begin(),
                   this->alumnos.end(),
                   promedios.begin(),
                       [](Alumno a) { return a.promedio(); });

    return std::accumulate(promedios.begin(),
                           promedios.end(),
                           0)
            / promedios.size();
}

bool sortPromedio(Alumno a, Alumno b) {
    if (a.promedio() == b.promedio()) {
        return strcmp(a.getNombre(), b.getNombre()) <= 0;
    } else {
        return a.promedio() > b.promedio();
    }
}

void Curso::alumnosPorPromedio()
{
    std::sort(this->alumnos.begin(),
              this->alumnos.end(),
              sortPromedio);
}

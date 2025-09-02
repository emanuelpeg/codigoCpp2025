#include "alumno.h"
#include <numeric>

char *Alumno::getNombre() const
{
    return nombre;
}

void Alumno::setNombre(char *newNombre)
{
    nombre = newNombre;
}

std::vector<int> &Alumno::getNotas()
{
    return notas;
}

void Alumno::setNotas(const std::vector<int> &newNotas)
{
    notas = newNotas;
}

double Alumno::promedio()
{
    int sum = std::accumulate(this->notas.begin(), this->notas.end(), 0);
    return sum / (this->notas.size() * 1.0);
}

Alumno::Alumno()
{

}

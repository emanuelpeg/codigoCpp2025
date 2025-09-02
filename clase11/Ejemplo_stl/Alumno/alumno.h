#ifndef ALUMNO_H
#define ALUMNO_H
#include <vector>

class Alumno
{
private:
    int dni;
    char * nombre;
    std::vector<double> notas;
public:
    Alumno(int dni, char * nombre);
    double promedio();
    int getDni() const;
    char *getNombre() const;
    void setNombre(char *newNombre);
    void addNota(double nota);
};

#endif // ALUMNO_H

#ifndef ALUMNO_H
#define ALUMNO_H
#include <vector>

class Alumno
{
private:
    char* nombre;
    std::vector<int> notas;
public:
    Alumno();
    char *getNombre() const;
    void setNombre(char *newNombre);
    std::vector<int> &getNotas();
    void setNotas(const std::vector<int> &newNotas);
    double promedio();
};

#endif // ALUMNO_H

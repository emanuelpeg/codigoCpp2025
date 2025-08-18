#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <cstring>

class Empleado
{
private:
    char dni[8];
    int cantHs;
public:
    Empleado(const char* dni);
    const char* getDni() const;

    //sobrecarga del operado <
    bool operator<(const Empleado& other) const {
        return std::strcmp(this->dni, other.dni) < 0;
    }
};

#endif // EMPLEADO_H

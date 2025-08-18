#include "empleado.h"

Empleado::Empleado(const char * dni)
{
    strncpy(this->dni, dni, 8);

}

const char* Empleado::getDni() const{
    return this->dni;
}


#include "enviocomun.h"
#include <cstring>


char *EnvioComun::getCodigo() const
{
    return codigo;
}

EnvioComun::EnvioComun(char * cod, double montoFijo)
{
    this->codigo = new char[strlen(cod) + 1];
    strcpy(this->codigo, cod);
    this->montoFijo = montoFijo;
}

double EnvioComun::getMonto() const
{

    return this->montoFijo;
}
std::ostream& operator<<(std::ostream& os, const EnvioComun& dt)
{
    os << "Codigo "<< dt.codigo << " Monto " << dt.getMonto()<< std::endl;
    return os;
}

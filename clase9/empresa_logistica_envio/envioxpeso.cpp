#include "envioxpeso.h"

EnvioXPeso::EnvioXPeso(char * codigo, double montoFijo, double peso): EnvioComun(codigo, montoFijo)
{
    this->peso = peso;
}

double EnvioXPeso::getMonto() const
{
    return this->montoFijo + (peso  * 1);
}



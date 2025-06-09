#include "enviocertificado.h"

EnvioCertificado::EnvioCertificado(char * codigo, double montoFijo, int km): EnvioComun (codigo,montoFijo)
{
    this->km = km;
}



double EnvioCertificado::getMonto() const
{
    return this->montoFijo  + (this->km  * 10);
}




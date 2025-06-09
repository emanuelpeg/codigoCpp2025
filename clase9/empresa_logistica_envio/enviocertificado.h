#ifndef ENVIOCERTIFICADO_H
#define ENVIOCERTIFICADO_H

#include <iostream>
#include "enviocomun.h"

//Envíos certificados, es un monto fijo, más un seguro por kilómetros.

class EnvioCertificado : public EnvioComun
{
private:
    int km = 0;

public:
    EnvioCertificado(char * codigo, double montoFijo, int km);
    double getMonto() const override;


};

#endif // ENVIOCERTIFICADO_H

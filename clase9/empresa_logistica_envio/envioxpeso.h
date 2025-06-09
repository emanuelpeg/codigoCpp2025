#ifndef ENVIOXPESO_H
#define ENVIOXPESO_H
#include <iostream>
#include "enviocomun.h"

//Envios por peso, es un monto fijo más un plus por peso del paquete

class EnvioXPeso : public EnvioComun
{
private:
    double peso = 0.0;
public:
    EnvioXPeso(char * codigo, double montoFijo, double peso);
    double getMonto() const override;

};

#endif // ENVIOXPESO_H

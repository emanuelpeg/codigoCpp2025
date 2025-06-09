#ifndef ENVIOCOMUN_H
#define ENVIOCOMUN_H
#include <iostream>

#include <string.h>

//Envíos comunes, los cuales tienen un monto fijo.

class EnvioComun
{
protected:
   char * codigo;
   double montoFijo;
public:
    EnvioComun(char * codigo, double montoFijo);
    virtual double getMonto() const;
    //virtual double getMonto();
    friend std::ostream& operator<<(std::ostream& os, const EnvioComun& dt);
    char *getCodigo() const;
};

#endif // ENVIOCOMUN_H

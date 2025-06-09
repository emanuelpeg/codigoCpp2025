#ifndef GESTOR_H
#define GESTOR_H

#include <enviocomun.h>

class Gestor
{
private:
    EnvioComun * envios[30];
    int cantidad=0;

public:
    Gestor();

    void addEnvio(EnvioComun *env);
    int getCantidad() const;
    EnvioComun *getEnvio(int pos);
};

#endif // GESTOR_H

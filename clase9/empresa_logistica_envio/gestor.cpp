#include "gestor.h"

Gestor::Gestor()
{

}

void Gestor::addEnvio(EnvioComun *env)
{
    if (this->cantidad<30)
    {
        this->envios[cantidad] = env;
        this->cantidad++;
    }
}

int Gestor::getCantidad() const
{
    return this->cantidad;
}

EnvioComun *Gestor::getEnvio(int pos)
{
    return this->envios[pos];
}

#include "rotor.h"

Rotor::Rotor(int cant)
{
    this->cant = cant;
    this->elementos = new int[cant];
    for (int i = 0; i < cant; i++) {
        this->elementos[i] = i;
    }
    this->indice = 0;
}

int Rotor::next()
{
    int resultado = this->elementos[indice];
    indice++;
    if (indice == cant) indice = 0;
    return resultado;
}

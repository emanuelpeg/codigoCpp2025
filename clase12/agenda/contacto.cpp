#include "contacto.h"
#include <string.h>

char *Contacto::getTipo() const
{
    return tipo;
}

void Contacto::setTipo(char *newTipo)
{
    tipo = new char(strlen(newTipo));
    strcpy(tipo, newTipo);
}

char *Contacto::getValor() const
{
    return valor;
}

void Contacto::setValor(char *newValor)
{
    valor = new char(strlen(newValor));
    strcpy(valor, newValor);
}

int Contacto::getId_persona() const
{
    return id_persona;
}

void Contacto::setId_persona(int newId_persona)
{
    id_persona = newId_persona;
}

Contacto::Contacto(char * newTipo,
                   char * newValor)
{
    tipo = new char(strlen(newTipo));
    strcpy(tipo, newTipo);
    valor = new char(strlen(newValor));
    strcpy(valor, newValor);
}

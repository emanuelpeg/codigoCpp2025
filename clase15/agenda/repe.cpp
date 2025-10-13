#include "repe.h"
#include <iostream>

Repe::Repe(Agenda* a)
{
    this->a = a;
}

char Repe::getTipo()
{
    return 'R';
}

void Repe::notificar()
{
    std::cout << this->descripcion;
    Repe r(this->a);
    r.descripcion = this->descripcion;
    r.duracion = this->duracion;
    r.hora = this->hora;
    //aumentar el dia!!
    r.fecha = this->fecha;
    this->a->add(&r);
}

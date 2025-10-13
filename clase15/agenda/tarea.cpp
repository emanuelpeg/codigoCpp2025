#include "tarea.h"
#include "string.h"

int Tarea::getDuracion() const
{
    return duracion;
}

void Tarea::setDuracion(int newDuracion)
{
    duracion = newDuracion;
}

char *Tarea::getHora() const
{
    return hora;
}

void Tarea::setHora(char *newHora)
{
    hora = newHora;
}

char *Tarea::getFecha() const
{
    return fecha;
}

void Tarea::setFecha(char *newFecha)
{
    fecha = newFecha;
}

char *Tarea::getDescripcion() const
{
    return descripcion;
}

void Tarea::setDescripcion(char *newDescripcion)
{
    descripcion = newDescripcion;
}

TareaStr Tarea::getStr()
{
    TareaStr str;
    str.duracion = this->duracion;
    strcpy(str.descripcion, this->descripcion);
    strcpy(str.fecha, this->fecha);
    strcpy(str.hora, this->hora);
    str.tipo = this->getTipo();
}

void Tarea::setStr(TareaStr str)
{
    this->duracion = str.duracion;
    strcpy(this->descripcion, str.descripcion);
    strcpy(this->fecha, str.fecha);
    strcpy(this->hora, str.hora);
}

Tarea::Tarea()
{
}

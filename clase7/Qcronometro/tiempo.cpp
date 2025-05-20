#include "tiempo.h"

int Tiempo::getHora() const
{
    return hora;
}

int Tiempo::getMseg() const
{
    return mseg;
}

int Tiempo::getMin() const
{
    return min;
}

int Tiempo::getSeg() const
{
    return seg;
}

int Tiempo::getDseg() const
{
    return dseg;
}

int Tiempo::getCseg() const
{
    return cseg;
}

Tiempo::Tiempo()
{
    this->reiniciar();
}

void Tiempo::incrementar()
{
    this->mseg++;
    if (this->mseg == 10) {
        this->mseg = 0;
        this->cseg++;
        if (this->cseg == 10) {
            this->cseg = 0;
            this->dseg++;
            if (this->dseg == 10) {
                this->dseg = 0;
                this->seg++;
                if (this->seg == 60) {
                    this->seg = 0;
                    this->min++;
                    if (this->min == 60) {
                        this->min = 0;
                        this->hora++;
                    }
                }
            }
        }
    }
}

void Tiempo::reiniciar()
{
    hora = 0;
    min  = 0;
    seg = 0;
    dseg = 0;
    cseg = 0;
    mseg = 0;
}

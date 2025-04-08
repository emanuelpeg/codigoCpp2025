#include "fraccion.h"

int mcd(int num, int deno) {
    return ((num%deno)== 0) ? deno :mcd(deno, num%deno);
}

int Fraccion::getNum() const
{
    return num;
}

int Fraccion::getDeno() const
{
    return deno;
}

Fraccion Fraccion::suma(Fraccion otraFraccion)
{
    int nuevoNum = this->num * otraFraccion.getDeno() +
            otraFraccion.getNum() * this->deno;
    int nuevoDeno= this->deno * otraFraccion.getDeno();
    return Fraccion(nuevoNum, nuevoDeno);
}

Fraccion Fraccion::resta(Fraccion otraFraccion)
{
    int nuevoNum = this->num * otraFraccion.getDeno() -
            otraFraccion.getNum() * this->deno;
    int nuevoDeno= this->deno * otraFraccion.getDeno();
    return Fraccion(nuevoNum, nuevoDeno);
}

Fraccion Fraccion::multi(Fraccion otraFraccion)
{
    int nuevoNum = this->num *
            otraFraccion.getNum();
    int nuevoDeno= this->deno * otraFraccion.getDeno();
    return Fraccion(nuevoNum, nuevoDeno);
}

Fraccion Fraccion::div(Fraccion otraFraccion)
{
    int nuevoNum = this->num *
            otraFraccion.getDeno();
    int nuevoDeno= this->deno * otraFraccion.getNum();
    return Fraccion(nuevoNum, nuevoDeno);
}

void Fraccion::simplificar()
{
    int mcdVar = mcd(this->num, this->deno);
    this->num = this->num / mcdVar;
    this->deno = this->deno / mcdVar;
}


Fraccion::Fraccion(int num)
{
    this->num = num;
}

Fraccion::Fraccion(int num, int deno)
{
    this->num = num;
    this->deno = deno;
}

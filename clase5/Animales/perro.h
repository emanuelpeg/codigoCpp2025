#ifndef PERRO_H
#define PERRO_H
#include "animal.h"

class Perro : public Animal
{
public:
    Perro();
    const char * sonido();
};

#endif // PERRO_H

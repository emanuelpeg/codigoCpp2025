#ifndef PATO_H
#define PATO_H
#include "animal.h"

class Pato : public Animal
{
public:
    Pato();
    const char * sonido();
};

#endif // PATO_H

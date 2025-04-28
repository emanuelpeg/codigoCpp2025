#ifndef ANIMAL_H
#define ANIMAL_H


class Animal
{
public:
    Animal();
    virtual const char * sonido() = 0;
};

#endif // ANIMAL_H

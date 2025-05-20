#include "rotor.h"

Rotor::Rotor()
{
    this->count =0;
    this->index = 0;
}

void Rotor::add(int value)
{
    int * aux = new int[this->count + 1];
    for(int i = 0; i< this->count; i++) {
        aux[i] = this->values[i];
    }
    aux[this->count] = value;
    this->count++;
    delete [] this->values;
    this->values = aux;
}

int Rotor::next()
{
    if ((this->count - 1) == this->index) {
        this->index = 0;
    } else {
        this->index++;
    }
    return this->values[this->index];

}

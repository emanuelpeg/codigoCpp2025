#ifndef NORMAL_H
#define NORMAL_H
#include "tarea.h"

class Normal: public Tarea
{
public:
    Normal();
    char getTipo();
    void notificar();
};

#endif // NORMAL_H

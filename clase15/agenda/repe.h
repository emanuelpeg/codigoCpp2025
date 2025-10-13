#ifndef REPE_H
#define REPE_H
#include "agenda.h"
#include "tarea.h"

class Repe: public Tarea
{
private:
    Agenda* a;
public:
    Repe(Agenda* a);
    char getTipo();
    void notificar();
};

#endif // REPE_H

#ifndef AGENDA_H
#define AGENDA_H
#include <vector>
#include <string>
#include "tarea.h"

class Agenda
{
private:
    std::vector<Tarea*> tareas;
public:
    Agenda();
    void add(Tarea* t);
    void leer();
    void guardar();
    std::vector<Tarea*> mayor();
    std::string dia();
};

#endif // AGENDA_H

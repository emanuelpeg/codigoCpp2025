#ifndef ARCHIVOTXT_H
#define ARCHIVOTXT_H
#include "tarea.h"

class ArchivoTxt : public Tarea
{
public:
    ArchivoTxt();
    char getTipo();
    void notificar();
};

#endif // ARCHIVOTXT_H

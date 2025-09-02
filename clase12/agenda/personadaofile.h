#ifndef PERSONADAOFILE_H
#define PERSONADAOFILE_H
#include "personadao.h"

class PersonaDaoFile : public PersonaDao
{
public:
    PersonaDaoFile();
    std::vector<Persona> leerTodo();
    bool guardar(Persona persona);
    void generarDatosDeEjemplo();
};

#endif // PERSONADAOFILE_H

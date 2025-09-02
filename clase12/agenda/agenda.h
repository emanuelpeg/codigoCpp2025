#ifndef AGENDA_H
#define AGENDA_H
#include <vector>
#include "persona.h"
#include "personadao.h"
class Agenda
{
private:
    std::vector<Persona> personas;
    PersonaDao * dao;

public:
    Agenda();
    void leer();
    bool save(Persona persona);
    void generarDatosDeEjemplo();
    std::vector<Persona> filtrar(char * nombre);
    const std::vector<Persona> &getPersonas() const;
};

#endif // AGENDA_H

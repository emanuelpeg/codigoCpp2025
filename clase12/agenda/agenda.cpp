#include "agenda.h"
#include "personadaofile.h"
#include "personadaomem.h"
#include <string.h>

const std::vector<Persona> &Agenda::getPersonas() const
{
    return personas;
}

Agenda::Agenda()
{
    this->dao = new PersonaDaoFile();
}

void Agenda::leer()
{
    this->personas = this->dao->leerTodo();
}

bool Agenda::save(Persona persona)
{
    this->personas.push_back(persona);
    this->dao->guardar(persona);
}

void Agenda::generarDatosDeEjemplo()
{
    this->dao->generarDatosDeEjemplo();
}

std::vector<Persona> Agenda::filtrar(char *nombre)
{
    std::vector<Persona> aux;
    for (int i = 0; i < this->personas.size(); i++) {
        auto p = this->personas[i];
        int len = strlen(nombre);
        if (strncmp(p.getNombre(), nombre, len) == 0) {
            aux.push_back(p);
        }
    }
    return aux;
}

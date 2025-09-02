#ifndef PERSONADAO_H
#define PERSONADAO_H
#include <vector>
#include "persona.h"

struct strPersona
{
    int id;
    char nombre[100];
    char dir[150];
};

struct strContacto
{
  int id_persona;
  char tipo[100];
  char valor[150];
};


class PersonaDao
{
public:
    PersonaDao();
    virtual std::vector<Persona> leerTodo() = 0;
    virtual bool guardar(Persona p) = 0;
    virtual void generarDatosDeEjemplo() = 0;
};

#endif // PERSONADAO_H

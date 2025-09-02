#include "persona.h"
#include <string.h>

char *Persona::getNombre() const
{
    return nombre;
}

void Persona::setNombre(char *newNombre)
{
    nombre = new char(strlen(newNombre));
    strcpy(nombre, newNombre);
}

char *Persona::getDir() const
{
    return dir;
}

void Persona::setDir(char *newDir)
{
    dir = new char(strlen(newDir));
    strcpy(dir, newDir);
}

std::vector<Contacto> Persona::getContactos()
{
    return contactos;
}

void Persona::addContacto(Contacto c)
{
    this->contactos.push_back(c);
}

void Persona::setContactos(const std::vector<Contacto> &newContactos)
{
    contactos = newContactos;
}

int Persona::getId() const
{
    return id;
}

void Persona::setId(int newId)
{
    id = newId;
}

Persona::Persona(char * newNombre)
{
    nombre = new char(strlen(newNombre));
    strcpy(nombre, newNombre);
}

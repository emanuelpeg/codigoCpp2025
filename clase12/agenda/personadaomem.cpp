#include "personadaomem.h"

PersonaDaoMem::PersonaDaoMem()
{

}

std::vector<Persona> PersonaDaoMem::leerTodo()
{
    return this->personas;
}

bool PersonaDaoMem::guardar(Persona persona)
{
    this->personas.push_back(persona);
    return true;
}

void PersonaDaoMem::generarDatosDeEjemplo()
{

}

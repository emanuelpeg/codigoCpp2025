#ifndef PERSONADAOMEM_H
#define PERSONADAOMEM_H
#include <vector>
#include "persona.h"
#include "personadao.h"

class PersonaDaoMem : public PersonaDao
{
private:
    std::vector<Persona> personas;
public:
    PersonaDaoMem();
    std::vector<Persona> leerTodo();
    bool guardar(Persona persona);
    void generarDatosDeEjemplo();
};

#endif // PERSONADAOMEM_H

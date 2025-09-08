#include "personadaofile.h"
#include <fstream>
#include <string.h>
#include <stdio.h>

PersonaDaoFile::PersonaDaoFile()
{

}

std::vector<Persona> PersonaDaoFile::leerTodo()
{
    std::vector<Contacto> contactos;
    std::vector<Persona> personas;

    std::ifstream archiContacto("contacto.dat",
                        std::ios::binary | std::ios::app);
    if (archiContacto.is_open()) {
        strContacto c;
        while (archiContacto.read((char*)&c,
                                  sizeof(strContacto))) {
            Contacto unContacto(c.tipo, c.valor);
            unContacto.setId_persona(c.id_persona);
            contactos.push_back(unContacto);
        }
        archiContacto.close();
    }

    std::ifstream archi("persona.dat",
                        std::ios::binary | std::ios::app);
    if (archi.is_open()) {
        strPersona p;
        while(archi.read((char *)&p, sizeof(strPersona))) {
            Persona unaPersona(p.nombre);
            unaPersona.setDir(p.dir);
            unaPersona.setId(p.id);
            for (int i = 0; i < contactos.size(); i++) {
                if (p.id == contactos[i].getId_persona()) {
                    unaPersona.addContacto(contactos[i]);
                }
            }
            personas.push_back(unaPersona);
        }
        archi.close();
    }
    return personas;
}

bool PersonaDaoFile::guardar(Persona persona)
{
    std::ofstream archi("persona.dat",
                        std::ios::binary | std::ios::app);
    if (archi.is_open()) {
        strPersona p;
        p.id = persona.getId();
        strcpy(p.nombre, persona.getNombre());
        strcpy(p.dir, persona.getDir());
        archi.write((char*)&p, sizeof(strPersona));
        archi.close();

        std::ofstream archiContacto("contacto.dat",
                            std::ios::binary | std::ios::app);
        if (archiContacto.is_open()) {
            for(size_t i = 0; i < persona.getContactos().size(); i++) {
                strContacto c;
                c.id_persona = p.id;
                strcpy(c.tipo, persona.getContactos()[i].getTipo());
                strcpy(c.valor, persona.getContactos()[i].getValor());
                archiContacto.write((char*)&c, sizeof(strContacto));
            }
            archiContacto.close();
        } else {
            return false;
        }
    } else {
        return false;
    }
}

void PersonaDaoFile::generarDatosDeEjemplo()
{
    Persona juan("juan");
    juan.setDir("dir de juan");
    Contacto contactoJuanEmail("email", "juan@algo");
    Contacto contactoJuanTel("tel", "12321236565465");
    juan.addContacto(contactoJuanEmail);
    juan.addContacto(contactoJuanTel);
    this->guardar(juan);

    Persona nico("Nico");
    nico.setDir("dir de nico");
    Contacto contactoNicoEmail("email", "nico@algo");
    Contacto contactoNicoTel("tel", "6565465");
    nico.addContacto(contactoNicoEmail);
    nico.addContacto(contactoNicoTel);
    this->guardar(nico);
}

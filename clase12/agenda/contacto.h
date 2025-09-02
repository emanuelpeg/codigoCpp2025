#ifndef CONTACTO_H
#define CONTACTO_H


class Contacto
{
private:
    int id_persona;
    char * tipo;
    char * valor;
public:
    Contacto(char * tipo,
             char * valor);
    char *getTipo() const;
    void setTipo(char *newTipo);
    char *getValor() const;
    void setValor(char *newValor);
    int getId_persona() const;
    void setId_persona(int newId_persona);
};

#endif // CONTACTO_H

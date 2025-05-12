
#include <ostream>

#ifndef ARBOL_H
#define ARBOL_H


class Arbol
{
private:
    int dato;
    Arbol * izq = nullptr;
    Arbol * der = nullptr;
public:
    Arbol(int dato);
    void agregar(int dato);
    bool existe(int dato);
    friend std::ostream& operator<<(std::ostream& os, const Arbol& obj);

};

#endif // ARBOL_H

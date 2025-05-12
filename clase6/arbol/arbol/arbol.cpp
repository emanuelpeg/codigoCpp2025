#include "arbol.h"

Arbol::Arbol(int dato)
{
    this->dato = dato;
}

void Arbol::agregar(int dato)
{
    if (dato < this->dato) {
        if (this->izq == nullptr) {
            this->izq = new Arbol(dato);
        } else {
            this->izq->agregar(dato);
        }
    } else{
        if (this->der == nullptr) {
            this->der = new Arbol(dato);
        } else {
            this->der->agregar(dato);
        }
    }
}

bool Arbol::existe(int dato)
{
    if (this->dato == dato) {
        return true;
    } else {
        if (dato < this->dato) {
            if (this->izq != nullptr) {
                return this->izq->existe(dato);
            }
        } else {
            if (this->der != nullptr) {
                return this->der->existe(dato);
            }
        }
    }
    return false;
}

std::ostream& operator<<(std::ostream& os, const Arbol& obj){
    if (obj.izq != nullptr) {
        os << *obj.izq << " ,";
    }
    os << obj.dato;
    if (obj.der != nullptr) {
        os << " ," << *obj.der;
    }
    return os;
}

#include "arbolito.h"



Arbolito::Arbolito(int dato)
{
    this->dato = dato;
}

void Arbolito::add(int dato)
{
    if (this->dato > dato) {
        if (this->derecho == nullptr) {
            this->derecho = new Arbolito(dato);
        } else {
            this->derecho->add(dato);
        }
    }

    if (this->dato < dato) {
        if (this->izquierdo == nullptr) {
            this->izquierdo = new Arbolito(dato);
        } else {
            this->izquierdo->add(dato);
        }
    }
}

bool Arbolito::exist(int dato)
{
    if (this->dato == dato) {
        return true;
    }

    if (this->dato > dato) {
        if (this->derecho == nullptr) {
            return false;
        } else {
            return this->derecho->exist(dato);
        }
    }


    if (this->dato < dato) {
        if (this->izquierdo == nullptr) {
            return false;
        } else {
            return this->izquierdo->exist(dato);
        }
    }
}

std::ostream& operator<<(std::ostream& os,
                         const Arbolito& obj) {
    if (obj.derecho != nullptr) {
        os << *(obj.derecho);
    }

    os << obj.dato << " ";

    if (obj.izquierdo != nullptr) {
        os << *(obj.izquierdo);
    }
    return os;
}

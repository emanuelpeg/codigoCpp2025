#include "box.h"

template<class T>
Box<T>::Box()
{

}

template<class T>
Box<T>::Box(T *nro)
{
    this->nro = nro;
}

template<class T>
bool Box<T>::isEmpty()
{
    return this->nro == nullptr;
}

template<class T>
T Box<T>::getNro()
{
    return *this->nro;
}

template<class T>
Box<T> Box<T>::operator+(Box<T> otherBox)
{
    if (this->isEmpty()) {
        return otherBox;
    }
    if (otherBox.isEmpty()) {
        return *this;
    }

    T newNro = this->getNro() + otherBox.getNro();
    return Box(&newNro);
}

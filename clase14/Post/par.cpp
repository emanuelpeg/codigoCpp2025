#include "par.h"

template<class T, class W>
T Par<T, W>::getUnValor()
{
    return unValor;
}

template<class T, class W>
void Par<T, W>::setUnValor(T newUnValor)
{
    unValor = newUnValor;
}
template<class T, class W>
W Par<T, W>::getOtroValor()
{
    return otroValor;
}

template<class T, class W>
void Par<T, W>::setOtroValor(W newOtroValor)
{
    otroValor = newOtroValor;
}

template<class T, class W>
bool Par<T, W>::igual(Par a)
{
    return this->getUnValor() == a.getUnValor() &&
            this->getOtroValor() == a.getOtroValor();
}

template<class T, class W>
Par<T, W>::Par()
{

}

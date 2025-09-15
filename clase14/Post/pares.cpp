#include "pares.h"
#include <algorithm>

template<class T, class W>
Pares<T, W>::Pares()
{

}

template<class T, class W>
void Pares<T, W>::agregar(T a, W b)
{
    Par<T,W> p;
    p.setUnValor(a);
    p.setOtroValor(b);
    this->pares.push_back(p);
}

template<class T, class W>
void Pares<T, W>::remover(T a, W b)
{
    Par<T,W> p;
    p.setUnValor(a);
    p.setOtroValor(b);
    std::vector<Par<T,W>> aux;

    for (int i = 0; i < this->pares.size(); i++) {
        if (!p.igual(this->pares[i])) {
            aux.push_back(this->pares[i]);
        }
    }

    this->pares = aux;
}

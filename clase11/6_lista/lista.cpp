#include "lista.h"

template <class T>
Lista2Dir<T>::Lista2Dir()
{

}
// Insertar un elemento al final de la lista
template <class T>
void Lista2Dir<T>::insertar(const T& item) {
    this->items.push_back(item);
}

// Imprimir la lista desde el primer elemento hasta el último
template <class T>
void Lista2Dir<T>::printAde() const {
    for (auto it = items.begin(); it != items.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

// Imprimir la lista desde el último elemento hasta el primero
template <class T>
void Lista2Dir<T>::printDet() const {
    for (auto it = items.rbegin(); it != items.rend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}



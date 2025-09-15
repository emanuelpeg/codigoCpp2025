#ifndef PARES_H
#define PARES_H
#include <vector>
#include "par.cpp"

template<class T, class W>
class Pares
{
private:
    std::vector<Par<T,W>> pares;

public:
    Pares();
    void agregar(T a, W b);
    void remover(T a, W b);
};

#endif // PARES_H

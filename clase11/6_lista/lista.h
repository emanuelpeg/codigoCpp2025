#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include <vector>

template <class T>
class Lista2Dir
{
private:
    std::vector<T> items;
public:
    Lista2Dir();
    //void add()
    void insertar(const T &item);
    void printAde() const;
    void printDet() const;
};

#endif // LISTA_H


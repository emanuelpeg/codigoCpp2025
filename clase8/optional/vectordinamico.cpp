#include "vectordinamico.h"

template<class T>
int VectorDinamico<T>::getSize() const
{
    return size;
}

template<class T>
VectorDinamico<T>::VectorDinamico()
{

}

template<class T>
void VectorDinamico<T>::add(T data)
{
    if (size >= cap) {
        cap = cap + 10;
        T * aux = new T[cap];
        for (int i = 0; i < size; i++) {
            aux[i] = datas[i];
        }
        aux[size] = data;
        size++;
        delete [] datas;
        datas = aux;
    } else {
        datas[size] = data;
        size++;
    }
}

template<class T>
T VectorDinamico<T>::get(int i)
{
    return this->datas[i];
}

#include "vectordinamico.h"

int VectorDinamico::getCant() const
{
    return cant;
}

void VectorDinamico::add(int dato)
{
    int * aux = new int[this->cant+1];
    for(int i = 0; i < this->cant; i++){
        aux[i] = this->vec[i];
    }
    aux[this->cant] = dato;
    delete [] this->vec;
    this->vec = aux;
    this->cant++;
}

void VectorDinamico::remove(int index)
{
    if (this->cant < index) {
        return;
    }

    int * aux = new int[this->cant-1];
    int j = 0;
    for(int i = 0; i < this->cant; i++){
        if (i != index) {
            aux[j] = this->vec[i];
            j++;
        }
    }
    delete [] this->vec;
    this->vec = aux;
    this->cant--;
}

int VectorDinamico::get(int index)
{
    return this->vec[index];
}

double VectorDinamico::promedio()
{
    double acu = 0;
    for(int i = 0; i < this->cant; i++){
        acu += this->vec[i];
    }
    return acu / this->cant;
}

int VectorDinamico::mayor()
{
    int m = vec[0];
    for(int i = 1; i < this->cant; i++){
        if (m < vec[i]) {
            m = vec[i];
        }
    }
    return m;
}

int VectorDinamico::menor()
{
    int m = vec[0];
    for(int i = 1; i < this->cant; i++){
        if (m > vec[i]) {
            m = vec[i];
        }
    }
    return m;
}

VectorDinamico::VectorDinamico()
{

}

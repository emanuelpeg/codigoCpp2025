#ifndef VECTORDINAMICO_H
#define VECTORDINAMICO_H


class VectorDinamico
{
private:
    int cant = 0;
    int * vec = nullptr;
public:
    VectorDinamico();
    int getCant() const; //punto a
    void add(int dato); //punto b
    void remove(int index); //punto c
    int get(int index);
    double promedio(); //punto d
    int mayor();
    int menor();
};

#endif // VECTORDINAMICO_H

#ifndef VECTORDINAMICO_H
#define VECTORDINAMICO_H

template<class T>
class VectorDinamico
{
private:
    int cap = 0;
    int size = 0;
    T* datas = nullptr;
public:
    VectorDinamico();
    void add(T data);
    T get(int i);
    int getSize() const;
};

#endif // VECTORDINAMICO_H

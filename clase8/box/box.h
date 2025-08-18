#ifndef BOX_H
#define BOX_H

template<class T>
class Box
{
private:
    T * nro = nullptr;

public:
    Box();
    Box(T * nro);
    bool isEmpty();
    T getNro();
    Box operator+(Box otherBox);
};

#endif // BOX_H

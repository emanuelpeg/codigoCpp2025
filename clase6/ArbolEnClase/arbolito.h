#ifndef ARBOLITO_H
#define ARBOLITO_H
#include <iostream>

class Arbolito
{
private:
    int dato;
    Arbolito* izquierdo = nullptr;
    Arbolito* derecho = nullptr;
public:
    Arbolito(int dato);
    void add(int dato);
    bool exist(int dato);

    friend std::ostream& operator<<(std::ostream& os,
                                    const Arbolito& obj);
};

#endif // ARBOLITO_H

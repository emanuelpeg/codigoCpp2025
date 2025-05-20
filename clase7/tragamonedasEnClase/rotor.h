#ifndef ROTOR_H
#define ROTOR_H


class Rotor
{
private:
    int cant;
    int indice = 0;
    int * elementos;
public:
    Rotor(int cant);
    int next();
};

#endif // ROTOR_H

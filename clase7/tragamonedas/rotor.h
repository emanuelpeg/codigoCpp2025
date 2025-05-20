#ifndef ROTOR_H
#define ROTOR_H


class Rotor
{
private:
    int count, index;
    int * values = nullptr;
public:
    Rotor();
    void add(int value);
    int next();
};

#endif // ROTOR_H

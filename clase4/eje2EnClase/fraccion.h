#ifndef FRACCION_H
#define FRACCION_H


class Fraccion
{
private:
    int num;
    int deno = 1;
public:
    Fraccion(int num);
    Fraccion(int num, int deno);

    int getNum() const;
    int getDeno() const;

    Fraccion suma(Fraccion otraFraccion);
    Fraccion resta(Fraccion otraFraccion);
    Fraccion multi(Fraccion otraFraccion);
    Fraccion div(Fraccion otraFraccion);

    void simplificar();
};

#endif // FRACCION_H

#ifndef JUEGO_H
#define JUEGO_H


class Juego
{
private:
    int opUs = -1;
    int opIA = -1;
public:
    Juego();
    int verificar();
    int generarIA();
    void elegir(int opUs);
    int getOpUs() const;
    int getOpIA() const;
};

#endif // JUEGO_H

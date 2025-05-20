#ifndef TIEMPO_H
#define TIEMPO_H


class Tiempo
{
private:
    int hora, min, seg, dseg, cseg, mseg;
public:
    Tiempo();
    void incrementar();
    void reiniciar();

    int getHora() const;
    int getMseg() const;
    int getMin() const;
    int getSeg() const;
    int getDseg() const;
    int getCseg() const;
};

#endif // TIEMPO_H

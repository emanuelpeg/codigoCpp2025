#ifndef SERIE_H
#define SERIE_H


class Serie
{
protected:
    int nros[4];
public:
    Serie();
    void virtual generar() = 0;
    int *getNros();
};

#endif // SERIE_H

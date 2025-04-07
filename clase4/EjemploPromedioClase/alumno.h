#ifndef ALUMNO_H
#define ALUMNO_H


class Alumno
{
private:
    int dni;
    int nota1, nota2, nota3;
    char * nombre;
public:
    Alumno(int dni, char * nombre);
    double promedio();
    void setNota1(int nota);
    void setNota2(int nota);
    void setNota3(int nota);
    int getDni();

};

#endif // ALUMNO_H

#ifndef ALUMNO_H
#define ALUMNO_H


class Alumno
{
private:
    int dni = 0;
    char* nombre;
    int nota1;
    int nota2;
public:
    Alumno(int dni);

    int getDni() const;
    char *getNombre() const;
    void setNombre(char *newNombre);
    int getNota1() const;
    void setNota1(int newNota1);
    int getNota2() const;
    void setNota2(int newNota2);

    double promedio();
};

#endif // ALUMNO_H

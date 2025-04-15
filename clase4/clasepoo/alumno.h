#ifndef ALUMNO_H
#define ALUMNO_H


class Alumno
{
private:
    int dni = 0;
    const char* nombre;
    int nota1;
    int nota2;
public:
    Alumno();
    Alumno(int dni);
    Alumno(const Alumno &a);
    int getDni() const;
    const char *getNombre();
    void setNombre(const char *newNombre);
    int getNota1() const;
    void setNota1(int newNota1);
    int getNota2() const;
    void setNota2(int newNota2);

    double promedio();
    ~Alumno();
};

#endif // ALUMNO_H

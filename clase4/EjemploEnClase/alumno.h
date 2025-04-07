#ifndef ALUMNO_H
#define ALUMNO_H


class Alumno
{
private:
    long dni;
    char * nombre;
    int notas[3];
public:
    Alumno(long dni);
    Alumno(long dni, char* nombre);
    Alumno(Alumno &a);
    long getDni() const;
    char *getNombre() const;
    void setNombre(char *newNombre);
    int getNota1() const;
    void setNota1(int newNota1);
    int getNota2() const;
    void setNota2(int newNota2);
    int getNota3() const;
    void setNota3(int newNota3);
    double promedio();
};

#endif // ALUMNO_H

#ifndef TAREA_H
#define TAREA_H

struct TareaStr
{
    char descripcion [200];
    char fecha [8]; // formato yyyymmdd
    char hora [6];  // formato hhmmss
    int duracion; // en minutos
    char tipo; //N, R, A
};

class Tarea
{
protected:
    char* descripcion;
    char* fecha; // formato yyyymmdd
    char* hora ;  // formato hhmmss
    int duracion; // en minutos
public:
    Tarea();
    virtual char getTipo() = 0;
    virtual void notificar() = 0;
    void setStr(TareaStr str);

    int getDuracion() const;
    void setDuracion(int newDuracion);
    char *getHora() const;
    void setHora(char *newHora);
    char *getFecha() const;
    void setFecha(char *newFecha);
    char *getDescripcion() const;
    void setDescripcion(char *newDescripcion);
    TareaStr getStr();
};

#endif // TAREA_H

#ifndef GESTOR_H
#define GESTOR_H
#include <vector>
#include <map>
#include "empleado.h"

class Gestor
{
private:
    std::vector<Empleado> empleados;

    std::map<Empleado,int> acumulaHsXEmpleado;
    std::multimap<int, Empleado> empleadosXHs;
    bool comparaEmpleados(const Empleado& a, const Empleado& b);
    std::map<Empleado,int> dniRepetidos;

public:
    Gestor();
    void agregar(Empleado emp);
    int getSize();
    void agregaHsEmpleado(Empleado e, int hs);

    //std::vector<Empleado> min();
    //std::vector<Empleado> ordenaFive();

    std::map<Empleado,int> getAcumulaHsXEmpleado();
    std::map<char*,int> getDuplicados();
    std::vector<Empleado> empMaxHs(int &maxHs);
    std::vector<Empleado> empMinHs(int &minHs);
   //std::multimap<int, Empleado>
    void getTOPFive();
    void getDniRepetidos();

};

#endif // GESTOR_H

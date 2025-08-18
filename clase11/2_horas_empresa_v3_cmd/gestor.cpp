#include "gestor.h"
#include <algorithm>
#include <cstring>
#include <limits>
#include <iostream>

Gestor::Gestor()
{
}

void Gestor::agregar(Empleado emp){
    this->empleados.push_back(emp);
    this->dniRepetidos[emp] ++;
}

int Gestor::getSize()
{
    return this->empleados.size();
}

void Gestor::agregaHsEmpleado(Empleado e, int hs)
{
    char dni[8];
    std::strcpy(dni,e.getDni());
    this->acumulaHsXEmpleado[e] += hs;
    this->empleadosXHs.insert({this->acumulaHsXEmpleado[e],e});
}

std::map<Empleado, int> Gestor::getAcumulaHsXEmpleado()
{
    std::cout <<"Tamanio mapa: " << this->acumulaHsXEmpleado.size()<< std::endl;
    for (const auto& emples: this->acumulaHsXEmpleado){
        std::cout << "DNI: "<< emples.first.getDni() << " " << emples.second << std::endl;
    }
}

std::vector<Empleado> Gestor::empMaxHs(int &maxHs)
{

    std::vector<Empleado> empleadosMasHoras;
    for (const auto& emples: this->acumulaHsXEmpleado){
        if(emples.second>maxHs)
        {
            maxHs = emples.second;
            empleadosMasHoras.clear();
            empleadosMasHoras.push_back(emples.first);
        } else if (emples.second==maxHs )
                    empleadosMasHoras.push_back(emples.first);
    }
    return empleadosMasHoras;
};

std::vector<Empleado> Gestor::empMinHs(int &hsMin)
{
    std::vector<Empleado> empleadosMinHoras;
    for (const auto& emples: this->acumulaHsXEmpleado){
        if(emples.second<hsMin)
        {
            hsMin = emples.second;
            empleadosMinHoras.clear();
            empleadosMinHoras.push_back(emples.first);
        } else if (emples.second==hsMin )
                    empleadosMinHoras.push_back(emples.first);
    }
    return empleadosMinHoras;
}


void  Gestor::getTOPFive()
{
    int dame5=5;
    auto it= this->empleadosXHs.rbegin();
    for (int i = 0; i < dame5 && it != empleadosXHs.rend(); ++i, ++it)
    {
        std::cout << "DNI: "<< it->second.getDni() << " " << it->first << std::endl;
    }
}

void Gestor::getDniRepetidos()
{
    //std::cout <<"Empleados con DNI repetidos " << this->dniRepetidos.size() << std::endl;
    for (const auto& dnis: this->dniRepetidos){
        std::cout<<dnis.first.getDni()<<std::endl;
        if (dnis.second > 1)
        {
            std::cout << "DNI: "<< dnis.first.getDni() << " Hs: " << dnis.second << std::endl;
        }

    }
}


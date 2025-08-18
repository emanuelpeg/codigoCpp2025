#include <iostream>
#include "gestor.h"

using namespace std;

int main()
{
    cout << "Inicio: Gestor" << endl;
    Gestor* ges=new Gestor();
    cout << "Emp 1" << endl;
    Empleado e1("12345");
    ges->agregaHsEmpleado(e1, 25);
    ges->agregaHsEmpleado(e1, 15);

    cout << "Emp 2" << endl;
    Empleado e2("67890");
    ges->agregaHsEmpleado(e2, 5);
    ges->agregaHsEmpleado(e2, 15);

    ges->agregar(e1);
    ges->agregar(e2);

    cout << "Emp 3" << endl;
    Empleado e3("999999");
    ges->agregaHsEmpleado(e3, 20);

    cout << "Emp 4" << endl;
    Empleado e4("888888");
    ges->agregaHsEmpleado(e4, 5);

    cout << "Emp 5" << endl;
    Empleado e5("77777");
    ges->agregaHsEmpleado(e5, 7);

    cout << "Emp 6" << endl;
    Empleado e6("666666");
    ges->agregaHsEmpleado(e6, 10);

    cout << "Emp 7" << endl;
    Empleado e66("7777777");
    ges->agregaHsEmpleado(e66, 5);


    ges->getAcumulaHsXEmpleado();

    int maxHs = 0;
    int minHs = 10*5*4; //10hs diarias * 5 dias * 4 semanas

    cout << "Maximo/s " << endl;
    for(auto& emp : ges->empMaxHs(maxHs))
           cout <<emp.getDni() << " " <<maxHs << endl;
    cout << endl;
    cout << "Minimo/s " << endl;
    for(auto& emp : ges->empMinHs(minHs))
           cout <<emp.getDni() << " " <<minHs << endl;
    cout << endl;
    cout << "Top 5 de personas/s " << endl;
    ges->getTOPFive();
    cout << endl;
    cout << "DNIs Repetidos " << endl;
    ges->getDniRepetidos();
    cout << endl;
    return 0;
}

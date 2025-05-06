#include "alumno.h"
#include "cursos.h"


#include "planinicial.h"
#include "planmedio.h"
#include "planpremium.h"
#include <iostream>

using namespace std;

int main()
{
    // Crear instancias de planes
    cout << "Crear instancias de planes"<<endl;
        PlanInicial* pi = new PlanInicial();
        PlanMedio *pm = new PlanMedio();
        PlanPremium *pp= new PlanPremium();
    cout << "Crear alumnos con distintos planes"<<endl;
        // Crear alumnos con distintos planes
        Alumno a1(1111111, pi);
        a1.agregarNota(65);  // PlanInicial (nota única)

        Alumno a2 (2222222, pm);
        a2.agregarNota(75);
        a2.agregarNota(70);
        a2.agregarNota(80);  // PlanMedio (3 notas)

        Alumno a3(3333333,pp);
        a3.agregarNota(85);
        a3.agregarNota(90);
        a3.agregarNota(88);
        a3.agregarNota(87);
        a3.agregarNota(89);  // PlanPremium (5 notas >70 y promedio >80)

        Alumno a4 (4444444, pp);
        a4.agregarNota(70);  // uno bajo
        a4.agregarNota(75);
        a4.agregarNota(85);
        a4.agregarNota(90);
        a4.agregarNota(95);  // No cumple PlanPremium*/

        // Crear curso y agregar alumnos
        cout << "Crear curso "<<endl;
        Cursos curso;
        cout << "agregar alumnos al curso "<<endl;
        curso.agregarAlumno(a1);
        curso.agregarAlumno(a2);
        curso.agregarAlumno(a3);
        curso.agregarAlumno(a4);

        // Mostrar alumnos que aprobaron
        curso.imprimirAlumnos();

        // Va a cambiar de plan

        std::cout << "Aprobado con PlanInicial: " << (a1.aprobo() ? "Si" : "No") << "\n";

        // Cambio de plan
        a1.cambiarPlan(pm);
        a1.agregarNota(15);
        a1.agregarNota(0);
        a1.agregarNota(15);
        std::cout << "Aprobado con PlanMedio: " << (a1.aprobo() ? "Si" : "No") << "\n";
        // Mostrar alumnos que aprobaron
        curso.imprimirAlumnos();
        return 0;

}

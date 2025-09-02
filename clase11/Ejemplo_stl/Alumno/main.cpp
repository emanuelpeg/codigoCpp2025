#include <iostream>
#include "curso.h"
#include "alumno.h"
#include <algorithm>

using namespace std;

int main()
{
    Alumno unAlumno(87987,"Juan");
    unAlumno.addNota(50);
    unAlumno.addNota(40);
    Alumno otroAlumno(97987,"Pedro");
    otroAlumno.addNota(80);
    otroAlumno.addNota(90);
    Alumno otroAlumno2(87947,"Ana");
    otroAlumno2.addNota(80);
    otroAlumno2.addNota(85);

    Alumno otroAlumno5(87945,"Hana");
    otroAlumno5.addNota(80);
    otroAlumno5.addNota(85);

    Alumno otroAlumno3(87947,"Ivan");
    otroAlumno3.addNota(20);
    otroAlumno3.addNota(15);

    Curso curso;
    curso.addAlumno(unAlumno);
    curso.addAlumno(otroAlumno);
    curso.addAlumno(otroAlumno2);
    curso.addAlumno(otroAlumno3);
    curso.addAlumno(otroAlumno5);

    vector<Alumno> aprobados = curso.aprobados();

    std::for_each(aprobados.begin(), aprobados.end(),
            [](Alumno n) {
                std::cout << n.getNombre() << " ";
            }
        );

    std::cout << endl;
    int i = 0;
    for (auto n : aprobados) {
        std::cout<< i << " " << n.getNombre() << " ";
        i++;
    }

    std::cout << endl << curso.promedioGeneral() << endl;

    curso.alumnosPorPromedio();

    for(auto a : curso.getAlumnos()) {
        cout << a.getDni() << " " << a.getNombre() << " "
             << a.promedio() << endl;
    }

    auto fx = []() {
        std::cout << " Hola ";
    };
    fx();
    return 0;
}

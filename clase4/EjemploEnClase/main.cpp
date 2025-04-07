#include <iostream>
#include "alumno.h"

using namespace std;

int main()
{
    Alumno unAlumno(59666322, "Juan");
    unAlumno.setNota1(50);
    unAlumno.setNota2(60);
    unAlumno.setNota3(70);

    Alumno otroAlumno(59666325);
    otroAlumno.setNombre("Pedro");
    otroAlumno.setNota1(100);
    otroAlumno.setNota2(60);
    otroAlumno.setNota3(80);

    cout << unAlumno.getNombre() << "  " << unAlumno.promedio()
         << endl;
    cout << otroAlumno.getNombre() << "  " << otroAlumno.promedio()
         << endl;

    auto otroOtroAlumno = unAlumno;
    otroOtroAlumno.setNombre("Pepe");
    cout << otroOtroAlumno.getNombre() << "  " << otroOtroAlumno.promedio()
         << endl;

    return 0;
}

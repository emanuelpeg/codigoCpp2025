#include <iostream>
#include "alumno.h"

using namespace std;

int main()
{
    Alumno unAlumno(79878787);
    unAlumno.setNombre("Juan");
    unAlumno.setNota1(60);
    unAlumno.setNota2(70);

    Alumno* punteroAlumno = new Alumno(787984411);
    punteroAlumno->setNombre("Juan Puntero");
    punteroAlumno->setNota1(90);
    punteroAlumno->setNota2(70);

    cout << unAlumno.getNombre() << " " << unAlumno.promedio() << endl;
    cout << punteroAlumno->getNombre() << " " << punteroAlumno->promedio() << endl;
    return 0;
}

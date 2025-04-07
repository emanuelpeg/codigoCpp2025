#include <iostream>
#include "alumno.h"

using namespace std;

int main()
{
    Alumno unAlumno(45000000, "Juan");
    unAlumno.setNota1(60);
    unAlumno.setNota2(80);
    unAlumno.setNota3(50);

    Alumno otroAlumno(45000001, "Pedro");
    otroAlumno.setNota1(50);
    otroAlumno.setNota2(50);
    otroAlumno.setNota3(50);



    cout << unAlumno.getDni() << " " << unAlumno.promedio() << endl;
    cout << otroAlumno.getDni() << " " << otroAlumno.promedio() << endl;
    return 0;
}

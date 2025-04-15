#include <iostream>
#include "alumno.h"
#include "curso.h"
#include <string.h>

using namespace std;

int main()
{
    Alumno unAlumno(79878787);
    unAlumno.setNombre("Juan");
    unAlumno.setNota1(60);
    unAlumno.setNota2(70);

    Alumno otroAlumno = unAlumno;
    otroAlumno.setNombre("Jose");
    otroAlumno.setNota1(90);

    Curso poo("Poo");
    poo.add(unAlumno);
    poo.add(otroAlumno);

    cout << unAlumno.getNombre() << " " << unAlumno.promedio() << endl;
    cout << otroAlumno.getNombre() << " " << otroAlumno.promedio() << endl;

    cout << "El promedio general " << poo.promedio() << endl;
    return 0;
}


/*Alumno unAlumno(79878787);
char nom[] = {'J', 'u', 'a', 'n', '\0'};
unAlumno.setNombre(nom);
unAlumno.setNota1(60);
unAlumno.setNota2(70);

Alumno otroAlumno = unAlumno;
char * nombre = otroAlumno.getNombre();
*nombre = 'j';
otroAlumno.setNota1(90);

cout << unAlumno.getNombre() << " " << unAlumno.promedio() << endl;
cout << otroAlumno.getNombre() << " " << otroAlumno.promedio() << endl;*/
/* if (true) {
    Alumno a(79878787);
    char* nom = "Juan";
    char * nom2 = new char(strlen(nom));
    strcpy(nom2, nom);
    a.setNombre(nom);

    if (true) {
        char* nom3 = "Jose";
        char * nom4 = new char(strlen(nom3));
        strcpy(nom4, nom3);
        Alumno b(a);
        b.setNombre(nom4);
     }
}*/

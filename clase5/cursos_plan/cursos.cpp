#include "cursos.h"

Cursos::Cursos()
{
    alumnos = nullptr;
    cant = 0;
}
void Cursos::agregarAlumno(Alumno a) {
   // alumnos.push_back(a);
    /*
   Alumno ** aux = new Alumno*[cant+1];
   for (int i=0; i<cant; i++)
   {
       aux[i] = alumnos[i];
   }
   aux[cant] = &a;
   cant++;
   alumnos = aux;
   */
    Alumno** aux = new Alumno*[cant + 1];
       for (int i = 0; i < cant; ++i) {
           aux[i] = alumnos[i];
       }
       aux[cant] = new Alumno(a); // ← copiar dinámicamente el Alumno
       delete[] alumnos;          // liberar el arreglo viejo
       alumnos = aux;
       cant++;
}

void Cursos::imprimirAlumnos() const {
    /*
    for (const auto& a : alumnos) {
        std::cout << "DNI: " << a.getDNI();
        if (a.aprobo()) {
            std::cout << " - Aprobado\n";
        } else {
             std::cout << " - No aprobado\n";
        }
    }*/
    for (int i=0; i<cant; i++)
    {
         std::cout << "DNI: " <<  alumnos[i]->getDNI();
         if (alumnos[i]->aprobo()) {
             std::cout << " - Aprobado\n";
         } else {
              std::cout << " - No aprobado\n";
         }
    }
}

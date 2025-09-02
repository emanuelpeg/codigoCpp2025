#include <iostream>
#include <alumno.h>
#include <algorithm>
#include <numeric>
#include <map>
#include <fstream>

using namespace std;

std::vector<Alumno> getAlumnosExample() {
    std::vector<Alumno> alumnos;

    Alumno alumno1;
    alumno1.setNombre("Pedro");
    alumno1.getNotas().push_back(70);
    alumno1.getNotas().push_back(50);
    alumno1.getNotas().push_back(60);

    alumnos.push_back(alumno1);

    Alumno alumno2;
    alumno2.setNombre("Juan");
    alumno2.getNotas().push_back(70);
    alumno2.getNotas().push_back(80);
    alumno2.getNotas().push_back(70);

    alumnos.push_back(alumno2);

    Alumno alumno3;
    alumno3.setNombre("Andres");
    alumno3.getNotas().push_back(30);
    alumno3.getNotas().push_back(30);
    alumno3.getNotas().push_back(40);

    alumnos.push_back(alumno3);

    return alumnos;
}

double pasarNotas(Alumno alumno) {
    return alumno.promedio();
}

void example1() {
    std::vector<Alumno> alumnos = getAlumnosExample();
    std::vector<double> notas;
    transform(alumnos.begin(), alumnos.end(),
              std::back_inserter(notas), pasarNotas);

    std::for_each(notas.begin(), notas.end(), [&] (int n) {
         cout << n << endl;
     });
    double promedioGeneral = std::accumulate(notas.begin(), notas.end(), 0)
            / (notas.size() * 1.0);
    cout << "Promedio general: " << promedioGeneral<<endl;
}

void example2() {
    cout << "Aprobaron " << endl;
    int notaAprobar = 60;
    std::vector<Alumno> alumnos = getAlumnosExample();
    std::vector<Alumno> aprobaron;
    std::copy_if (alumnos.begin(), alumnos.end(), std::back_inserter(aprobaron),
                  [notaAprobar](Alumno a){return a.promedio()>=notaAprobar;} );

    std::for_each(aprobaron.begin(), aprobaron.end(), [&] (Alumno n) {
         cout << n.getNombre() << " : " << n.promedio() << endl;
     });
}

void example3() {
    cout << "Ordenados " << endl;
    std::vector<Alumno> alumnos = getAlumnosExample();

    std::sort (alumnos.begin(), alumnos.end(),
                  [](Alumno a, Alumno b){return a.promedio()<=b.promedio();} );

    std::for_each(alumnos.begin(), alumnos.end(), [&] (Alumno n) {
         cout << n.getNombre() << " : " << n.promedio() << endl;
     });
}


const string path = "/home/emanuel/Facultad/programacion_orientada_objeto/2023/codigoCpp2023/stlExample/main.cpp";

void example4() {
    std::map<string, int> counter;

    ifstream input;
    input.open( path.c_str() );

    if ( !input )
    {
        cout << "Error in opening file Hamlet.txt\n";
        return;
    }

    string tok;
    while ( true )
    {
        input >> tok;

        if ( input )
        {
            counter[tok]++;
        }
        else break;
    }

    input.close();

    std::vector<pair<string, int>> words;

    for (auto it  = counter.begin();
          it != counter.end();
          it++ )
    {
       /* cout << it->first
             << ", "
             << (*it).second
             << endl;*/
        words.push_back(make_pair(it->first, (*it).second));
    }

    cout << " Ordenado "
         << endl;

    std::vector<pair<string, int>> wordsLarge;

    std::copy_if(words.begin(), words.end(), std::back_inserter(wordsLarge),
                 [](pair<string, int> a) { return a.first.size() > 2; });

    sort(wordsLarge.begin(), wordsLarge.end(),
         [](pair<string, int> a, pair<string, int> b) {
        return a.second >= b.second; });

    std::for_each(wordsLarge.begin(), wordsLarge.end(), [&] (pair<string, int> n) {
         cout << n.first  << " : " << n.second << endl;
     });
}

int main()
{
/*    example1();
    example2();
    example3();*/
    example4();
    return 0;
}


#include <iostream>
#include "fraccion.h"

using namespace std;

int main()
{
    Fraccion f = Fraccion(55, 10);
    double d = f.mostrarFraccion();
    cout << d << endl;
    cout << f << " le sumamos " << Fraccion(3)
         << " = " << (f + Fraccion(3)).toString() << endl;
    cout << f << " le resta " << Fraccion(3)
         << " = " << (f - Fraccion(3)) << endl;
    cout << f << " le multiplicar " << Fraccion(1,2)
         << " = " << (f * Fraccion(1,2)) << endl;
    cout << f << " suma 1 ";
    ++f;
    cout << f << endl;

    if (f == Fraccion(11,2)) {
        cout << f << " es igual a  " << Fraccion(11,2) << endl;
    }

    auto otraF = f;

    cout << &otraF << " " << &f <<endl;
    return 0;
}


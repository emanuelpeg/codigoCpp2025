#include <iostream>
#include "animal.h"
#include "pato.h"
#include "perro.h"

using namespace std;

int main()
{
    Animal * a = new Perro();
    cout << a->sonido() << endl;
    delete a;
    a = new Pato();
    cout << a->sonido() << endl;

    return 0;
}

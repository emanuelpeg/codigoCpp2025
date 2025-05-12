#include <iostream>
#include "arbol.h"

using namespace std;

int main()
{
    Arbol arbol(5);
    arbol.agregar(3);
    arbol.agregar(4);
    arbol.agregar(2);
    arbol.agregar(8);
    arbol.agregar(9);
    cout << arbol.existe(2) <<endl;
    cout << arbol.existe(12) <<endl;
    cout << arbol <<endl;
}

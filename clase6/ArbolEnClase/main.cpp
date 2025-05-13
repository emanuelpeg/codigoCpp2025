#include <iostream>
#include "arbolito.h"
using namespace std;

int main()
{
    Arbolito raiz(4);
    raiz.add(5);
    raiz.add(8);
    raiz.add(9);
    raiz.add(7);
    raiz.add(2);
    raiz.add(3);
    cout << raiz << endl;
    cout << raiz.exist(8) << endl;
    cout << raiz.exist(6) << endl;
    return 0;
}

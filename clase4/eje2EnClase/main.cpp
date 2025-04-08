#include <iostream>
#include "fraccion.h"

using namespace std;

int main()
{
    Fraccion f(1,2);
    Fraccion otraF(1,3);
    Fraccion resu = f.suma(otraF);
    cout << resu.getNum() << " / " << resu.getDeno() << endl;
    return 0;
}

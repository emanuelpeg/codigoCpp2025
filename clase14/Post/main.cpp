#include <iostream>
#include "pares.cpp"

using namespace std;

int main()
{
    Pares<int, char> pares;
    pares.agregar(1,'a');
    pares.agregar(2,'b');
    pares.agregar(10,'x');
    pares.agregar(15,'a');
    pares.agregar(51,'c');

    pares.remover(10,'x');

    return 0;
}

#include <iostream>
#include "lista.cpp"
using namespace std;

int main()
{
    cout << "--------char--------" << endl;
    Lista2Dir<char> lis2;
    lis2.insertar('a');
    lis2.insertar('b');
    lis2.insertar('c');
    cout << "-----------------" << endl;
    lis2.printAde();
    cout <<  endl;
    lis2.printDet();
    cout << "-----------------" << endl;
    lis2.insertar('x');
    lis2.printAde();
    cout <<  endl;
    lis2.printDet();
    cout << "---Integer------" << endl;
    Lista2Dir<int> lis1;
    lis1.insertar(1);
    lis1.insertar(2);
    lis1.insertar(3);
    cout << "-----------------" << endl;
    lis1.printAde();
    cout <<  endl;
    lis1.printDet();
    cout << "-----------------" << endl;
    return 0;
}

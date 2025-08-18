#include <iostream>
#include <stdlib.h>
#include <vector>
#include "mapa.cpp"
#include "box.cpp"

using namespace std;

template<class T>
T mayor(vector<T> vec) {
    if (vec.empty()) {
        throw "No puede ser vacio";
    }
    T max = vec.front();
    for (int i = 1; i < vec.size(); i++) {
        if (max < vec[i]) {
            max = vec[i];
        }
    }
    return max;
}


int main()
{
    int a = 5;
    int b = 4;
    Box caja(&a);
    Box otraCaja(&b);

    cout << (caja + otraCaja).getNro() << endl;
    cout << (caja + Box<int>()).getNro() << endl;

    vector<int> ints;

    for (int i = 0; i < 100; i++) {
        auto nro = rand() %100;
        ints.push_back(nro);
    }

    cout << ints.size() << " " << ints.capacity()<<endl;

    for (int i = 0; i < 100; i++) {
        cout << ints[i] << ", ";
    }


    cout << endl << mayor(ints) << endl;

    ints.clear();
    try {
        cout << endl << mayor(ints) << endl;
    } catch (const char* e) {
        cout << endl << "Error: "<< e << endl;
    }

    cout << endl << "Hola" << endl;

    Mapa<int, char> m;
    m.puts(45, 'a');
    m.puts(25, 'a');
    m.puts(45, 'b');

    cout << m.get(45) << endl;
    try {
        cout << m.get(99) << endl;
    } catch (...) {
        cout << "Error no existe el " << 99 <<endl;
    }
     cout << "hola" << endl;
    return 0;
}

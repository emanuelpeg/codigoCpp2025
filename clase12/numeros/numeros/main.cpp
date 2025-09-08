#include <iostream>
#include <vector>
#include <stdlib.h>
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    vector<int> numeros(200);
    for(int i = 0; i<200; ++i) {
        numeros[i] = rand() % 900;
    }

    ofstream archivo("nro.dat",
                     ios::binary | ios::trunc);

    for(auto nro : numeros) {
        archivo.write((char *) &nro, sizeof(int));
    }

    archivo.close();

    ifstream inArchivo("nro.dat", ios::binary);
    int a;
    while(!inArchivo.eof()) {
        inArchivo.read((char*) &a, sizeof(int));
        cout << a << " ";
    }
    inArchivo.close();

    return 0;
}


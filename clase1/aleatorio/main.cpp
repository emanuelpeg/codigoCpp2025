#include <iostream>

using namespace std;

double promedio(int vec[], int cant) {
    int acu = 0;
    for(int i = 0; i< cant; i++) {
        acu += vec[i];
    }

    return acu / (double)cant;
}

int main()
{
    int cant = 0;
    cin >> cant;
    int * vec = new int[cant];

    for (int i = 0; i< cant; i++) {
        vec[i] = rand() % 100;
        cout << vec[i] << ",";
    }
    cout << endl;

    double pro = promedio(vec, cant);

    delete [] vec;
    cout << pro << endl;
    return 0;
}

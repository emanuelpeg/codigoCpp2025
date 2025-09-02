#include <iostream>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream myfile("ejemplo.txt");
    int cantCut = 3;
    int cant = 0;
    string line;
    while (getline(myfile,line)) {
       cant++;
    }
    myfile.close();
    ifstream myfile2("ejemplo.txt");

    if (cant < cantCut) {
        cout << "Error!!";
        return 0;
    }

    cant = cant / cantCut;

    ofstream myfileOf("example0.txt");
    int aux = 0;
    int nro = 1;
    while (getline(myfile2,line)) {
       myfileOf << line;
       myfileOf << endl;
       aux++;
       if (aux == cant) {
           aux = 0;
           myfileOf.close();
           myfileOf.open("example0"+to_string(nro)+".txt");
           nro++;
       }
    }

    if (myfileOf.is_open()) myfileOf.close();
    myfile.close();
    return 0;
}

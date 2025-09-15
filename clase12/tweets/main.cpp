#include <iostream>
#include <fstream>
#include <string.h>
#include <iostream>

using namespace std;

struct tweet
{
    int nro;
    char txt[140];
};

int main()
{
   /* ifstream archTxt("oraciones.txt");
    ofstream archBin("salida.dat", ios::binary);
    string line;
    tweet t;
    t.nro = 0;

    while(getline(archTxt,line)) {
        strcpy(t.txt, line.c_str());
        archBin.write((char *)&t, sizeof(tweet));
        t.nro++;
    }

    archTxt.close();
    archBin.close();*/

    ifstream archBin("salida.dat", ios::binary);
    tweet t;
    while(archBin.read((char *)&t, sizeof(tweet))) {
        cout << t.nro << " " << t.txt << endl;
    }

    archBin.close();

    return 0;
}

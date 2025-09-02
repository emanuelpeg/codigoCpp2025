#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

struct evento
{
    int nro;
    char descripcion[100];
    char tipoDeNotificacion;
};

void escribirDatosDeEjemplo() {
    evento e1;
    e1.nro = 3;
    strcpy(e1.descripcion, "Una descr");
    e1.tipoDeNotificacion = 'T';

    evento e2;
    e2.nro = 5;
    strcpy(e2.descripcion, "Una descr");
    e2.tipoDeNotificacion = 'C';

    ofstream archi;
    archi.open("evento.bin",ios::binary | ios::ate);
    if (archi.is_open()) {
        archi.write((char*)&e1, sizeof(evento));
        archi.write((char*)&e2, sizeof(evento));
    }
    archi.close();
}

void leerDatosDeEjemplo() {
    ifstream archi;
    archi.open("evento.bin", ios::binary);
    evento eb;
    while(archi.read((char*)&eb, sizeof(evento))) {
            cout << eb.nro << "  " << eb.descripcion
                 << " " << eb.tipoDeNotificacion << endl;

        /*notificacion * noti;
        switch (eb.tipoDeNotificacion) {
        case 't':
            noti = new Txt(eb.nro, eb.descripcion);
            break;
        default:
            break;
        }
        noti.notificar();*/
    }
    archi.close();
}

int main()
{
   // escribirDatosDeEjemplo();
    leerDatosDeEjemplo();
    return 0;
}

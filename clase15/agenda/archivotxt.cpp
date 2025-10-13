#include "archivotxt.h"
#include <fstream>

ArchivoTxt::ArchivoTxt()
{

}

char ArchivoTxt::getTipo()
{
    return 'A';
}

void ArchivoTxt::notificar()
{
    std::ofstream archi("dato.txt");
    if (archi.is_open()) {
        archi << "Se ejecuto "<<this->descripcion <<std::endl;
        archi.close();
    }
}

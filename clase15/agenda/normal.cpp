#include "normal.h"
#include <iostream>

Normal::Normal()
{

}

char Normal::getTipo()
{
    return 'N';
}

void Normal::notificar()
{
    std::cout << this->descripcion;
}

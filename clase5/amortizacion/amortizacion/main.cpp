#include <iostream>
#include "bien.h"
#include "mueble.h"
#include "rodado.h"
#include "terreno.h"
#include "gestorcontable.h"
#include "edificio.h"

using namespace std;

int main()
{
    GestorContable gestorContable = GestorContable();

    Terreno * unTerreno = new Terreno();
    unTerreno->setValor(1200000.0);
    gestorContable.imprimir(unTerreno);

    Rodado * unRodado = new Rodado();
    unRodado->setKm(2450);
    unRodado->setValor(400000.00);
    gestorContable.imprimir(unRodado);

    Bien * unMueble = new Mueble(2019);
    unMueble->setValor(47000.00);
    gestorContable.imprimir(unMueble);

    Bien * edificio = new Edificio(2012, 4);
    edificio->setValor(870000.00);
    gestorContable.imprimir(edificio);


    return 0;
}


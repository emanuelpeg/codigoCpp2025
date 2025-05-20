#include "serieprimo.h"
#include <cstdlib>
#include <ctime>

SeriePrimo::SeriePrimo()
{
}

bool esPrimo(int n) {
    if (n < 2) return false; //Los primos inician en 2
    for (int i = 2; i * i <= n; i++) { // Solo se necesita verificar hasta la raíz cuadrada de n
        if (n % i == 0) return false; //Si algún número (distinto de 1 y sí mismo) divide a n, no es primo
    }
    return true;
}

void SeriePrimo::generar()
{
    srand(time(0));
    int inicio = rand() % 100 + 2; 
    int contador = 0; //Contar cuantos primos se han encontrado
    int candidato = inicio; //Candidato a ser primo

    while (contador < 4) {
        if (esPrimo(candidato)) {
            this->nros[contador] = candidato; // Guardar el primo encontrado
            contador++;
        }
        candidato++;
    }
}

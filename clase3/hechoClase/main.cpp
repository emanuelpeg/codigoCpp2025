#include <iostream>

using namespace std;

int * add(int * vec, int nuevo, int tam) {
    int* aux = new int[tam + 1];
    for (int i = 0; i < tam; i++)
        aux[i] = vec[i];
    aux[tam] = nuevo;
    return aux;
}


int * remove(int * vec, int index, int tam) {
    if (index >= tam -1) {
        return vec;
    }

    int * aux = new int[tam - 1];
    int j = 0;

    for (int i = 0; i < tam; i++) {
        if (i != index) {
            aux[j] = vec[i];
            j++;
        }
    }

    return aux;
}

int contar(int * vec , int buscar, int tam) {
    int cant = 0;
    for (int i = 0; i < tam; i++) {
        if (vec[i] == buscar) {
            cant++;
        }
    }
    return cant;
}

int * removeOcu(int * vec, int valor, int tam) {
    int cant = contar(vec, valor, tam);

    if (cant == 0) {
        return vec;
    }

    if (cant == tam) {
        return nullptr;
    }

    int * aux = new int[tam - cant];
    int j = 0;

    for (int i = 0; i < tam; i++) {
        if (vec[i] != valor) {
            aux[j] = vec[i];
            j++;
        }
    }

    return aux;
}

int len(char * w) {
    int cont = 0;
    while (w[cont] != '\0') {
        cont++;
    }
    return cont + 1;
}

char * add(char * vec, char nuevo) {
    int tam = len(vec);
    char* aux = new char[tam + 1];
    for (int i = 0; i < tam-1; i++)
        aux[i] = vec[i];
    aux[tam -1] = nuevo;
    aux[tam] = '\0';
    return aux;
}

//1
char * mayuscula(char * w){
    int tam = len(w);
    char * aux = new char[tam];
    for (int i = 0; i < tam; i++) {
        if (w[i] >= 'a' && w[i] <= 'z'){
            aux[i] = w[i] -32;
        } else {
            aux[i] = w[i];
        }
    }
    return aux;
}

//8.Realice una función que dado un vector de ctring y dos enteros retorne la subcadena que esta
//formada por desde el primer entero pasado por parámetros hasta el segundo.
char * subString(char * txt, int start, int end) {
    int tam = len(txt);
    if (start > tam - 1 || start > end) {
        return nullptr;
    }
    if (end > tam -1) {
        end = tam -1;
    }

    char * aux = new char[end - start +1];

    for (int i = start; i < end; i++) {
        aux[i - start] = txt[i];
    }

    aux[end] = '\0';
    return aux;
}

int main()
{
    char * saludo = "Hola Mundo!!! ";

    cout << mayuscula(saludo) <<endl;
    cout << subString(saludo,5,10) <<endl;
    return 0;
}

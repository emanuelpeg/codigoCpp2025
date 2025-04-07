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

void copiar(char* destino, const char* origen, int longitud) {
    for (int i = 0; i < longitud; ++i) {
        destino[i] = origen[i];
    }
}

char** cortar(char* str, int& count, char delimiter = ' ') {
    int n = len(str);
    int cantidadDePalabras = 0;
    for(int i = 0; i < n; i++)  {
        if (str[i] == delimiter) {
            cantidadDePalabras++;
        }
    }

    cantidadDePalabras++;
    char** partes = new char*[cantidadDePalabras];
    count = 0;

    const char* inicio = str;
    const char* actual = str;

    while (*actual != '\0') {
        if (*actual == delimiter) {
            int longitud = actual - inicio;
            if (longitud > 0) {
                char* palabra = new char[longitud + 1];
                copiar(palabra, inicio, longitud);
                palabra[longitud] = '\0';
                partes[count++] = palabra;
            }
            inicio = actual + 1;
        }
        ++actual;
    }

    // Agregar la última palabra
    if (actual != inicio) {
        int longitud = actual - inicio;
        char* palabra = new char[longitud + 1];
        copiar(palabra, inicio, longitud);
        palabra[longitud] = '\0';
        partes[count++] = palabra;
    }

    return partes;
}



int main()
{
    char* texto = "hola mundo prueba";
    int cantidad = 0;

    char** resultado = cortar(texto, cantidad);

    for (int i = 0; i < cantidad; ++i) {
        std::cout << resultado[i] << std::endl;
        delete[] resultado[i];  // Liberar cada palabra
    }

    delete[] resultado;
    return 0;
}

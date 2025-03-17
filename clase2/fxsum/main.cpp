#include <iostream>

using namespace std;


int sumaRecu(int vec[], int cant) {
    if (cant == 0) return 0;
    return vec[cant -1] + sumaRecu(vec, cant - 1);
}

int sumaImp(int vec[], int cant) {
    int acu = 0;
    while (cant != 0) {
      acu += vec[cant -1];
      cant--;
    }
    return acu;
}

int mayor(int vec[], int cant) {
    if (cant == 1) return vec[0];
    int aux = mayor(vec, cant - 1);
    if (vec[cant-1] > aux) return vec[cant-1];
            else return aux;
}


long fibo(int pos) {
    if (pos == 0 || pos == 1) return pos;
    return fibo(pos -1) + fibo(pos -2);
}

long fiboAux(long fa, long faa, int i, int pos) {
    if (i == pos) return fa + faa;
    return fiboAux(fa + faa,fa, i +1, pos);
}

long fibo2(int pos) {
    if (pos == 0 || pos == 1) return pos;
    return fiboAux(1, 0, 2, pos);
}

long fiboImp(int pos) {
    int fa = 1;
    int faa = 0;
    int aux = faa;
    for (int i = 0; i < pos; i++) {
        aux = fa;
        fa = fa + faa;
        faa = aux;
    }
    return faa;
}

int mcd(int dividendo, int divisor) {
    if ((dividendo % divisor) == 0) return divisor;
    return mcd(divisor, dividendo % divisor);
}

int main()
{
    /*int *vec = new int[10];
    for (int i = 0; i<10; i++) vec[i] = 5;
    cout << sumaRecu(vec, 10)<< endl;*/

   // cout << fibo2(40) << endl;
   // cout << fiboImp(40) << endl;
   // cout << fibo(40) << endl;
    cout << mcd(350,120) << endl;
    return 0;
}

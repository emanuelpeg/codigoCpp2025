#include <iostream>

using namespace std;

long factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

long factorialImp(int n) {
    long result = 1;
    int cont = 1;
    while (cont <= n) {
        result *= cont;
        cont++;
    }
    return result;
}

long factorialTailAux(int n, int cont, long fa) {
    if (cont == n) return n * fa;
    return factorialTailAux(n, cont + 1, cont * fa);
}

long factorialTail(int n) {
    if (n == 0) return 1;
    return factorialTailAux(n,1,1);
}

long fibo(int n) {
    if (n == 0 || n==1) return 1;
    return fibo(n-1) + fibo(n-2);
}

long fiboTailAux(int n, int cont, long fa, long faa) {
    if (n == cont) return fa;
    return fiboTailAux(n, cont + 1, fa + faa, fa);
}

long fiboTail(int n) {
    if (n == 0 || n==1) return 1;
    return fiboTailAux(n, 0, 1, 0);
}

long mcd(long num, long den) {
    if ((num % den) == 0) return den;
    return mcd(den, num % den);
}

long acuAux(int vec[], int n, long acu) {
    if (n == 1) return vec[0] + acu;
    return acuAux(vec, n - 1, acu + vec[n-1]);
}

long acu(int vec[], int n) {
    return acuAux(vec, n , 0);
}

long acu2(int vec[], int n, int cont) {
    if (n == cont) return 0;
    return vec[cont] + acu2(vec, n, cont + 1);
}

int max(int vec[], int n) {
    if (n == 1) return vec[0];
    int maximo = max(vec, n -1);
    if (vec[n-1] > maximo) return vec[n-1];
    return maximo;
}

int main()
{
    int vec[] = {10,2,4,20,1};
    //cout << acu(vec,5)<< endl;
    //cout << acu2(vec,5, 0)<< endl;
    cout << max(vec,5)<< endl;
    return 0;
}

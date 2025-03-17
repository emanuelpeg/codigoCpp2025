#include <iostream>

using namespace std;

long factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}


long factorialTail(int n, int count, long factoriaAnt) {
    if (n < count) return factoriaAnt;
    return factorialTail(n, count + 1, count * factoriaAnt);
}

int main()
{
    cout << factorial(5)<< endl;
    cout << factorialTail(5,1,1)<< endl;
    return 0;
}

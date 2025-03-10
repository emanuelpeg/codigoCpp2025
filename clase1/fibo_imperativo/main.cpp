#include <iostream>

using namespace std;


int fibo(int pos) {
    auto aux = 0;
    auto aux2 = 1;
    auto aux3 = aux2;
    for(auto i = 0; i < pos; i++) {
        aux2 = aux + aux2;
        aux = aux3;
        aux3 = aux2;
    }
    return aux;
}

int main()
{
    cout << fibo(6) << endl;
    return 0;
}

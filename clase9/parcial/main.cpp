#include <iostream>

using namespace std;

bool fx(int n);

int main()
{
    fx(17);
    return 0;
}

bool fx(int n) {
    if (n > 0) {
        if (fx(n - 2)) cout << " , ";
            cout << n;
            return true;
        }
    return false;
}


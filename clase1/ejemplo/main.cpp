#include <iostream>

using namespace std;

int * add(int * old, int size, int newElement) {
    int * newVec = new int[size + 1];
    for (int i = 0; i < size; i++) {
        newVec[i] = old[i];
    }
    newVec[size] = newElement;
    delete [] old;
    return newVec;
}

int main()
{
    int * vec = new int[3];
    vec[0] = 50;
    vec[1] = 30;
    vec[2] = 60;

    vec = add(vec, 3, 56);

    for(int i; i < 4; i++)
       cout << vec[i] << " ";
    return 0;
}

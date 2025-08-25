#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm>

using namespace std;

bool des (int i,int j) { return (i>j); }

int main()
{
    vector<int> numeros(200);
    for(int i = 0; i<200; ++i) {
        numeros[i] = rand() % 900;
    }

    for(auto it = numeros.begin();
        it!=numeros.end(); ++it) {
        cout << *it  << ", ";
    }

    cout << " --------------- " << endl;

    std::sort(numeros.begin()+10,numeros.end()-50);

    for(std::size_t i = 0; i<numeros.size(); i++) {
        cout << numeros[i]  << ", ";
    }
    cout << " --------------- " << endl;
    //std::sort(numeros.begin(),numeros.end(), des);
   //std::sort(numeros.rbegin(),numeros.rend());
    std::sort(numeros.begin(),numeros.end(),
              [](int i,int j) -> bool {
        return i>j;
    });

    for(int i = 0; i<numeros.size(); i++) {
        cout << numeros[i]  << ", ";
    }

    return 0;
}


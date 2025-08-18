#include <iostream>
#include <vector>
#include "mapa.cpp"
#include "vectordinamico.cpp"

using namespace std;

template<class T>
T mayor(vector<T> v) {
    if (v.empty()) {
            throw "No puede ser vacio";
    }
    T m = v.front();
    for (int i = 1; i < v.size(); i++) {
        if (v[i] > m) {
            m = v[i];
        }
    }
    return m;
}


int main()
{
//    Optional<int> o;
//    o.setNumber(5);
//    cout << o.getNumber() << endl;
//    Optional u(1);
//    Optional<int> oo = o + u;
//    Optional<char> c('a');
//    cout << oo.getNumber() << endl;

 /*   vector<int> v;

    for (int i = 0; i < 100; i++) {
        v.push_back(rand() % 20);
    }

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << endl << mayor(v) << " ";
    cout << endl;
/*    cout << "--- Cantidades ---" <<endl;

    Map<int, int> m;
    for (int i = 0; i < v.size(); i++) {
        if (!m.find(v[i])) {
            m.put(v[i], 1);
        } else {
            m.put(v[i], m.get(v[i]) + 1);
        }
    }

    vector<int> keys = m.getKeys();

    for (int i = 0; i < keys.size(); i++) {
        cout << keys[i] << " " << m.getValues()[i] << endl;
    }

    VectorDinamico<int> vd;

    for (int i = 0; i < 100; i++) {
        vd.add(rand() % 20);
    }

    for (int i = 0; i < vd.getSize(); i++) {
        cout << vd.get(i) << " ";
    }
*/
    vector<int> v;

    for (int i = 0; i < 100; i++) {
        v.push_back(rand() % 20);
    }

    cout << endl << mayor(v) << " " << endl;
    v.clear();

    try {
        cout << endl << mayor(v) << " " << endl;
    } catch (const char * c) {
        cout << c << endl;
    }


    cout << "hola" << endl;

    return 0;
}

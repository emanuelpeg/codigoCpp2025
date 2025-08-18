#include "mapa.h"
template<class K, class V>
Mapa<K, V>::Mapa()
{

}

template<class K, class V>
void Mapa<K, V>::puts(K key, V value)
{
    int index = -1;
    for(int i = 0; i < keys.size(); i++) {
        if (keys[i] == key) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        keys.push_back(key);
        values.push_back(value);
    } else {
        values[index] = value;
    }
}

template<class K, class V>
V Mapa<K, V>::get(K key)
{
    int index = -1;
    for(int i = 0; i < keys.size(); i++) {
        if (keys[i] == key) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        throw "no se encontro";
    }
    return values[index];
}

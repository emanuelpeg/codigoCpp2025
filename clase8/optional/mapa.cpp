#include "mapa.h"

template<class K, class V>
const std::vector<K> Map<K,V>::getKeys()
{
    return keys;
}

template<class K, class V>
const std::vector<V> Map<K,V>::getValues()
{
    return values;
}

template<class K, class V>
void Map<K, V>::set(K key, V value)
{
    int index = 0;
    for(int i = 0; i < this->keys.size(); i++) {
        if (key == keys[i]) {
            index = i;
            break;
        }
    }
    values[index] = value;
}

template<class K, class V>
Map<K,V>::Map()
{

}

template<class K, class V>
void Map<K, V>::put(K key, V value)
{
    if(find(key)) {
        set(key, value);
        return;
    }
    this->keys.push_back(key);
    this->values.push_back(value);
}

template<class K, class V>
V Map<K, V>::get(K key)
{
    int index = 0;
    for(int i = 0; i < this->keys.size(); i++) {
        if (key == keys[i]) {
            index = i;
            break;
        }
    }
    return values[index];
}

template<class K, class V>
bool Map<K, V>::find(K key)
{
    for(int i = 0; i < this->keys.size(); i++) {
        if (key == keys[i]) {
            return true;
        }
    }
    return false;
}

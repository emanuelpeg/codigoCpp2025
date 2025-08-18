#ifndef MAPA_H
#define MAPA_H
#include <vector>

template<class K, class V>
class Map
{
private:
    std::vector<K> keys;
    std::vector<V> values;
    void set(K key, V value);
public:
    Map();
    void put(K key, V value);
    V get(K key);
    bool find(K key);
    const std::vector<K> getKeys();
    const std::vector<V> getValues();
};

#endif // MAPA_H

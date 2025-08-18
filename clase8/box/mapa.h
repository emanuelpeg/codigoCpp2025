#ifndef MAPA_H
#define MAPA_H
#include <vector>

template<class K, class V>
class Mapa
{
private:
    std::vector<K> keys;
    std::vector<V> values;
public:
    Mapa();
    void puts(K key, V value);
    V get(K key);
};

#endif // MAPA_H

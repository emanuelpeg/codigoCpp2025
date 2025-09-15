#ifndef PAR_H
#define PAR_H

template<class T, class W>
class Par
{
private:
    T unValor;
    W otroValor;
public:
    Par();    
    T getUnValor();
    void setUnValor(T newUnValor);
    W getOtroValor();
    void setOtroValor(W newOtroValor);
    bool igual(Par a);

};

#endif // PAR_H

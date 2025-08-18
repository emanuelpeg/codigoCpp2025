#ifndef OPTIONAL_H
#define OPTIONAL_H

template<class T>
class Optional
{
private:
    T * number = nullptr;
public:
    Optional();
    Optional(T number);
    T getNumber() const;
    void setNumber(T newNumber);
    bool isEmpty();
    Optional<T> operator+(Optional<T> other);
};

#endif // OPTIONAL_H

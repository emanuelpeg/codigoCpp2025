#include "optional.h"

template<class T>
T Optional<T>::getNumber() const
{
    return *number;
}

template<class T>
void Optional<T>::setNumber(T newNumber)
{
    number = &newNumber;
}

template<class T>
bool Optional<T>::isEmpty()
{
    return this->number == nullptr;
}

template<class T>
Optional<T> Optional<T>::operator+(Optional<T> other)
{
    if (other.isEmpty()) {
        return *this;
    }
    if (this->isEmpty()) {
        return other;
    }
    return Optional<T>(*(this->number) + other.getNumber());
}

template<class T>
Optional<T>::Optional()
{

}

template<class T>
Optional<T>::Optional(T number)
{
    this->number = &number;
}

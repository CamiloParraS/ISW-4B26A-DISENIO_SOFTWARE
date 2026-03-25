#include "../include/Dog.h"

Dog::Dog() : Mammal() {}
Dog::Dog(std::string name) : Mammal(name) {}

std::string Dog::toString() const
{
    return "Dog [" + Mammal::toString() + " ]";
}

std::ostream &operator<<(std::ostream &os, const Dog &dog)
{
    os << dog.toString();
    return os;
}
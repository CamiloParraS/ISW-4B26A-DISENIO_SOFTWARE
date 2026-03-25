#include "../include/Mammal.h"

Mammal::Mammal() : Animal() {}
Mammal::Mammal(std::string name) : Animal(name) {}

std::string Mammal::toString() const
{
    return "Mammal [" + Animal::toString() + " ]";
}

std::ostream &operator<<(std::ostream &os, const Mammal &mammal)
{
    os << mammal.toString();
    return os;
}
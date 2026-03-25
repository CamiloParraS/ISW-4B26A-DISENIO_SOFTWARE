#include "../include/Cat.h"

Cat::Cat() : Mammal() {}
Cat::Cat(std::string name) : Mammal(name) {}

std::string Cat::toString() const
{
    return "Cat [" + Mammal::toString() + " ]";
}

std::ostream &operator<<(std::ostream &os, const Cat &cat)
{
    os << cat.toString();
    return os;
}
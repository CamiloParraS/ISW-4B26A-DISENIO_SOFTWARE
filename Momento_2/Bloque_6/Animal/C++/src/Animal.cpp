#include "../include/Animal.h"

Animal::Animal() : name("Unknown") {}
Animal::Animal(std::string name) : name(name) {}

std::string Animal::getName() const
{
    return name;
}
void Animal::setName(std::string name)
{
    this->name = name;
}

std::string Animal::toString() const
{
    return "Animal[ name= " + name + " ]";
}

std::ostream &operator<<(std::ostream &os, const Animal &animal)
{
    os << animal.toString();
    return os;
}
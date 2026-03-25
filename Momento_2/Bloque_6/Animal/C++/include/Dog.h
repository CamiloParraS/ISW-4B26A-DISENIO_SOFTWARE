#ifndef DOG_H
#define DOG_H

#include "Mammal.h"

class Dog : public Mammal
{
public:
    Dog();
    Dog(std::string name);

    std::string toString() const;

    void greets() const;
};
std::ostream &operator<<(std::ostream &os, const Dog &dog);

#endif // DOG_H
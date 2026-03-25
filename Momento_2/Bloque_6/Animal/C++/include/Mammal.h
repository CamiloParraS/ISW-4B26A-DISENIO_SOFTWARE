#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

class Mammal : public Animal
{
private:
public:
    Mammal();
    Mammal(std::string name);

    std::string toString() const;
};

std::ostream &operator<<(std::ostream &os, const Mammal &mammal);

#endif // MAMMAL_H
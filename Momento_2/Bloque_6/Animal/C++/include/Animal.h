#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal
{
private:
    std::string name;

public:
    Animal();
    Animal(std::string name);

    std::string getName() const;
    void setName(std::string name);

    std::string toString() const;
};

std::ostream &operator<<(std::ostream &os, const Animal &animal);

#endif // ANIMAL_H
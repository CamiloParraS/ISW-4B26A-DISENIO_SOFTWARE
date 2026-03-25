#include <iostream>

#include "../include/Animal.h"
#include "../include/Mammal.h"
#include "../include/Cat.h"
#include "../include/Dog.h"

int main()
{
    // Base Animal class
    std::cout << "=== Animal Class ===" << std::endl;
    Animal animal1;
    std::cout << "Default Animal: " << animal1 << std::endl;
    Animal animal2("Lion");
    std::cout << "Parameterized Animal: " << animal2 << std::endl;
    animal1.setName("Elephant");
    std::cout << "Updated Animal1: " << animal1 << std::endl;

    // Mammal class
    std::cout << "\n=== Mammal Class ===" << std::endl;
    Mammal mammal1;
    std::cout << "Default Mammal: " << mammal1 << std::endl;
    Mammal mammal2("Tiger");
    std::cout << "Parameterized Mammal: " << mammal2 << std::endl;
    mammal1.setName("Bear");
    std::cout << "Updated Mammal1: " << mammal1 << std::endl;

    // Cat class
    std::cout << "\n=== Cat Class ===" << std::endl;
    Cat cat1;
    std::cout << "Default Cat: " << cat1 << std::endl;
    Cat cat2("Whiskers");
    std::cout << "Parameterized Cat: " << cat2 << std::endl;
    cat1.setName("Garfield");
    std::cout << "Updated Cat1: " << cat1 << std::endl;
    cat2.greets();

    // Dog class
    std::cout << "\n=== Dog Class ===" << std::endl;
    Dog dog1;
    std::cout << "Default Dog: " << dog1 << std::endl;
    Dog dog2("Buddy");
    std::cout << "Parameterized Dog: " << dog2 << std::endl;
    dog1.setName("Max");
    std::cout << "Updated Dog1: " << dog1 << std::endl;

    return 0;
}
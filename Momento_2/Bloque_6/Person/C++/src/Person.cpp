#include "../include/Person.h"
#include <iostream>
#include <string>

std::string Person::getName() const {
    return name;
}

std::string Person::getAdress() const {
    return adress;
}

void Person::setName(std::string name) {
    this->name = name;
}

void Person::setAdress(std::string adress) {
    this->adress = adress;
}

std::ostream &operator<<(std::ostream &os, const Person &person) {
    os << "Person[ Name: " << person.getName() << ", Adress: " << person.getAdress() << " ]";
    return os;
}
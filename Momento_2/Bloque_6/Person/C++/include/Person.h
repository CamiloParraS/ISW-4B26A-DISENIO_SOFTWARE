#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class Person {
    private:
        std::string name;
        std::string adress;
    public:
        Person(std::string name, std::string adress) : name(name), adress(adress) {}
        std::string getName() const;
        std::string getAdress() const;
        void setName(std::string name);
        void setAdress(std::string adress);
};

std::ostream &operator<<(std::ostream &os, const Person &person);

#endif // PERSON_H
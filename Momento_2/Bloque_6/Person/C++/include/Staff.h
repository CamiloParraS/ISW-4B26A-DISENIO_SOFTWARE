#ifndef STAFF_H
#define STAFF_H

#include "Person.h"
#include <string>
#include <iostream>

class Staff : public Person {
private:
    std::string school;
    double pay;
public:
    Staff(const std::string &name, const std::string &adress, const std::string &school, double pay);
    std::string getSchool() const;
    double getPay() const;
    void setSchool(const std::string &school);
    void setPay(double pay);
};

std::ostream &operator<<(std::ostream &os, const Staff &staff);

#endif // STAFF_H
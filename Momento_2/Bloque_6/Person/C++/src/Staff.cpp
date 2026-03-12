#include "../include/Staff.h"
#include <iostream>

Staff::Staff(const std::string &name, const std::string &adress, const std::string &school, double pay)
    : Person(name, adress), school(school), pay(pay) {}

std::string Staff::getSchool() const { 
    return school; 
}
double Staff::getPay() const { 
    return pay; 
}

void Staff::setSchool(const std::string &school) { 
    this->school = school; 
}

void Staff::setPay(double pay) { 
    this->pay = pay; 
}

std::ostream &operator<<(std::ostream &os, const Staff &staff) {
    os << "Staff[ " << Person(staff)
       << ", School: " << staff.getSchool()
       << ", Pay: " << staff.getPay() << " ]";
    return os;
}

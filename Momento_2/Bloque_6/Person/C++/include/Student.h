#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#include <iostream>

class Student : public Person {
private:
    std::string program;
    int year;
    double fee;
public:
    Student(const std::string &name, const std::string &adress, const std::string &program, int year, double fee);

    std::string getProgram() const;
    int getYear() const;
    double getFee() const;
    void setProgram(const std::string &program);
    void setYear(int year);
    void setFee(double fee);
};

std::ostream &operator<<(std::ostream &os, const Student &student);

#endif // STUDENT_H
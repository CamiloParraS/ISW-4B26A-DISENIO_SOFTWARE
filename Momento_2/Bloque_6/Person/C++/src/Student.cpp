#include "../include/Student.h"
#include <iostream>

Student::Student(const std::string &name, const std::string &adress, const std::string &program, int year, double fee)
    : Person(name, adress), program(program), year(year), fee(fee) {}

std::string Student::getProgram() const { return program; }
int Student::getYear() const { return year; }
double Student::getFee() const { return fee; }

void Student::setProgram(const std::string &program) { this->program = program; }
void Student::setYear(int year) { this->year = year; }
void Student::setFee(double fee) { this->fee = fee; }

std::ostream &operator<<(std::ostream &os, const Student &student) {
    os << "Student[ " << Person(student)
       << ", Program: " << student.getProgram()
       << ", Year: " << student.getYear()
       << ", Fee: " << student.getFee() << " ]";
    return os;
}

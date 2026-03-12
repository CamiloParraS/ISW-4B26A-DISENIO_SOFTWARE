#include <iostream>
#include "../include/Person.h"
#include "../include/Student.h"
#include "../include/Staff.h"

int main() {
    // Person
    std::cout << "\n--- Person ---" << std::endl;
    Person person("John Doe", "123 Main St");
    std::cout << person << std::endl;
    std::cout << "Modified person:" << std::endl;
    person.setName("Jane Doe");
    person.setAdress("456 Elm St");
    std::cout << person << std::endl;


    // Student
    std::cout << "\n--- Student ---" << std::endl;
    Student student("Alice Smith", "789 Oak St", "Computer Science", 2, 1500.0);
    std::cout << student << std::endl;
    std::cout << "Modified student:" << std::endl;
    student.setProgram("Software Engineering");
    student.setYear(3);
    student.setFee(1600.0);
    std::cout << student << std::endl;


    // Staff
    std::cout << "\n--- Staff ---" << std::endl;
    Staff staff("Bob Johnson", "321 Pine St", "Engineering", 50000.0);
    std::cout << staff << std::endl;
    std::cout << "Modified staff:" << std::endl;
    staff.setSchool("Computer Science");
    staff.setPay(55000.0);
    std::cout << staff << std::endl;
}
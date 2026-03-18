#include "../include/Circle.h"
#include "../include/Cylinder.h"

int main()
{
    Circle c1;              // Default constructor
    Circle c2(2.5);         // Constructor with radius
    Circle c3(3.0, "blue"); // Constructor with radius and color

    std::cout << "=== CIRCLE ===" << std::endl;
    std::cout << c1 << std::endl;
    std::cout << c2 << std::endl;
    std::cout << c3 << std::endl;

    // Modify c1 to demonstrate setters
    c1.setRadius(1.5);
    c1.setColor("yellow");
    std::cout << "Modified c1: " << c1 << std::endl;

    std::cout << "=== CYLINDER ===" << std::endl;

    Cylinder cyl1;                    // Default constructor
    Cylinder cyl2(2.0, 5.0);          // Constructor with radius and height
    Cylinder cyl3(3.0, "green", 7.0); // Constructor with radius, color, and height

    std::cout << cyl1 << std::endl;
    std::cout << cyl2 << std::endl;
    std::cout << cyl3 << std::endl;

    // Modify cyl1 to demonstrate setters
    cyl1.setRadius(1.0);
    cyl1.setColor("purple");
    cyl1.setHeight(3.0);
    std::cout << "Modified cyl1: " << cyl1 << std::endl;

    return 0;
}
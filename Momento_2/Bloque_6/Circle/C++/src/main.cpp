#include "../include/Circle.h"
#include "../include/Cylinder.h"

int main()
{
    Circle c1;              // Default constructor
    Circle c2(2.5);         // Constructor with radius
    Circle c3(3.0, "blue"); // Constructor with radius and color

    std::cout << c1 << std::endl;
    std::cout << c2 << std::endl;
    std::cout << c3 << std::endl;

    Cylinder cyl1;                    // Default constructor
    Cylinder cyl2(2.0, 5.0);          // Constructor with radius and height
    Cylinder cyl3(3.0, "green", 7.0); // Constructor with radius, color, and height

    std::cout << cyl1 << std::endl;
    std::cout << cyl2 << std::endl;
    std::cout << cyl3 << std::endl;

    return 0;
}
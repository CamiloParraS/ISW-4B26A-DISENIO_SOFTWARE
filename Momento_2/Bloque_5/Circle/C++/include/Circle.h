#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <string>

class Circle {
    private:
        double radius = 1.0;
        std::string color = "red";

    public:
        // Constructors
        Circle();
        Circle(double r);
        Circle(double r, const std::string& c); // Pass string by const ref

        double getRadius() const;
        void setRadius(double r);
        
        std::string getColor() const;
        void setColor(const std::string& c);

        double getArea() const;

};
    std::ostream& operator<<(std::ostream& os, const Circle& c);



#endif // CIRCLE_H
#include "Circle.h"

#include <cmath>

Circle::Circle() : Shape(), radius(1.0) {}

Circle::Circle(double radius) : Shape(), radius(radius) {}

Circle::Circle(double radius, std::string color, bool filled)
    : Shape(color, filled), radius(radius) {}

double Circle::getRadius() const { return radius; }
void Circle::setRadius(double radius) { this->radius = radius; }

double Circle::getArea() const { return M_PI * radius * radius; }

double Circle::getPerimeter() const { return 2 * M_PI * radius; }

std::string Circle::toString() const {
  return "Circle[" + Shape::toString() + ",radius=" + std::to_string(radius) +
         "]";
}

std::ostream& operator<<(std::ostream& os, const Circle& circle) {
  os << circle.toString();
  return os;
}
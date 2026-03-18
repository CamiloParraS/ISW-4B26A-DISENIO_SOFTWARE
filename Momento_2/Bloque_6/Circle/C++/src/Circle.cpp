#include "../include/Circle.h"
#include <string>
#include <iostream>
#include <cmath>

Circle::Circle() : radius(1.0), color("red") {}
Circle::Circle(double r) : radius(r), color("red") {}
Circle::Circle(double r, const std::string &c) : radius(r), color(c) {}

double Circle::getRadius() const
{
    return radius;
}

void Circle::setRadius(double r)
{
    radius = r;
}

std::string Circle::getColor() const
{
    return color;
}

void Circle::setColor(const std::string &c)
{
    color = c;
}

double Circle::getArea() const
{
    return M_PI * radius * radius;
}

std::ostream &operator<<(std::ostream &os, const Circle &c)
{
    os << "Circle[radius: " << c.getRadius() << ", color: " << c.getColor() << ", area: " << c.getArea() << "]";
    return os;
}

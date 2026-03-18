#include "../include/Cylinder.h"

Cylinder::Cylinder() : Circle(), height(1.0) {}
Cylinder::Cylinder(double r, double h) : Circle(r), height(h) {}
Cylinder::Cylinder(double r, std::string c, double h) : Circle(r, c), height(h) {}

double Cylinder::getHeight() const
{
    return height;
}

void Cylinder::setHeight(double h)
{
    height = h;
}

double Cylinder::getVolume() const
{
    return getArea() * height;
}

std::ostream &operator<<(std::ostream &os, const Cylinder &c)
{
    os << "Cylinder[radius: " << c.getRadius() << ", color: " << c.getColor() << ", height: " << c.getHeight() << "]";
    return os;
}
#include "Rectangle.h"

#include <cmath>

Rectangle::Rectangle() : Shape(), width(1.0), height(1.0) {}
Rectangle::Rectangle(double width, double height)
    : Shape(), width(width), height(height) {}
Rectangle::Rectangle(double width, double height, std::string color,
                     bool filled)
    : Shape(color, filled), width(width), height(height) {}

double Rectangle::getWidth() const { return width; }
void Rectangle::setWidth(double width) { this->width = width; }

double Rectangle::getHeight() const { return height; }
void Rectangle::setLength(double height) { this->height = height; }

double Rectangle::getArea() const { return width * height; }
double Rectangle::getPerimeter() const { return 2 * (width + height); }

std::string Rectangle::toString() const {
  return "Rectangle[" + Shape::toString() + ",width=" + std::to_string(width) +
         ",height=" + std::to_string(height) + "]";
}

std::ostream& operator<<(std::ostream& os, const Rectangle& rectangle) {
  os << rectangle.toString();
  return os;
}
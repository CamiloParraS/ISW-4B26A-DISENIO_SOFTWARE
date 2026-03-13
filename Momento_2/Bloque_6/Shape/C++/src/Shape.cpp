#include "Shape.h"

#include <iostream>

Shape::Shape() : color("red"), filled(true) {}
Shape::Shape(std::string color, bool filled) : color(color), filled(filled) {}

std::string Shape::getColor() const { return color; }

void Shape::setColor(std::string color) { this->color = color; }

bool Shape::isFilled() const { return filled; }

void Shape::setFilled(bool filled) { this->filled = filled; }

std::string Shape::toString() const {
  return "Shape[color=" + color + ",filled=" + (filled ? "true" : "false") +
         "]";
}

std::ostream& operator<<(std::ostream& os, const Shape& shape) {
  os << shape.toString();
  return os;
}
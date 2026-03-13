#include "Square.h"

Square::Square() : Rectangle(1.0, 1.0) {}

Square::Square(double side) : Rectangle(side, side) {}

Square::Square(double side, std::string color, bool filled)
    : Rectangle(side, side, color, filled) {}

double Square::getSide() const { return getWidth(); }

void Square::setSide(double side) { setWidth(side); }

void Square::setWidth(double side) {
  Rectangle::setWidth(side);
  Rectangle::setLength(side);
}

void Square::setLength(double side) {
  Rectangle::setLength(side);
  Rectangle::setWidth(side);
}

std::string Square::toString() const {
  return "Square[" + Rectangle::toString() + "]";
}

std::ostream& operator<<(std::ostream& os, const Square& square) {
  os << square.toString();
  return os;
}
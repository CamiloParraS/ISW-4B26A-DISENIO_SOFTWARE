#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"

class Square : public Rectangle {
 public:
  Square();
  Square(double side);
  Square(double side, std::string color, bool filled);

  double getSide() const;
  void setSide(double side);

  void setWidth(double side) override;
  void setLength(double side) override;

  std::string toString() const override;
};

// Global operator overload
std::ostream& operator<<(std::ostream& os, const Square& square);

#endif  // SQUARE_H
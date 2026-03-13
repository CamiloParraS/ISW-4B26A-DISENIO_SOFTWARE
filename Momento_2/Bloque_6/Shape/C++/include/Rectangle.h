#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <string>

#include "Shape.h"

class Rectangle : public Shape {
 private:
  double width = 1.0;
  double height = 1.0;

 public:
  Rectangle();
  Rectangle(double width, double height);
  Rectangle(double width, double height, std::string color, bool filled);

  double getWidth() const;
  virtual void setWidth(double width);

  double getHeight() const;
  virtual void setLength(double height);

  double getArea() const;
  double getPerimeter() const;

  virtual std::string toString() const;
};

std::ostream& operator<<(std::ostream& os, const Rectangle& rectangle);

#endif  // RECTANGLE.H
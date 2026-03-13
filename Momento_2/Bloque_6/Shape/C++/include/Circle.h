#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <string>

#include "Shape.h"

class Circle : public Shape {
 private:
  double radius;

 public:
  Circle();
  Circle(double radius);
  Circle(double radius, std::string color, bool filled);

  double getRadius() const;
  void setRadius(double radius);

  double getArea() const;
  double getPerimeter() const;

  std::string toString() const;
};

std::ostream& operator<<(std::ostream& os, const Circle& circle);

#endif
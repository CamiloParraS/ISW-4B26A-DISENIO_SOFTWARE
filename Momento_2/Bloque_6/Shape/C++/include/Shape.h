#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape {
 private:
  std::string color;
  bool filled;

 public:
  Shape();
  Shape(std::string color, bool filled);

  std::string getColor() const;
  void setColor(std::string color);

  bool isFilled() const;
  void setFilled(bool filled);

  std::string toString() const;
};

std::ostream& operator<<(std::ostream& os, const Shape& shape);

#endif
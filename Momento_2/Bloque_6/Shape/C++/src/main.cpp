#include <iostream>

#include "Circle.h"
#include "Rectangle.h"
#include "Shape.h"
#include "Square.h"

int main() {
  // -- SHAPE --
  std::cout << std::endl;
  std::cout << " === SHAPE === " << std::endl;

  std::cout << "Shape Default Constructor:" << std::endl;
  Shape shape1;
  std::cout << shape1 << std::endl;

  std::cout << "Shape Custom Constructor (color=blue, filled=false):"
            << std::endl;
  Shape shape2("blue", false);
  std::cout << shape2 << std::endl;

  std::cout << "Modifying shape1 properties:" << std::endl;
  shape1.setColor("green");
  shape1.setFilled(false);
  std::cout << shape1 << std::endl;

  // -- CIRCLE --
  std::cout << std::endl;
  std::cout << " === CIRCLE === " << std::endl;

  std::cout << "Circle Default Constructor:" << std::endl;
  Circle circle1;
  std::cout << circle1 << std::endl;

  std::cout << "Circle Custom Constructor (radius=2.5):" << std::endl;
  Circle circle2(2.5);
  std::cout << circle2 << std::endl;

  std::cout << "Circle Full Constructor (radius=2.5, color=cyan, filled=false):"
            << std::endl;
  Circle circle3(2.5, "cyan", false);
  std::cout << circle3 << std::endl;

  std::cout << "Circle Full Constructor (radius=2.5, color=cyan, filled=false):"
            << std::endl;
  circle1.setRadius(3.0);
  circle1.setColor("yellow");
  circle1.setFilled(false);
  std::cout << circle1 << std::endl;

  // -- RECTANGLE --
  std::cout << std::endl;
  std::cout << " === RECTANGLE === " << std::endl;

  std::cout << "Rectangle Default Constructor:" << std::endl;
  Rectangle rectangle1;
  std::cout << rectangle1 << std::endl;

  std::cout << "Rectangle Custom Constructor (width=2.0, height=3.0):"
            << std::endl;
  Rectangle rectangle2(2.0, 3.0);
  std::cout << rectangle2 << std::endl;

  std::cout << "Rectangle Full Constructor (width=2.0, height=3.0, "
               "color=orange, filled=true):"
            << std::endl;
  Rectangle rectangle3(2.0, 3.0, "orange", true);
  std::cout << rectangle3 << std::endl;

  std::cout << "Modifying rectangle1 properties:" << std::endl;
  rectangle1.setWidth(4.0);
  rectangle1.setLength(5.0);
  rectangle1.setColor("purple");
  rectangle1.setFilled(true);
  std::cout << rectangle1 << std::endl;

  // -- SQUARE --
  std::cout << std::endl;
  std::cout << " === SQUARE === " << std::endl;

  std::cout << "Square Default Constructor:" << std::endl;
  Square square1;
  std::cout << square1 << std::endl;

  std::cout << "Square Custom Constructor (side=2.0):" << std::endl;
  Square square2(2.0);
  std::cout << square2 << std::endl;

  std::cout << "Square Full Constructor (side=2.0, color=pink, filled=true):"
            << std::endl;
  Square square3(2.0, "pink", true);
  std::cout << square3 << std::endl;

  std::cout << "Modifying square1 properties:" << std::endl;
  square1.setSide(3.0);
  square1.setColor("magenta");
  square1.setFilled(true);
  std::cout << square1 << std::endl;
}
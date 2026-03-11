#ifndef CYLINDER_H
#define CYLINDER_H
#include "Circle.h"

class Cylinder : public Circle {
    private:
        double height = 1.0;

    public:
        Cylinder();
        Cylinder(double r, double h);
        Cylinder(double r, std::string c, double h);
        double getHeight() const;
        void setHeight(double h);
        double getVolume() const;
};

std::ostream& operator<<(std::ostream& os, const Cylinder& c);

#endif // CYLINDER_H
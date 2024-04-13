#include "Circle.h"
#include <cmath>

Circle::Circle(double radius) : radius(radius) {}

double Circle::area() const {
    return M_PI * radius * radius;
}

const char* Circle::name() const {
    return "Circle";
}

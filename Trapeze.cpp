#include "Trapeze.h"

Trapeze::Trapeze(double base, double side, double height) : base(base), side(side), height(height) {}

double Trapeze::area() const {
    return (base + side) * height / 2.0;
}

const char* Trapeze::name() const {
    return "Trapeze";
}

#pragma once
#include "Shape.h"

class Trapeze : public Shape {
private:
    double base;
    double side;
    double height;

public:
    Trapeze(double base, double side, double height);
    virtual double area() const override;
    virtual const char* name() const override;
};

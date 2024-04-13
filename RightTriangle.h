#pragma once
#include "Shape.h"

class RightTriangle : public Shape {
private:
    double base;
    double height;

public:
    RightTriangle(double base, double height);
    virtual double area() const override;
    virtual const char* name() const override;
};

#pragma once
#include "Shape.h"

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double width, double height);
    virtual double area() const override;
    virtual const char* name() const override;
};

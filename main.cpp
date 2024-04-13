#include "Rectangle.h"
#include "Circle.h"
#include "RightTriangle.h"
#include "Trapeze.h"
#include <iostream>
using namespace std;

int main() {
    Shape* shapes[4];

    shapes[0] = new Rectangle(2.0, 3.0);
    shapes[1] = new Circle(4.0);
    shapes[2] = new RightTriangle(5.0, 6.0);
    shapes[3] = new Trapeze(7.0, 8.0, 9.0);

    for (int i = 0; i < 4; ++i) {
        cout << "Type of object " << i + 1 << ": " << shapes[i]->name() << endl;
        cout << "The area of shape " << i + 1 << " is " << shapes[i]->area() << endl;
        delete shapes[i];
    }

    return 0;
}

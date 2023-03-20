#include <iostream>
#include "Circle.h"

int main() {
    double r;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> r;

    Circle c(r);
    std::cout << "Area: " << c.getArea() << std::endl;
    std::cout << "Diameter: " << c.getDiameter() << std::endl;
    std::cout << "Circumference: " << c.getCircumference() << std::endl;

    return 0;
}

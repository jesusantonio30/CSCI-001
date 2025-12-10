#include "pointClass.hpp"
#include <iostream>

Point::Point(double mX, double mY) {
    x = mX;
    y = mY;
}

void Point::printPoint() {
    std::cout << "( " << x << ", " << y << " )" << std::endl;
}

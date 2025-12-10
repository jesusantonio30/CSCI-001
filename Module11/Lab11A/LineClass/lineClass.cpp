#include "lineClass.hpp"
#include <iostream>

Line::Line(Point mA, Point mB) {
    a = mA;
    b = mB;
}

void Line::printLine() {
    double y = yIntercept();
    if (y < 0) std::cout << "y = " << slope() << "x - " << -1 * y << std::endl;
    if (y > 0) std::cout << "y = " << slope() << "x + " << y << std::endl;
}

double Line::slope() {
    return (b.y - a.y) / (b.x - a.x);
}

double Line::yIntercept() {
    return a.y - (slope() * a.x);
}

double Line::evaluation(double mX) {
    return slope() * mX + yIntercept();
}

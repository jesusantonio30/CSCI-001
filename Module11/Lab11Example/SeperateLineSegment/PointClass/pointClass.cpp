
#include "../PointClass/pointClass.hpp"

#include <iostream>

// CONSTRUCTORS
    Point::Point(double x, double y) {
        setX(x);
        setY(y);
    }

// SETTERS
    void Point::setX(double argX) {
        X = argX;
    }

    void Point::setY(double argY) {
        Y = argY;
    }

// GETTERS
    double Point::getX() {
        return X;
    }

    double Point::getY() {
        return Y;
    }

// METHODS
    void Point::print() {
        std::cout << "( " << getX() << ", " << getY() << " )" << std::endl;
    }

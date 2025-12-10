
#include "../LineClass/lineClass.hpp"
#include <cmath>

// CONSTRUCTOR
    Segment::Segment(Point a, Point b) {
        setA(a);
        setB(b);
    }

// SETTERS
    void Segment::setA(Point argA) {
        A = argA;
    }

    void Segment::setB(Point argB) {
        B = argB;
    }

// GETTERS
    Point Segment::getA() {
        return A;
    }

    Point Segment::getB() {
        return B;
    }

// METHODS
    double Segment::length() {
        return sqrt(pow(B.getX() - A.getX(), 2) + pow(B.getY() - A.getY(), 2));
    }

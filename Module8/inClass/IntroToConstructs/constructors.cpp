#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double a, b;

    void print();
    Point(double mA = 0.0, double mB = 0.0);
};

struct Triangle {
    Point a, b, c;

    Triangle(Point mA = {}, Point mB = {}, Point mC = {});
    void print();
};

double distance(Point pA, Point pB);

int main() {
        //  x1 y2    x2  y2
    Point a(-2, 1), b(3, 5);

    a.print();
    b.print();

    cout << "Distance between: " << distance(a, b) << endl;


    Point A(-2, 1), B(3,5), C(2,1);
    Triangle y(Point(-2,1), Point(3,5), Point(2,1));
    Triangle x(A,B,C);
    x.print();

    cout << "Distance between A & B (two point structs): " << distance(A, B) << endl;
    cout << "Distance between A & B: " << distance(x.a, x.b) << endl;
    cout << "Distance between B & C: " << distance(x.b, x.c) << endl;
    cout << "Distance between A & C: " << distance(x.a, x.c) << endl;


    return 0;
}

Point::Point(double mA, double mB) {
    a = mA;
    b = mB;
}

void Point::print() {
    cout << "( " << a << ", " << b << " )" << endl;
}

double distance(Point pA, Point pB) {
    return sqrt( pow(pB.a - pA.a, 2) + pow(pB.b - pA.b, 2));
}

Triangle::Triangle(Point mA, Point mB, Point mC){
    a = mA;
    b = mB;
    c = mC;
}
void Triangle::print() {
    cout << "Triangle formed by: " << endl;
    a.print();
    b.print();
    c.print();
}

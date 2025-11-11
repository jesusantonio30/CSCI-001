// Class Notes... Constructor day

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct Point {
    // properties
    double x, y;

    // methods
    Point(double argX = 0.0, double argY = 0.0);  // default constructor
    void print(void);

    double distToOrigin();
};

// regular c-type function
double distance(Point argA, Point argB);

struct Triangle {
    Point a, b, c;

    Triangle(Point argA = {}, Point argB = {}, Point argC = {});
    void print();
};

int main(void) {

    Point A(3, 2);
    A.print();
    cout << "Distance to origin: " << A.distToOrigin() << endl;


    Triangle x(Point(-2,1), Point(3,4), Point(2,1) );

    x.print();

    cout << "Distance between A and B: " << distance(x.a, x.b) << endl;
    cout << "Distance between B and C: " << distance(x.b, x.c) << endl;
    cout << "Distance between A and C: " << distance(x.a, x.c) << endl;


    return(0);
}

Triangle::Triangle(Point argA, Point argB, Point argC) {
    a = argA;
    b = argB;
    c = argC;
}
void Triangle::print() {
    cout << "Triangle formed by: " << endl;
    a.print();
    b.print();
    c.print();
}

double distance(Point argA, Point argB) {
    return sqrt( pow(argB.x - argA.x,2) + pow(argB.y - argA.y,2) );
}

Point::Point(double argX, double argY) {
    x = argX;
    y = argY;
}
void Point::print(void) {
    cout << "(" << x << ", " << y << ")" << endl;
}


double Point::distToOrigin() {
    return sqrt(pow(x, 2) + pow(y, 2));
}

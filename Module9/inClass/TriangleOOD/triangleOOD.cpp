// Class Notes... Constructor day

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct Point {
    
    double x, y;

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

    double perimeter();
    double semiPerimeter();
    double area();
};

int main(void) {

    Point A(-3, 2), B(3, 2), C(4, -5);

    Triangle myTri(A, B, C);

    myTri.print();
    cout << "Perimeter: " << myTri.perimeter() << endl;
    cout << "Semi-Perimeter: " << myTri.semiPerimeter() << endl;\
    cout << "Area: " << myTri.area() << endl;


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

double Triangle::perimeter() {
    return distance(a, b) + distance(b, c) + distance(c, a);
}

double Triangle::semiPerimeter() {
    return perimeter() / 2;
}

double Triangle::area() {
    double semiP = semiPerimeter();
    return sqrt( semiP * (semiP - distance(a, b)) * (semiP - distance(b, c)) * (semiP - distance(c, a)) );
}



double distance(Point argA, Point argB) {
                    //   x2 - x1          +       y2 - y1
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

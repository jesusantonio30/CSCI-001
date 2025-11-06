#include <iostream>

using namespace std;

struct Circle {
    double radius;
    const double PI = 3.14159;
    double h, k;
    string units;
    string fillColor;
    string strokeColor;

    Circle(double mRadius = 1.0, double mH = 0.0, double mK = 0.0, string mUnits = "cm", string mFillColor = "white", string mStrokeColor = "black");
    void printCircle();
    double perimeter();
    double area();
    double diameter();

};


int main() {

    Circle circleObj(5.6, 3, 4);

    circleObj.printCircle();
    cout << "Area: " << circleObj.area() << endl;
    cout << "Diamter: " << circleObj.diameter() << endl;
    

    return 0;
}

void Circle::printCircle() {
    cout << "(x - " << h << ")^2 + (" << "y - " << k << ")^2 = " << radius * radius << endl;
}

double Circle::diameter() {
    return 2 * radius;
}

double Circle::perimeter() {
    return 2 * PI * radius;
}

double Circle::area() {
    return PI * radius * radius;
}

Circle::Circle(double mRadius, double mH, double mK, string mUnits, string mFillColor, string mStrokeColor) {
    radius = mRadius;
    h = mH;
    k = mK;
    units = mUnits;
    fillColor = mFillColor;
    strokeColor = mStrokeColor;
}

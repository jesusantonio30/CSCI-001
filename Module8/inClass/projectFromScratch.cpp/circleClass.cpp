#include <iostream>

using namespace std;

struct Circle {
    double radius;
    const double PI = 3.14159;
    double h, k;
    string units;
    string fillColor;
    string strokeColor;

    void printCircle();
    double perimeter();
    double area();
    double diameter();

};


int main() {

    Circle circleObj;

    circleObj.radius = 5.6;
    circleObj.h = 3;
    circleObj.k = 4;

    circleObj.printCircle();
    circleObj.area();
    circleObj.diameter();
    

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

#include <iostream>
using namespace std;

const double PI = 3.14159;

double circleArea (double radius);
double circleCircumference(double radius);

int main() {

    double diameter;
    double radius;

    cout << "\n========================== CIRCLE CALC ==========================" << endl;

    cout << "\n\t\t Enter the circle's DIAMETER: ";
    cin >> diameter;

    radius = diameter / 2;

    cout << "\n\t\t\t  Radius: r = " << radius << endl;
    cout << "\tCircumference: P = " << "2*" << PI << '*' << radius << " = " << circleCircumference(radius) << " units" << endl;

    cout << "\n\t  Area: A = " << PI << '*' << radius << "^2" << " = " << circleArea(radius) << " square units" << endl;
    cout << "\n=================================================================" << endl;

    return 0;
}

// func to calculate Area
double circleArea (double radius){
    return PI * radius * radius;
}

// func to calculate Circumference
double circleCircumference(double radius){
    return 2 * PI * radius;
}

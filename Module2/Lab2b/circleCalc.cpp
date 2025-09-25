#include <iostream> 
using namespace std;

const double pi = 3.14159;

int main() {

    double diameter;
    double radius;
    double radiusSq;
    double area;

    cout << "\n========================== CIRCLE CALC ==========================" << endl;

    cout << "\n\t\t Enter the circle's DIAMETER: ";
    cin >> diameter;

    radius = diameter / 2;

    double circum = 2 * pi * radius;

    cout << "\n\t\t\t  Radius: r = " << radius << endl;
    cout << "\tCircumference: P = " << "2*" << pi << '*' << radius << " = " << circum << " units" << endl;

    radiusSq = radius * radius;
    area = pi * radiusSq;
    cout << "\n\t  Area: A = " << pi << '*' << radius << "^2" << " = " << area << " square units" << endl;
    cout << "\n=================================================================" << endl;

    return 0;
}

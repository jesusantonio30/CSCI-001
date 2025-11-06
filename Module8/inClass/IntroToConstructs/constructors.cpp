#include <iostream>
using namespace std;

struct Point {
    double a, b;

    void print();
    Point(double mA = 0.0, double mB = 0.0);
};

int main() {

    Point pt;

    pt.print();

    return 0;
}

Point::Point(double mA, double mB) {
    a = mA;
    b = mB;
}

void Point::print() {
    cout << "( " << a << ", " << b << " )" << endl;
}

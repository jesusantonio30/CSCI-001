#include <iostream>
using namespace std;

struct Point {
    double a, b;

    void print();
    int absolute_value();
    double distance();
};
int numOfPoints = 7;
double incA = 2;
double startA = -6;

int cubed(int val);

int main() {

    Point points;

    for (int i = 0; i < numOfPoints; i++) {
        points.a = incA * i + startA;
        points.b = cubed(points.a);
    }

    points.print();

    return 0;
}

void Point::print() {
    cout << "( " << a << ", " << b << " )" << endl; 
}

int cubed(int val) {
    return val * val * val;
}

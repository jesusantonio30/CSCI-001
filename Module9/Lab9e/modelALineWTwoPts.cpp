#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

struct Point {
    double x, y;

    Point(double mX = 0.0, double mY = 0.0);
    void printPoint();

};

struct Line {
    Point a, b;

    Line(Point mA = {}, Point mB = {});

    void printLine();
    double slope();
    double yIntercept();
    double evaluation(double mX);
};

int main() {

    Point a(42, 56);
    Point b(7, 36);
    Line myLine(a, b);

    cout << fixed << setprecision(2);
    myLine.printLine();

    return 0;
}

Point::Point(double mX, double mY) {
    x = mX;
    y = mY;
}

void Point::printPoint() {
    cout << "( " << x << ", " << y << " )" << endl;
}

Line::Line(Point mA, Point mB) {
    a = mA;
    b = mB;
}

void Line::printLine() {
    double y = yIntercept();
    if (y < 0) cout << "y = " << slope() << "x - " << -1 * y << endl;
    if (y > 0) cout << "y = " << slope() << "x + " << y << endl;
}

double Line::slope() {
    return (b.y - a.y) / (b.x - a.x);
}

double Line::yIntercept() {
    return a.y - (slope() * a.x);
}

double Line::evaluation(double mX) {
    return slope() * mX + yIntercept();
}


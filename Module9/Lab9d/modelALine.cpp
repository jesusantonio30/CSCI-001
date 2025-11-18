#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
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

    srand(time(0));

    vector<Line> lines;

    for (int i = 0; i < 5; i++) {
        double x1 = rand() % 10,
               x2 = rand() % 10,
               y1 = rand() % 10,
               y2 = rand() % 10;

        lines.push_back( Line( Point(x1, y1), Point(x2, y2) ) );
    }

    for (int i = 0; i < lines.size(); i++) {
        cout << "\n";
        cout << fixed << setprecision(2);
        lines[i].printLine();
        cout << "When x = " << lines[i].a.x << ", the y-value is " << lines[i].evaluation(lines[i].a.x) << endl;
    }

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


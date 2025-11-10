#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

// Structs --------------------------------------

struct Point {
    double x, y;

    Point(double mX = 0.0, double mY = 0.0);
    void print();
    int absoluteValue(Point a);
    double distance(Point a, Point b);
};

// Function Prototypes --------------------------

double cubed(double val);

void printPoints(vector<Point>& arg);

int main() {

    Point a, b;

    vector<Point> points;

    int start = -6;
    int end = 6;
    int incr = 2;

    for (int i = start; i <= end; i += incr) {
        Point point( i, cubed(i) );
        points.push_back(point);
    }

    printPoints(points);

    return 0;
}

// Function Implementations ---------------------

Point::Point(double mX, double mY) {
    x = mX;
    y = mY;
}

void Point::print() {
    cout << "( " << x << ", " << y << " )" << endl; 
}

int Point::absoluteValue(Point a) {
    return sqrt(pow(x, 2) + pow(y, 2));
}

double Point::distance(Point a, Point b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

    double cubed(double val) {
        return val * val * val;
    }

    void printPoints(vector<Point>& arg) {
        for (int i = 0; i < arg.size(); i++) {
            arg[i].print();
        }
    }

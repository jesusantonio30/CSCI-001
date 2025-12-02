#include <iostream> 
#include <cmath>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

class Point {
    private:
        double X, Y;

    public:
        Point(double x = 0, double y = 0);

        void setX(double argX);
        void setY(double argY);
        double getX();
        double getY();

        void print();
};

class Segment {
    private:
        Point A, B;

    public:
        Segment(Point a = {}, Point b = {});

        void setA(Point argA);
        void setB(Point argB);
        Point getA();
        Point getB();

        double length();
};

int main() {
    srand(time(0));

    vector<Segment> segments;

    int numOfSegments = 50;

    for (int i = 0; i < numOfSegments; ++i) {
        double randX1 = 1.0 * rand() / RAND_MAX;
        double randY1 = 1.0 * rand() / RAND_MAX;

        double randX2 = 1.0 * rand() / RAND_MAX;
        double randY2 = 1.0 * rand() / RAND_MAX;

        segments.push_back(Segment(Point(randX1, randY1), Point(randX2, randY2)));
    }

    cout << fixed << setprecision(2);

    for (int i = 0; i < segments.size(); i++) {

        cout << "\nLine Segment " << i + 1 << " -------------------" << endl;

        cout << "\nPoint A: ";
        segments[i].getA().print();

        cout << "Point B: ";
        segments[i].getB().print();
        cout << "Length: " << segments[i].length() << endl;
    }

    return 0;
}

// CONSTRUCTORS
    Point::Point(double x, double y) {
        setX(x);
        setY(y);
    }

    Segment::Segment(Point a, Point b) {
        setA(a);
        setB(b);
    }

// SETTERS
    void Point::setX(double argX) {
        X = argX;
    }

    void Point::setY(double argY) {
        Y = argY;
    }

    void Segment::setA(Point argA) {
        A = argA;
    }

    void Segment::setB(Point argB) {
        B = argB;
    }


// GETTERS
    double Point::getX() {
        return X;
    }

    double Point::getY() {
        return Y;
    }

    Point Segment::getA() {
        return A;
    }

    Point Segment::getB() {
        return B;
    }


// METHODS
    void Point::print() {
        cout << "( " << getX() << ", " << getY() << " )" << endl;
    }

    double Segment::length() {
        return sqrt(pow(B.getX() - A.getX(), 2) + pow(B.getY() - A.getY(), 2));
    }

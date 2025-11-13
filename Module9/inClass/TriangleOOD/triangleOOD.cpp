// Class Notes... Constructor day

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

class Point {

    private:
    
        double x, y;

    public:

        Point(double argX = 0.0, double argY = 0.0);  // default constructor

        void setX(double argX);
        void setY(double argY);

        double getX();
        double getY();

        void print(void);
        double distToOrigin();
        double randomize();
};

// regular c-type function
double distance(Point argA, Point argB);

class Triangle {

    private:

        Point a, b, c;
        string color;

    public:

        Triangle(Point argA = {}, Point argB = {}, Point argC = {});
        
        void setA(Point argA);
        void setB(Point argB);
        void setC(Point argC);
        void setColor(string argColor);

        Point getA();
        Point getB();
        Point getC();
        string getColor();


        void print();
        double perimeter();
        double semiPerimeter();
        double area();
};

int main(void) {

    Point A(-3, 2), B(3, 2), C(4, -5);

    Triangle myTri(A, B, C);

    myTri.print();
    cout << "Perimeter: " << myTri.perimeter() << endl;
    cout << "Semi-Perimeter: " << myTri.semiPerimeter() << endl;\
    cout << "Area: " << myTri.area() << endl;

    // =======================================================================

    vector<Triangle> randomTriangles;

    // Outer For Loop is responsible for generating 50 instances of randomized Triangle objects
    for (int i = 0; i < 50; i++) {

        vector<Point> trianglePoints;
        vector<string> colors = {"red", "orange", "yellow", "green", "blue", "indigo", "violet"};
        
        // Inner For Loop is responsible for generating 3 randomized Point objects
        for (int j = 0; j < 3; j++) {

            trianglePoints.push_back(Point(trianglePoints[i].randomize(), trianglePoints[i].randomize()));

        }

        Triangle x(trianglePoints[0], trianglePoints[1], trianglePoints[2]);
        x.setColor(colors[rand() % colors.size()]);

        randomTriangles.push_back(x);
    }

    for (int i = 0; i < randomTriangles.size(); i++) {
        cout << "\nTriangle " << i+1 << endl;
        randomTriangles[i].print();
    }


    return(0);
}

// ==================== POINTS ====================================

Point::Point(double argX, double argY) {
    setX(argX);

    setY(argY);
}

// SETTERS

void Point::setX(double argX) {
    x = argX;
}
void Point::setY(double argY) {
    y = argY;
}

// GETTERS

double Point::getX() {
    return x;
}
double Point::getY() {
    return y;
}

// REG. METHODS
void Point::print(void) {
    cout << "(" << getX() << ", " << getY() << ")" << endl;
}

double Point::distToOrigin() {
    return sqrt(pow(getX(), 2) + pow(getY(), 2));
}

double Point::randomize() {
    return rand() % 100;
}

// ==================== TRIANGLES ====================================

Triangle::Triangle(Point argA, Point argB, Point argC) {
    a = argA;
    b = argB;
    c = argC;
}
// SETTERS
void Triangle::setA(Point argA) {
    a = argA;
}
void Triangle::setB(Point argB) {
    b = argB;
}
void Triangle::setC(Point argC) {
    c = argC;
}
void Triangle::setColor(string argColor) {
    color = argColor;
}

// GETTERS
Point Triangle::getA() {
    return a;
}
Point Triangle::getB() {
    return b;
}
Point Triangle::getC() {
    return c;
}
string Triangle::getColor() {
    return color;
}

// REG. METHODS

void Triangle::print() {
    cout << "Triangle formed by: " << endl;
    getA().print();
    getB().print();
    getC().print();
    cout << getColor() << endl;
}

double Triangle::perimeter() {
    return distance(getA(), getB()) + distance(getB(), getC()) + distance(getC(), getA());
}

double Triangle::semiPerimeter() {
    return perimeter() / 2;
}

double Triangle::area() {
    double semiP = semiPerimeter();
    return sqrt( semiP * (semiP - distance(getA(), getB())) * (semiP - distance(getB(), getC())) * (semiP - distance(getC(), getA())) );
}

double distance(Point argA, Point argB) {
                    //   x2 - x1          +       y2 - y1
    return sqrt( pow(argB.getX() - argA.getX(),2) + pow(argB.getY() - argA.getY(),2) );
}

// Class Notes... Constructor day

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Point {
    
    double x, y;

    Point(double argX = 0.0, double argY = 0.0);  // default constructor
    void print(void);

    double distToOrigin();
};

// regular c-type function
double distance(Point argA, Point argB);

struct Triangle {
    Point a, b, c;
    string color;

    Triangle(Point argA = {}, Point argB = {}, Point argC = {});
    
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

            double x = rand() % 10;
            double y = rand() % 10;

            trianglePoints.push_back(Point(x, y));

        }

        // 
        Triangle x(trianglePoints[0], trianglePoints[1], trianglePoints[2]);
        x.color = colors[rand() % colors.size()];

        randomTriangles.push_back(x);
    }

    for (int i = 0; i < randomTriangles.size(); i++) {
        cout << "\nTriangle " << i+1 << endl;
        randomTriangles[i].print();
    }


    return(0);
}

Triangle::Triangle(Point argA, Point argB, Point argC) {
    a = argA;
    b = argB;
    c = argC;
}
void Triangle::print() {
    cout << "Triangle formed by: " << endl;
    a.print();
    b.print();
    c.print();
    cout << color << endl;
}

double Triangle::perimeter() {
    return distance(a, b) + distance(b, c) + distance(c, a);
}

double Triangle::semiPerimeter() {
    return perimeter() / 2;
}

double Triangle::area() {
    double semiP = semiPerimeter();
    return sqrt( semiP * (semiP - distance(a, b)) * (semiP - distance(b, c)) * (semiP - distance(c, a)) );
}



double distance(Point argA, Point argB) {
                    //   x2 - x1          +       y2 - y1
    return sqrt( pow(argB.x - argA.x,2) + pow(argB.y - argA.y,2) );
}

Point::Point(double argX, double argY) {
    x = argX;

    y = argY;
}
void Point::print(void) {
    cout << "(" << x << ", " << y << ")" << endl;
}


double Point::distToOrigin() {
    return sqrt(pow(x, 2) + pow(y, 2));
}

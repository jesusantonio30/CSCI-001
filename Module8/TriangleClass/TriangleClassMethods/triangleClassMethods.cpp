#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cmath>

using namespace std;

class Triangle {
    public:
        double sideA, sideB, sideC;
        string color;

        Triangle(double a = 1.0, double b = 1.0, double c = 1.0, string mColor = "white");
        
        void printProperties(void);
        double area(void);
        double perimeter(void);
};

bool triangleInequality(double a, double b, double c);



int main() {

    srand(time(0));

    double a, b, c;
    string color;

    vector<Triangle> triangleArr;

    while (triangleArr.size() < 50) {
        vector<string> colors = {"red", "orange", "yellow", "green", "blue", "indigo", "violet"};

        color = colors[rand() % colors.size()];
        a = 1.0 + 19.0 * rand() / RAND_MAX;
        b = 1.0 + 19.0 * rand() / RAND_MAX;
        c = 1.0 + 19.0 * rand() / RAND_MAX;

        if (triangleInequality(a, b, c)) {
            Triangle x(a, b, c, color);
            triangleArr.push_back(x);
        }
    }

    cout << fixed << setprecision(2);

    for (int i = 0; i < triangleArr.size(); i++) {
        cout << "\nTriangle " << i + 1 << endl;
        triangleArr[i].printProperties();
        cout << "Area: " << triangleArr[i].area() << endl;
        cout << "Perimeter: " << triangleArr[i].perimeter() << endl;
    }

    return 0;
}



bool triangleInequality(double a, double b, double c) {
    return a + b > c && a + c > b && b + c > a && a > 0 && b > 0 && c > 0;
}

Triangle::Triangle(double a, double b, double c, string mColor){
    sideA = a;
    sideB = b;
    sideC = c;
    color = mColor;
}

    void Triangle::printProperties(void){
        cout << "Side A: " << sideA << endl;
        cout << "Side B: " << sideB << endl;
        cout << "Side C: " << sideC << endl;
        cout << "Color: " << color << endl;
    }

    double Triangle::area(void){
        double semiPeri = (sideA + sideB + sideC) / 2;

        return sqrt(semiPeri * ((semiPeri - sideA) * (semiPeri - sideB) * (semiPeri - sideC)));
    }

    double Triangle::perimeter(void){
        return sideA + sideB + sideC;
    }


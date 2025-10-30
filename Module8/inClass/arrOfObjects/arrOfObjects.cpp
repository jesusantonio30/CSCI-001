#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Circle {
    double radius;
    const double PI = 3.14159;
    double h, k;
    string units;
    string fillColor;
    string strokeColor;

    void printCircle();
    double perimeter();
    double area();
    double diameter();

};

int main() {

    srand(time(NULL));

    const int size = 100;

    string units[5] = {"cm", "in", "m", "mm", "ft"};
    string colors[5] = {"red", "green", "blue", "black", "white"};

    Circle a[size];

    for (int i = 0; i < size; i++) {
        a[i].radius = rand() % 100;
        a[i].h = rand() % 10;
        a[i].k = rand() % 10;
        a[i].units = units[rand() % 5];
        a[i].fillColor = colors[rand() % 5];
        a[i].strokeColor = colors[rand() % 5];
    }

    for (int i = 0; i < size; i++) {
        a[i].printCircle();
    }


    return 0;
}

void Circle::printCircle() {
    cout << "\nDiameter: " << diameter() << units << endl;
    cout << "Perimeter: " << perimeter() << units << endl;
    cout << "Area: " << area() << units << endl;
    cout << "Color: " << fillColor << " and stroke " << strokeColor << endl;
}

double Circle::diameter() {
    return 2 * radius;
}

double Circle::perimeter() {
    return 2 * PI * radius;
}

double Circle::area() {
    return PI * radius * radius;
}

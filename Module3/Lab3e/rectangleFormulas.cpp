#include <iostream>
using namespace std;

float rectangleArea(float l, float w);
float rectanglePerimeter(float l, float w);

int main() {
    float length;
    float width;


    cout << "Rectangle Area: l * w" << endl;
    cout << "Rectangle Perimeter: P = 2(l + w)" << endl;

    cout << "Enter length: ";
     cin >> length;

    cout << "Enter width: ";
     cin >> width;

    cout << "Rectangle Area: " << length << " * " << width << " = " << rectangleArea(length, width) << endl;
    cout << "Rectangle Perimeter: " << "2 ( " << length << " + " << width << " ) = " << rectanglePerimeter(length, width) << endl;

    
    return 0;
}

float rectangleArea(float l, float w) {
    return l * w;
}

float rectanglePerimeter(float l, float w) {
    return 2 * (l + w);
}

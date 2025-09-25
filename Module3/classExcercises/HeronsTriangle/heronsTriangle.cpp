
// Heron's Formula

/* 
    Can't randomly add numbers and expect it to equal a triangle
        - a + b > c
        - b + c > a
        - c + a > b
*/


#include <iostream> 
#include <cmath> 
using namespace std;

double triangleArea( double a, double b, double c );

int main() {

    double sideA, sideB, sideC;

    double Area;


    cout << "Enter side a: ";
    cin >> sideA;

    cout << "Enter side b: ";
    cin >> sideB;

    cout << "Enter side c: ";
    cin >> sideC;

    cout << "You entered a: " << endl;
    cout << "You entered b: " << endl;
    cout << "You entered c: " << endl;

    Area = triangleArea(sideA, sideB, sideC);

    if (Area == -1) {
        cout << "No Triangle Possible!" << endl;
    } else {
        cout << "Area = " << Area << endl;
    }

    return 0;
}

double triangleArea( double a, double b, double c ) {
    // Fix the triangle inequality

    if ( a + b <= c) {
        // a sentinel value; can't occur naturally
        return -1;

    } else if (a + c <= b) {
        return -1;

    } else if (b + c <= a) {
        return -1;

    }
    
    

    double Area;
    double s = (a + b + c) /2;

    Area = sqrt( s * (s - a) * ( s - b ) * ( s - c ));

    return Area;
}

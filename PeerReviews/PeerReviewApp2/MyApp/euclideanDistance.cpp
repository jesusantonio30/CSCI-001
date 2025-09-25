#include <iostream>
#include <cmath>

using namespace std;

double euclideanDistanceFunc(double x1, double x2, double y1, double y2);

int main() {

    // VARIABLES
    double x1, x2, y1, y2;

    
    cout << "\n=====================================" << endl;
    cout << "Euclidean Distance Calculator" << endl;
    cout << "=====================================\n" << endl;


    // COORDINATES
    cout << "Enter x-coordinate 1: ";
    cin >> x1;

    cout << "Enter x-coordinate 2: ";
    cin >> x2;

    cout << "Enter y-coordinate 1: ";
    cin >> y1;

    cout << "Enter y-coordinate 2: ";
    cin >> y2;


    // SUMMARY
    cout << "\n--- Distance Summary ---" << endl;
    cout << "Formula Explanation: The Euclidean distance is the straight-line distance between two points in a plane, calculated as sqrt((x2 - x1)^2 + (y2 - y1)^2)." << endl;

    cout << "\nFormula: sqrt((" << x2 << " - " << x1 << ")^2 + (" << y2 << " - " << y1 << ")^2)" << endl;
        cout << "\n\tPoint 1: (" << x1 << ", " << y1 << ")" << endl;
        cout << "\tPoint 2: (" << x2 << ", " << y2 << ")" << endl;
    cout << "\nEuclidean Distance: " << euclideanDistanceFunc(x1, x2, y1, y2) << " units" << endl;

    cout << "\n=====================================\n" << endl;

    return 0;
}

// FUNCTION
double euclideanDistanceFunc(double x1, double x2, double y1, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

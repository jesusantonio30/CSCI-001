#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    char runAgain;

    do {
        double a, b, c;

        cout << "\n*********************************************\n" << endl;
        cout << "Enter coefficients for the quadratic formula: " << endl;

        cout << "\n\ta: ";
        cin >> a;

        cout << "\tb: ";
        cin >> b;

        cout << "\tc: ";
        cin >> c;

        cout << "\n*********************************************" << endl;

        cout << fixed << setprecision(0);
        if (a == 1) {
            cout << "\nEquation:  " << "x^2";
        } else if (a == -1) {
            cout << "\nEquation:  " << "-x^2";
        } else {
            cout << "\nEquation:  " << a << "x^2";
        }
        if (b < 0) {
            cout << " - " << -1 * b << "x";
        } else {
            cout << " + " << b << "x";
        }
        if (c < 0) {
            cout << " - " << -1 * c;
        } else {
            cout << " + " << c;
        }

        cout << " = 0" << endl;

        double discriminant = pow(b,2) - 4 * a * c;

        if (discriminant > 0) {
            cout << "Has roots:  ";
            cout << "x = " << (-1 * b - sqrt(discriminant)) / (2 * a);
            cout << " and x = " << fixed << setprecision(4) << (-1 * b + sqrt(discriminant)) / (2 * a) << endl;
        } else if (discriminant == 0) {
            cout << "x = " << -1.0 * b / (2 * a) << endl;
        } else {
            cout << "Has roots:  ";
            cout << fixed << setprecision(4);
            cout << "x = " << fixed << setprecision(3) << -1 * b / (2 * a) << " + " << fixed << setprecision(4) << sqrt(-1.0 * discriminant) / (2 * a) << "i and ";
            cout << "x = " << fixed << setprecision(3) << -1 * b / (2 * a) << " - " << fixed << setprecision(4) << sqrt(-1.0 * discriminant) / (2 * a) << "i" << endl;
        }

        cout << "\n*********************************************" << endl;
        cout << "\nWould you like to run again (y or n)? ";
        cin >> runAgain;

    } while (runAgain == 'y');
    
    return 0;
}

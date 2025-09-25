#include <iostream>
#include <cmath>

using namespace std;

double discriminantCalc(double a, double b, double c);

int main() {

    double a, b, c, discriminant;

    cout << "\n\n===============================" << endl;
    cout << "    Quadratic Discriminant" << endl;
    cout << "===============================\n\n" << endl;


    cout << "----- ax^2 + bx + c = 0 -----" << endl;

    cout << "\n\n- Enter coefficients -\n" << endl;

    cout << "\ta: ";
    cin >> a;

    cout << "\tb: ";
    cin >> b;

    cout << "\tc: ";
    cin >> c;

    discriminant = discriminantCalc(a, b, c);

    if (discriminant > 0) {
        cout << "\nTwo real solutions.\n" << endl;
    } else if (discriminant == 0) {
        cout << "\nOne real solution.\n" << endl;
    } else {
        cout << "\nTwo complex solutions.\n" << endl;
    }

    return 0;
}

double discriminantCalc(double a, double b, double c) {
    return pow(b,2) - 4 * a * c;
}

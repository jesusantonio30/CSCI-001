#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float quadraticFunc(float x);

int main () {

    double x;

    cout << "For function: f(x) = 3x^2 - 2x + 1" << endl;
    cout << "Enter an x-value: ";
     cin >> x;
    cout << fixed << setprecision(2) << "Result: f(" << x << ") = 3(" << x << ")^2 - 2(" << x << ") + 1 = " << quadraticFunc(x) << endl;
    return 0;
}

float quadraticFunc(float x) {
    return 3 * pow(x, 2) - 2 * x + 1;
}

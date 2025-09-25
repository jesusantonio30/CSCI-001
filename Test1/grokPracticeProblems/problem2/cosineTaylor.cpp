#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double factorial(int term);

int main() {

    double x;
    int n;
    double sum = 0;

    cout << "Enter x for radians: ";
    cin >> x;
    cout << "Enter number of terms: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        sum += (pow(-1, i)) * (  (pow(x, (2 * i)))/(factorial(2*i))  );
    }
    cout << "cos(" << x << ") = " << fixed << setprecision(3) << sum << endl;
    return 0;
}

double factorial(int term) {
    double result = 1;
    for (int i = 1; i <= term; i++) {
        result = result * i;
    }
    return result;
}

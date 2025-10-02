#include <iostream>

using namespace std;

int main() {

    char runAgain;

    do {
        float a, b, c;

        cout << "Enter a: ";
        cin >> a;

        cout << "Enter b: ";
        cin >> b;

        cout << "Enter c: ";
        cin >> c;

        if (b < 1) {
            cout << "Your equation: " << a << "x - " << -1 * b << " = " << c << endl;
        } else {
            cout << "Your equation: " << a << "x + " << b << " = " << c << endl;
        }

        cout << "First step: " << a << "x = " << c - b << endl;

        cout << "Second step: " << "x = " << (c - b) / a << endl;

        cout << "Run again? (y/n): ";
        cin >> runAgain;

    } while (runAgain == 'y');

    return 0;
}

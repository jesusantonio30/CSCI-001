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

        cout << '\n';

        if (b < 1) {
            cout << "Your equation:\t" << a << "x - " << -1 * b << " = " << c << endl;
        } else {
            cout << "Your equation:\t" << a << "x + " << b << " = " << c << endl;
        }

        cout << "First step:\t" << a << "x = " << c - b << endl;

        cout << "Second step:\t" << "x = " << (c - b) / a << endl;

        cout << "\nWould you like to run again (y or n)? ";
        cin >> runAgain;

    } while (runAgain == 'y');

    return 0;
}

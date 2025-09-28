#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int factorial(int num);

int main() {

    char runAgain;

    cout << "\n==== Calculate Powers of e ====\n" << endl;

    do {
        int t, n;
        double sum = 1;

        cout << "Enter for t: ";
        cin >> t;

        cout << "Enter for n: ";
        cin >> n;

        for (int i = 1; i <= n; i++) {
            sum += ( pow(t, i)/ factorial(i) );
        }

        cout << "e^" << t << " = " << fixed << setprecision(3) << sum << endl;

        cout << "Run Again? (y/n): ";
        cin >> runAgain;

    } while (tolower(runAgain) == 'y');

    
    return 0;
}

int factorial(int num) {

    int sum = 1;

    for (int i = num; i >= 1; i--) {
        sum *= i;
    }
    return sum;
}

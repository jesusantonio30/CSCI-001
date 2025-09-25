#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// GLOBAL VAR
double t;
double n;

// Signatures
double factorial(int n);

int main() {

    double sum = 0;

    cout << "Enter a power t: ";
    cin >> t;

    cout << "Enter number of terms: ";
    cin >> n;

    for (int i = 0; i <= n; i++) {
        sum = sum + pow(t, i) / factorial(i);
    }  
    
    cout << "e^" << t << " = " << fixed << setprecision(3) << sum << endl;
    

    return 0;
}

double factorial(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}



#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int factorial(int term);

int main() {

    int n;
    double x;

    double sum;


    cout << "Enter angle x (radians): ";
    cin >> x;

    cout << "Enter number of terms: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        sum += pow(-1, i) * ((pow(x, (2 * i) + 1) / factorial((2 * i) + 1))); 
    }

    cout << "sin(" << fixed << setprecision(1) << x << ") = " << fixed << setprecision(3) << sum << endl;

    return 0;
}

int factorial(int term) {   

    int result = 1;

    // or int i = 1; i <= term; i++
        for (int i = term; i > 1; i--) {
            result = result * i;
        }

        return result;
}


// i = 1 
// 2 > 1
// will decrement; i = 1
// result = 120 



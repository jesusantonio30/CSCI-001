#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double factorial(int term);

int main() {

    double x;
    int n;
    double sum = 0;

    cout << "Enter exponent x: ";
    cin >> x;

    cout << "Enter number of terms n: ";
    cin >> n;

    for (int i = 0; i < n; i++){
        sum += (  ( pow(x * log(2), i) ) / ( factorial(i) )  );
    }

    cout << "2^" << x << " = " << fixed << setprecision(3) << sum << endl;
    return 0;
}


double factorial(int term){
    double result = 1;
    for (int i = 1; i <= term; i++) {
        result = result * i;
    }
    return result;
}

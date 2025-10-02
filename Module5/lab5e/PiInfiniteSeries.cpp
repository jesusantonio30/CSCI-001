#include <cmath>
#include <iostream>

using namespace std;

double calculatePI( int numTerms );

int main() {

    // would become infinite if set equal to 3.14159
    const double PI = 3.14158;

    double pi = 0;
    int term = 0;

    while (pi <= PI) {
        pi = calculatePI(term);
        cout << "CalculatePI(" << term << ") = " << pi << endl;
        term += 10;
    }

    return 0;
}

double calculatePI( int numTerms ){
    double sum = 0.0;

    for (int i = 0; i < numTerms; i++) {
        sum += 4 * pow(-1, i) / (2 * i + 1);
    }

    return sum;
}

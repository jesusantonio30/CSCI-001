#include <iostream> 
#include <iomanip>
#include <cmath>

using namespace std;

// pow(x, y)
// x is the base
// y is the power

float compoundInterestCalc ( float P, float r, int n, float t);

int main() {

    float initialBalance;
    float interest;
    float interestRate;
    int compoundRate;
    float timeAmount;

    cout << "Initial balance: ";
    cin >> initialBalance;

    cout << "\nAPR: ";
    cin >> interest;

    interestRate = interest / 100;

    cout << "\nCompound Rate: ";
    cin >> compoundRate;

    cout << "\nAmount of time to be saved: ";
    cin >> timeAmount;

    cout << fixed << setprecision(2);
    cout << "In " << timeAmount << ", you will have " << compoundInterestCalc(initialBalance, interestRate, compoundRate, timeAmount) << endl;
    
    return 0;
}

/*
    A = P(1+r/n)^nt

*/

float compoundInterestCalc ( float P, float r, int n, float t) {
    // return pow(P * ( 1 + (r / n) ), (n * t));
    return P * pow(1 + r / n, n * t);
}

#include <iostream>

using namespace std;

int main() {

    int beginningInt, endingInt, sum = 0;

    cout << "\n========== Accumulate Integers ==========" << endl;

    cout << "Instructions: " << endl;
    cout << "   1. User will enter an integer to begin from." << endl;
    cout << "   2. User will then enter amount of integers to add." << endl;
    cout << "   e.g. user wants to add the first FIVE integers: " << endl;
    cout << "   ->   1+2+3+4+5 = 15" << endl;

    cout << "\nEnter integer to start from: ";
    cin >> beginningInt;

    cout << "Enter ending integer: ";
    cin >> endingInt;

    if (beginningInt > endingInt) {
        for (int i = beginningInt; i >= endingInt; i--) {
            sum += i;
            if (i == endingInt) {
                cout << i;
            } else {
                cout << i << " + ";
            }
        }
    } else {
        for (int i = beginningInt; i <= endingInt; i++) {
            sum += i;
            if (i == endingInt) {
                cout << i;
            } else {
                cout << i << " + ";
            }
        }
    }

    cout << " = " << sum << endl;



    return 0;
}

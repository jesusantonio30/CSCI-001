#include <iostream>

using namespace std;

int main() {

    int beginningInt, intToAdd, endingInt, sum = 0;
    char restart;

    cout << "\n========== Accumulate Integers ==========" << endl;

    cout << "Instructions: " << endl;
    cout << "   1. User will enter an integer to begin from." << endl;
    cout << "   2. User will then enter amount of integers to add." << endl;
    cout << "   e.g. user wants to add the first FIVE integers: " << endl;
    cout << "   ->   1+2+3+4+5 = 15" << endl;

    do {
        sum = 0;


        cout << "\nEnter integer to start from: ";
        cin >> beginningInt;

        cout << "Enter amount of integers to add: ";
        cin >> intToAdd;

        endingInt = beginningInt + intToAdd;

    
        if (beginningInt == 0) {
            for (int i = beginningInt; i < endingInt; i++) {
                sum += i;
                cout << i;
                if (i != (endingInt - 1)) cout << " + ";
            }
        } else {
            for (int i = beginningInt; i < endingInt; i++) {
                sum += i;
                cout << i;
                if (i != (endingInt - 1)) cout << " + ";
            }
        }

        cout << " = " << sum << endl;

        cout << "\nRestart? (y/n): ";
        cin >> restart;


        
    } while (tolower(restart) == 'y');



    return 0;
}

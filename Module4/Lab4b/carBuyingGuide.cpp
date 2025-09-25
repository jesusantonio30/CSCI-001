#include <iostream>

using namespace std;

int main() {

    int userAge;

    cout << "\n===========================================" << endl;
    cout << "\nWelcome to the greatest Car Buying Guide!" << endl;

    cout << "\n\nWhat is your age?: ";
    cin >> userAge;
    cout << '\n' << endl;

    if (userAge < 40) {
        cout << "=== Life stage 1 ===\n" << endl;
            if (userAge < 25) {
                cout << "Buy a Ford Focus" << endl;
            } else {
                cout << "Buy a minivan" << endl;
            }
    } else if (userAge >= 40) {
        cout << "=== Life stage 2 ===\n" << endl;
            if (userAge < 55) {
                cout << "Buy a Corvette" << endl;
            } else {
                cout << "Buy a Lincoln Town car" << endl;
            }
    }

    cout << "\n===========================================" << endl;

    return 0;
}

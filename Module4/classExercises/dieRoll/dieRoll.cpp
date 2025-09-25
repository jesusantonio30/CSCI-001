#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int dieRoll();

int main() {

    int diceAmt;
    srand(time(0));

    cout << "Enter how many dice to roll, up to 6: ";
    cin >> diceAmt;

    switch(diceAmt) {
        case 1: 
            cout << "Roll " << diceAmt << " time(s)" << endl;
            cout << "Die roll: " << dieRoll() << endl;
            break;
        case 2: 
            cout << "Roll " << diceAmt << " time(s)" << endl;
            cout << "Die roll: " << dieRoll() + dieRoll() << endl;
            break;
        case 3: 
            cout << "Roll " << diceAmt << " time(s)" << endl;
            cout << "Die roll: " << dieRoll() + dieRoll() + dieRoll() << endl;
            break;
        case 4: 
            cout << "Roll " << diceAmt << " time(s)" << endl;
            cout << "Die roll: " << dieRoll() + dieRoll() + dieRoll() + dieRoll() << endl;
            break;
        case 5: 
            cout << "Roll " << diceAmt << " time(s)" << endl;
            cout << "Die roll: " << dieRoll() + dieRoll() + dieRoll() + dieRoll() + dieRoll() << endl;
            break;
        case 6: 
            cout << "Roll " << diceAmt << " time(s)" << endl;
            cout << "Die roll: " << dieRoll() + dieRoll() + dieRoll() + dieRoll() + dieRoll() + dieRoll() << endl;
            break;
        default:
            cout << "Invalid input. Enter a number between 1 and 6." << endl;
            break;
    }

    return 0;
}

int dieRoll() {
    return 1 + rand() % 6;
};

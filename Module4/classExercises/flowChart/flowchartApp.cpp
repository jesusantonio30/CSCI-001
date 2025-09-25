    //Diamonds = decision
    // Recatngle = do something
    // small circle = end program

     // get random fractions
    // 1.0 * rand()/RAND_MAX 
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int dieRoll();

int main() {

    // only seed once
    srand(time(0));

    /*
            //rand return an integer between 0 to RAND_MAX, inclusive.
            // RAND_MAX is a constant, also defined in <cstdlib>, typically set to at least 32,767 (2^15 - 1) but may vary depending on the implementation.

            // rand() = 0 to 32,767
            // % 10 returns a remainder of 9, add one to get 10
            // results in range 1 to 10
        int randNum = 1 + rand() % 10;
        int guess;

        cout << "Guess a number from 1 to 10: ";
        cin >> guess;

        if (guess < randNum) {
            cout << "too low." << endl;
        } else if (guess >= randNum) {
            if (guess == randNum) {
                cout << "You got it!" << endl;
            } else {
                cout << "Too high!" << endl;
            }
        }

        cout << "Guess was: " << guess << endl;
    */

    dieRoll();

    cout << "Roll the die: " << dieRoll() << endl;
    cout << "Roll two die (sum): " << dieRoll() + dieRoll() << endl;

    return 0;
};

int dieRoll() {
    return 1 + rand() % 6;
}

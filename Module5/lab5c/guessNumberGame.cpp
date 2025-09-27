#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int randNumGen();
bool runAgain();

char userResponse;
int numOfGuesses = 0;


int main() {

    srand(time(0));

    int userGuess;

    do {

        int answer = randNumGen();
        bool tryAgain;

        do {
            cout << "\n\n=====================================\n";
            cout << "\nChoose a number from 1 to 100: ";

            cin >> userGuess;
            numOfGuesses++;

            if (userGuess >= answer) {
                if (userGuess == answer) {
                    cout << "You got it!" << endl;
                    tryAgain = false;
                } else {
                    cout << "--- You're too high, try again ---\n" << endl;
                    cout << "=====================================\n";
                    tryAgain = true;
                }
            } else {
                cout << "--- You're too low, try again ---\n" << endl;
                cout << "=====================================\n";
                tryAgain = true;
            }
        } while (tryAgain);

        cout << "Number of guesses: " << numOfGuesses << endl;
        cout << "\n=====================================\n";

        cout << "Do you want to play again (y/n)? ";
        cin >> userResponse;

    } while (runAgain());

    return 0;
}


int randNumGen() {
    return 1 + rand() % 100;
}

bool runAgain() {
    if (userResponse == 'y') {
        numOfGuesses = 0;
        return true;
    } else {
        return false;
    }
}


/*
    1. choose a nummber between 1 and 100
    2. if number is too high, say too high
    3. if too low, say too low
    4. if guess is correct, say you got it.
    5. ask if user wants to play again
*/

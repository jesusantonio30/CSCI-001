// Program Template

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

//Function Prototypes
bool runAgain(void);
int dieRoll();


int main() {

    int dieRollSum;

    srand(time(0));

    cout << "For Loop Practice" << endl;

    
    do {

        int dieRollSum = 0;

        for (int i = 0; i <= 10; i++) {
            int dieRollOne = dieRoll();
            int dieRollTwo = dieRoll();
            cout << "======================================" << endl;
            cout << "First die roll " << dieRollOne << endl;
            cout << "second die roll " << dieRollTwo << endl;

            dieRollSum = dieRollSum + (dieRollOne + dieRollTwo);
            cout << "the sum of both die rolls is " << dieRollSum << endl;
            cout << "======================================\n\n" << endl;
        }

        cout << "The total sum is " << dieRollSum << endl;
        cout << "The average is " << dieRollSum / 10 << endl;

        
    } while (runAgain());

    cout << "App is done!" << endl;

    return(0);
}




// Function Implementation
bool runAgain(void) {
    char userResponse;

    cout << "\nWould you like to run again (y or n): ";
    cin >> userResponse;
    cin.ignore(); // to clean up the input stream

    if (userResponse == 'y' || userResponse == 'Y')
    return(true);

    return(false);
}

int dieRoll() {

    return 1 + rand() % 6;
};

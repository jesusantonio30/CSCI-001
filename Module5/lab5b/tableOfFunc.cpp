#include <iostream>

using namespace std;

int funcF(int x);
bool runAgain();

int userInputStart, userInputEnd;

int main () {

    do {
        cout << "Enter number to start: ";
        cin >> userInputStart;

        cout << "Enter number to end: ";
        cin >> userInputEnd;

        cout << " x  |   y" << endl;
        cout << "----------" << endl;

        for (int i = userInputStart; i <= userInputEnd; i++) {
            if (i < 0) {
                cout << i << "  |   " << funcF(i) << endl;
            } else if (i >= 10) {
                cout << i << "  |   " << funcF(i) << endl;
            }else {
                cout << ' ' << i << "  |   " << funcF(i) << endl;
            }
        }

    } while (runAgain());

    return 0;
}

int funcF(int x){
    return 5 * (x * x) - (x)+7;
}

bool runAgain() {
 char userResponse;

 cout << "\nWould you like to run again (y or n): ";
 cin >> userResponse;
 cin.ignore(); // to clean up the input stream

 if (userResponse == 'y' || userResponse == 'Y')
 return(true);

 return(false);
}

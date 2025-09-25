#include <iostream>
 using namespace std;

 bool runAgain();

int main() {
    int sum;
    cout << "\nHello For Loops\n";

    do {
        sum = 0;
        for (int i = 0; i <= 100; i++) {
            cout << "i = " << i << endl;
            sum = sum + i;
        }
        cout << "The sum is: " << sum << endl;
    } while(runAgain());
    return 0;
}

bool runAgain(void) {
 char userResponse;

 cout << "\nWould you like to run again (y or n): ";
 cin >> userResponse;
 cin.ignore(); // to clean up the input stream

 if (userResponse == 'y' || userResponse == 'Y')
 return(true);

 return(false);
}


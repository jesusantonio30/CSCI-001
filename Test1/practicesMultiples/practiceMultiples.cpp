// Program Template

#include <iostream>
using namespace std;

//Function Prototypes
bool runAgain(void);


int main() {

    int a, calc, sum = 0;


 do {

    sum = 0;

    cout << "\nEnter integer: ";
    cin >> a;

    cout << "For a = " << a << endl;

    cout << "The multiples are: ";

    for (int i = 1; i <= 12; i++) {
        calc = i * a;
        sum += (calc);
        if (i < 12) {
            cout << calc << ", ";
        } else {
            cout << calc << endl;
        }
    }

    cout << "Sum: " << sum << endl;

 } while (runAgain());



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

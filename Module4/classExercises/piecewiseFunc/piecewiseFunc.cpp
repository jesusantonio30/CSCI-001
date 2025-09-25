// Piecewise Function

#include <iostream>
#include <cmath>
using namespace std;

//Function Prototypes
bool runAgain(void);
double f(double x);


int main() {
 double userNum;

 do {

 cout << "======= Piecewise Function! =======\n" << endl;

 cout << "Enter a value to calculate: ";
 cin >> userNum;
 cin.ignore();

 cout << "Answer: " << "f( " << userNum << " ) = " << f(userNum) << endl;

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

 if (userResponse == 'y' || userResponse == 'Y') {
    return(true);
 }

 return(false);
}

double f(double x) {
    if (x > 0) {
        return 2 * pow(x,2) - 1;
    } else if (x == 0) {
        return 3;
    } else {
        return -1 * x + 1;
    }
}

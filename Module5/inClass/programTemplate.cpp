// Program Template

#include <iostream>
using namespace std;

//Function Prototypes
bool runAgain(void);


int main() {

 cout << "Code that does not loop goes here!" << endl;


 do {

 cout << "Looped code goes here!" << endl;

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

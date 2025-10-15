// String Notes
#include <iostream>
#include <string>
using namespace std;

//Function Prototypes
bool runAgain(void);

int main() {

 int i = 0;

 char a[] = "mississippi"; //null terminated char array.
 string b = "california"; //string object

 cout << "c-string: \t" << a << endl;
 cout << "c++ string: \t" << b << endl;

 cout << "\n\nCan access each charactor using array index notation.\n" << endl;
 a[0] = toupper(a[0]);
 b[0] = toupper(b[0]);

 cout << "c-string: \t" << a << endl;
 cout << "c++ string: \t" << b << endl;

 cout << "\n\nThe null indicates the end of a c-string. \n" << endl;

 while (a[i] != '\0') {
 cout << a[i] << "_";
 i++;
 }

 cout << "\n\nStrings have a size method within the class.\n" << endl;
 for (int j = 0; j< b.size(); j++)
 cout << b[j] << "_";

 cout << "\n\nPart II***************************" << endl;
 // A random sentence generator.

 string myDescription[3] = { "good", "bad", "ugly" };
 string myNoun[3] = { "gunfighter", "outlaw", "sheriff" };

 cout << "You are a " << myDescription[0] << " " << myNoun[0] << "!" << endl;
 cout << myDescription[0][3] << "_" << myNoun[0][4] << "_" << myDescription[2][1] << endl;

 do {

 cout << "\nYou are a " << myDescription[rand() % 3] << " " << myNoun[rand() % 3] << "!" << endl;

 } while (runAgain());


 return(0);
}

// Function Implementation
bool runAgain(void) {
 char userResponse;

 cout << "\nWould you like to run again (y or n): ";
 cin >> userResponse;

 if (userResponse == 'y')
 return(true);

 return(false);
}

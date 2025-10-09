// #include <iostream>
// using namespace std;

// bool runAgain(void);

// int main(void) {
//  int n;
//  char myCString[] = "Hello World";

//  do {
//  // original string
//  cout << myCString << endl; // reference

//  // index explorer
//  cout << "\nEnter an index: ";
//  cin >> n;

//  cout << myCString[n] << endl; // elements from n onwards
 
 
//  } while (runAgain());

//  return (0);
// }
// bool runAgain(void) {
//  char userResponse;

//  cout << "\nWould you like to run again (y or n): ";
//  cin >> userResponse;

//  if (userResponse == 'y' || userResponse == 'Y')
//  return(true);

//  return(false);
// }


// ==========================================================================================================


// String Notes
#include <iostream>
#include <string>
using namespace std;

//Function Prototypes
bool runAgain(void);

int main() {

//  int i = 0;

//  char a[] = "mississippi"; //null terminated char array.
//  string b = "california"; //string object

//  cout << "c-string: \t" << a << endl;
//  cout << "c++ string: \t" << b << endl;

//  cout << "\n\nCan access each charactor using array index notation.\n" << endl;
//  a[0] = toupper(a[0]);
//  b[0] = toupper(b[0]);

//  cout << "c-string: \t" << a << endl;
//  cout << "c++ string: \t" << b << endl;

//  cout << "\n\nThe null indicates the end of a c-string. \n" << endl;

//  while (a[i] != '\0') {
//  cout << a[i] << "_";
//  i++;
//  }

//  cout << "\n\nStrings have a size method within the class.\n" << endl;
//  for (int j = 0; j< b.size(); j++)
//  cout << b[j] << "_";

//  cout << "\n\nPart II***************************" << endl;
//  // A random sentence generator.


// cout << "You are a " << myDescription[0] << " " << myNoun[0] << "!" << endl;
// cout << myDescription[0][3] << "_" << myNoun[0][4] << "_" << myDescription[2][1] << endl;

 const int size = 3;
 string myAdverb[size] = { "quickly", "quietly", "freely"};
 string myAdjective[size] = {"efficient", "complex", "dynamic" };
 string myVerb[size] = { "jump", "run", "trips"};
 string mySubject[size] = { "computer", "user", "school board"};
 string myNoun[size] = { "professor", "schools", "monitor"};

 cout << "/nMad lib Sentence Generator" << endl;

 do {

 cout << "\nMr. Redden is " << myAdverb[rand() % 3] << " " << myAdjective[rand() % 3] << "!";
 cout << "\nHe " << myVerb[rand() % 3] << " " << mySubject[rand() % 3] << " so well that all the " << myNoun[rand() % 3];
 cout << "\nEven Mr. Banuelos said it was the best class he's ever seen!\n\n";

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


// 0 = 0 + 2 * 0
// 0 = 0 + 2 * 1
// 2 = 2 + 2 * 2
// 6 = 6 + 2 * 3
// 12 = 12 + 2 * 4
// 20

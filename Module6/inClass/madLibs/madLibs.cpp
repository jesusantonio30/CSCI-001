#include <iostream>
#include <string>

using namespace std;

bool runAgain(void);

int main() {
    const int size = 3;
    string myAdverb[size] = { "extremely", "hilariously", "surprisingly"};
    string myAdjective[size] = {"brilliant", "chaotic", "mysterious" };
    string myVerb[size] = { "teaches", "juggles", "invents"};
    string mySubject[size] = { "C++", "Math", "object-oriented programming"};
    string myNoun[size] = { "students cheer", "computers explode", "students won't have to worry about AI taking their jobs"};

    cout << "/nMad lib Sentence Generator" << endl;

    do {

    cout << "\nMr. Redden is " << myAdverb[rand() % 3] << " " << myAdjective[rand() % 3] << "!";
    cout << "\nHe " << myVerb[rand() % 3] << " " << mySubject[rand() % 3] << " so well that all the " << myNoun[rand() % 3] << ". ";
    cout << "\nEven Mr. Banuelos said it was the best class he's ever seen!\n\n";

    } while (runAgain());


    return(0);
}

bool runAgain(void) {
 char userResponse;

 cout << "\nWould you like to run again (y or n): ";
 cin >> userResponse;

 if (userResponse == 'y')
 return(true);

 return(false);
}

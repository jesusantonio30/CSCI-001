#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int evenOdd();
bool runAgain();

int trials = 1000000;

int main() {

    srand(time(0));

     do {

        int success = 0;

        for (int i = 0; i < trials; i++) {
            if (evenOdd() % 2 == 1) {
                success++;
            }
        }

        cout << "Prob of odd: " << (1.0 * success / trials) * 100 << '%' << endl;

    } while (runAgain());

    cout << "Function call: " << evenOdd() << endl;

    return 0;
}

int evenOdd(){

    int x = 1 + rand() % 10;
    if (x <= 1) return 2 * (1+rand() % 50);
    else return 2 * (rand() % 50) + 1;

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

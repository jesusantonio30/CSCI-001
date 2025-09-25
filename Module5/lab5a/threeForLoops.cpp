#include <iostream>

using namespace std;

/*
    My favorite looping structure is the for loop.
    You can do so many things with a for loop like in JavaScript as an example; knowing how to write a for loop helps you understand how js array methods work.
*/

int main() {

    // Loop 1:
        int sumFor = 0;
        for (int i = 0; i < 10; i++) {
            cout << i << endl;
            sumFor = i + sumFor;
        }

        cout << "sum = " << sumFor << endl;
        cout << "End of for loop.\n" << endl;

    // Loop 2:
        int i = 0;
        int sumDo = 0;

        do {
            cout << i << endl;
            sumDo = i + sumDo;
            i++;
        } while (i < 10);

        cout << "sum = " << sumDo << endl;
        cout << "End of do while loop.\n" << endl;

    // Loop 3: 
        int j = 0;
        int sumWhile = 0;

        while (j < 10) {
            cout << j << endl;
            sumWhile = j + sumWhile;
            j++;
        }

        cout << "sum = " << sumWhile << endl;
        cout << "End of while loop." << endl;

    return 0;
}

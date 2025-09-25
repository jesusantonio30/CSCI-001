#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int dieRoll();

int main() {
    srand(time(0));

    int numSevens = 0;
    int trials = 1000000000;
    int die1, die2;

    for (int i = 1; i <= trials; i++) {
        die1 = dieRoll();
        die2 = dieRoll();
        int sum = die1 + die2;
        if (sum == 7){
            numSevens++;
        }
    }

    cout << "Number of 7's rolled: " << numSevens << endl;
    cout << "Prop(rolling 7): " << (1.0 * numSevens / trials) * 100 << '%' << endl;


    return 0;
}

int dieRoll() {
    return 1+ rand() % 6;
}

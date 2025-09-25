#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string coinFlip();


int main() {
    srand(time(0));

    int numHeads = 0;
    int numTails = 0;
    string flip;
    int trials = 100000000;

    for (int i = 1; i <= trials; i++) {
        flip = coinFlip();
        flip == "Heads" ? numHeads++ : numTails++;
    }

    cout << "Heads: " << numHeads << endl;
    cout << "Tails: " << numTails << endl;

    cout << "Probability: " << 1.0 * numHeads / trials << endl;

    return 0;
}

string coinFlip(){

    string answer;
    // 0 - 32,000; 0 and 1 possible output
    int randNum = rand() % 2;

    if (randNum == 0) {
        answer = "Tails";
    } else {
        answer = "Heads";
    }


    return answer;
}

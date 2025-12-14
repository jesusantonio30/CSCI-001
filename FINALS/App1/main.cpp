#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

bool coinFlip();

int main() {

    // Using the Law of Big Numbers can help determine what 
    // the true probability of flipping three tails in a row would be.
    // After simulating a coin flip, the probability comes out to 12.5%

    srand(time(0));

    char runAgain = 'n';
    int sims = 0,
        tailCount = 0,

        tailTempStreak = 0,
        oneTailStreak = 0,
        twoTailStreak = 0,
        threeTailStreak = 0,
        fourTailStreak = 0,
        fiveTailStreak = 0;

    do {
        cout << "\nEnter number of simulations: ";
        cin >> sims;

        for (int i = 0; i < sims; i++) {
            bool flipCoin = coinFlip();

            if (!flipCoin) {
                tailCount++;
                tailTempStreak++;

                if (tailTempStreak == 1) oneTailStreak++;
                if (tailTempStreak == 2) twoTailStreak++;
                if (tailTempStreak == 3) threeTailStreak++;
                if (tailTempStreak == 4) fourTailStreak++;
                if (tailTempStreak == 5) fiveTailStreak++;

            } else {
                tailTempStreak = 0;
            }

        }

        cout << fixed << setprecision(2);
        cout << "\nYou flipped a coin " << sims << " times: " << endl;

        cout << "\nNumber of tails = " << tailCount << endl;
        cout << "Tails winning streaks: " << endl;
        cout << "1 Tail in a row =  " << oneTailStreak << " or " << (1.0 * oneTailStreak / tailCount) * 100 << "%" << endl;
        cout << "2 Tails in a row = " << twoTailStreak << " or " << (1.0 * twoTailStreak / tailCount) * 100 << "%" << endl;
        cout << "3 Tails in a row = " << threeTailStreak << " or " << (1.0 * threeTailStreak / tailCount) * 100 << "%" << endl;
        cout << "4 Tails in a row = " << fourTailStreak << " or " << (1.0 * fourTailStreak / tailCount) * 100 << "%" << endl;
        cout << "5 Tails in a row = " << fiveTailStreak << " or " << (1.0 * fiveTailStreak / tailCount) * 100 << "%" << endl;

        cout << "\nRun again?: ";
        cin >> runAgain;

    } while (tolower(runAgain) == 'y');

    return 0;
}

bool coinFlip() {
    return rand() % 2;
}

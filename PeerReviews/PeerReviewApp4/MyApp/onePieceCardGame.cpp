#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));

    // Probability of pulling a specified common card
    // 45 possible common cards
    // During manufacturing, the common cards are selected from 6 different slots

    long long numSimulations;
    const int slotsPerPack = 6;
    const int totalRarityCards = 45;
    const double probaPerSlot = (1.0 / totalRarityCards) * 100;

    cout << "Enter number of simulations: ";
    cin >> numSimulations;

    long long successfulPulls = 0;

    for (long long boosterPack = 0; boosterPack < numSimulations; boosterPack++) {

        for (int slot = 0; slot < slotsPerPack; slot++) {
            double randInt = rand() % 10;

            if (randInt < probaPerSlot) {
                successfulPulls++;
            }
        }
    }

    double probability = successfulPulls / numSimulations;

    cout << "Probability of pulling a specified common card is: " << probability << endl;

    return 0;
}

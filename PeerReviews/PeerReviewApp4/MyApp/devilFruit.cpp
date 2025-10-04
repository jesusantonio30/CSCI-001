#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));

    // There are roughly 155 known devil fruits in One Piece

    /* 
        Three categories
            - Paramecia (89)
            - Zoan (52)
                - Ancient Model (9)
                - Mythical Model (9)
            - Logia (14)

    */

    const int CONFIRMED_DEVIL_FRUITS = 155;

    const int PARAMECIA_AMT = 89;   // 1 - 89
    const int ZOAN_AMT = 52;        // 90 - 141
    const int LOGIA_AMT = 14;       // 142 - 155

    int paramecia_pull_count = 0;
    int zoan_pull_count = 0;
        int ancient_zoan_pull_count = 0;
        int mythical_zoan_pull_count = 0;
    int logia_pull_count = 0;

    int simulations = 1000000;

    double random_devil_fruit;

    for (int i = 0; i <= simulations; i++) {
        random_devil_fruit = 1 + rand() % 155;

        if (random_devil_fruit <= 89) {
            paramecia_pull_count++;

        } else if (random_devil_fruit <= 141 && random_devil_fruit >= 90) {

            if (random_devil_fruit >= 90 && random_devil_fruit <= 98) {
                // 9 out of 52 chance of getting an ancient zoan devil fruit
                ancient_zoan_pull_count++;
            
            } else if (random_devil_fruit >= 99 && random_devil_fruit <= 107) { 
                // 9 out of 52 chance of getting a mythical zoan devil fruit
                mythical_zoan_pull_count++;

            } else {
                zoan_pull_count++;

            }

        } else {
            logia_pull_count++;
        }
    }

    cout << "Paramecia Drawal: " << paramecia_pull_count << endl;
    cout << "Zoan Drawal: " << zoan_pull_count << endl;
    cout << "Ancient Zoan Drawal: " << ancient_zoan_pull_count << endl;
    cout << "Mythical Zoan Drawal: " << mythical_zoan_pull_count << endl;
    cout << "Logia Drawal: " << logia_pull_count << endl;

        

    return 0;
}

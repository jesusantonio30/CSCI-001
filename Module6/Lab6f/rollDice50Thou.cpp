#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int dice();

int main() {
    srand(time(NULL));

    const int MIN_SUM = 2;
    const int MAX_SUM = 12;
    const int TRIALS = 50000;

    int possibleSumsArr[MAX_SUM + 1] = {0};

    for (int i = 0; i <= TRIALS; i++) {
        int dieSum = dice() + dice();
        possibleSumsArr[dieSum]++;
    }

    cout << fixed << setprecision(2);
    cout << "\nSum\tOccurrences\tProbability(%)" << endl;
    cout << "------ --------------- -----------------" << endl;
    for (int i = MIN_SUM; i <= MAX_SUM; i++) {
        cout << i << '\t' << possibleSumsArr[i] << "\t\t" << (possibleSumsArr[i] * 1.0 / TRIALS) * 100 << endl;
    }
    cout << '\n';
    
    return 0;
}

int dice() {
    return (rand() % 6) + 1;
}



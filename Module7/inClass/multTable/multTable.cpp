#include <iostream>

using namespace std;

int main() {

    int colSize = 10;
    int rowSize = 10;

    int multiplicationTable[colSize][rowSize];

    for (int i = 0; i < colSize; i++) {
        for (int j = 0; j < rowSize ; j++) {
            multiplicationTable[i][j] = (i+1) * (j+1);
        }
    }

    for (int i = 0; i < colSize; i++) {
        for (int j = 0; j < rowSize; j++) {
            cout << multiplicationTable[i][j] << '\t';
        }
        cout << "\n\n";
    }

    return 0;
}

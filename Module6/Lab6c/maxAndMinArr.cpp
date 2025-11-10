#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int maxInteger( int a[], int size );
int minInteger( int a[], int size );

int main() {

    srand(time(0));
    int randNum, i;
    char runAgain;

    int size = 20;
    int randomNumbers[size];

    do {
            for (i = 0; i < size; i++) {
                randNum = 1 + rand() % 1000;
                randomNumbers[i] = randNum;
            }

            cout << "\nArray: ";

            for (i = 0; i < size; i++) {
                if (i != size - 1 ){
                        cout << randomNumbers[i] << ", ";
                    } else {
                        cout << randomNumbers[i] << endl;
                    }
            }

            cout << "\nBiggest integer in array: " << maxInteger(randomNumbers, size) << endl;
            cout << "Smallest integer in array: " << minInteger(randomNumbers, size) << endl;

            cout << "\n\nWant to run again? (y/n): ";
            cin >> runAgain;
    } while (runAgain == 'y');

    return 0;
}

int maxInteger( int a[], int size ) {
    int max = a[0], i;

    for (i = 0; i < size; i++) {
        if (max < a[i]) max = a[i];
    }
    return max;
}

int minInteger( int a[], int size ) {
    int min = a[0], i;

    for (i = 0; i < size; i++) {
        if (min > a[i]) min = a[i];
    }
    return min;
}

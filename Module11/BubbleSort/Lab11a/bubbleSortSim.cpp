#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;


void mySwap(int &argA, int &argB);
void printArr(int arg[], const int size);
int bubbleSort(int arg[], const int size);

int main() {

    srand(time(0));

    const int size = 10;
    int a[size];

    // Simulation

    int swapCount = 0;
    int maxSwap = 0;
    double avgSwap = 0;
    int minSwap = 100;

    int numOfSim = 50000000;

    for (int i = 0; i < numOfSim; i++) {

        for (int i = 0; i < size; i++) {
            a[i] = rand() % 51;
        }

        int numSwaps = bubbleSort(a, size);

        if (maxSwap < numSwaps) maxSwap = numSwaps;
        if (minSwap > numSwaps) minSwap = numSwaps;

        swapCount += numSwaps;

    }

    cout << fixed << setprecision(2);
    cout << "Average Swaps: " << 1.0 * swapCount / numOfSim << endl;
    cout << "Max amount of swaps: " << maxSwap << endl;
    cout << "Min amount of swaps: " << minSwap << endl;

    return 0;
}

void mySwap(int &argA, int &argB) {
    int cache = argA;

    argA = argB;
    argB = cache;
}

void printArr(int arg[], const int size) {
    for (int i = 0; i < size; i++) {
        cout << arg[i] << ", ";
    }

    cout << endl;
}

// An optimized version of Bubble Sort 
int bubbleSort(int arg[], const int size) {
    int n = size;
    bool swapped;
    int numOfSwaps = 0;
  
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arg[j] > arg[j + 1]) {
                mySwap(arg[j], arg[j + 1]);
                swapped = true;
                numOfSwaps++;
            }
        }
      
        // If no two elements were swapped, then break
        if (!swapped)
            break;
    }

    return numOfSwaps;
}

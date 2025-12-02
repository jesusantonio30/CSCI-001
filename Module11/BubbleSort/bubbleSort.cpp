#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void mySwap(int &argA, int &argB);
void printArr(int arg[], const int size);
void bubbleSort(int arg[], const int size);

int main() {
    srand(time(0));

    const int size = 10;
    int a[size];

    for (int i = 0; i < size; i++) {
        a[i] = rand() % 51;
    }

    printArr(a, size);

    bubbleSort(a, size);

    printArr(a, size);

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
void bubbleSort(int arg[], const int size) {
    int n = size;
    bool swapped;
  
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arg[j] > arg[j + 1]) {
                mySwap(arg[j], arg[j + 1]);
                swapped = true;
            }
        }
      
        // If no two elements were swapped, then break
        if (!swapped)
            break;
    }
}

#include <iostream>
#include <cmath>

using namespace std;

void printIntArr(double arr[], const int size);

int main() {

    const int n = 50;
    double arr[n];

    for (int i = 0; i < n; i++) {
        arr[i] = sqrt(i);
    }


    printIntArr(arr, n);

    return 0;
}

void printIntArr(double arr[], const int size) {
    for (int i = 0; i < size; i++) {
        cout << "Element " << i << ": " << arr[i] << endl;
    }
}

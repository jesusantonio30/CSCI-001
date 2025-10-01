#include <iostream>
#include <cmath>

using namespace std;

void printIntArr(int arr[], const int size);

int main() {

    const int n = 5;
    int arr[n];

    for (int i = 0; i < n; i++) {
        arr[i] = pow(2,i);
    }


    printIntArr(arr, n);

    return 0;
}

void printIntArr(int arr[], const int size) {
    for (int i = 0; i < size; i++) {
        cout << "Element " << i << ": " << arr[i] << endl;
    }
}

#include <iostream>
#include <cmath>

using namespace std;

void printIntArr(float arr[], const int size);
float averageArray(float arr[], const int size);
float stdArr(float arr[], const int size);

int main() {

    const int n = 10;
    float arr[n];

    for (int i = 0; i < n; i++) {
        arr[i] = i * i;
    }


    printIntArr(arr, n);
    cout << "Average of array: " << averageArray(arr, n) << endl;
    cout << "Standard Deviation: " << stdArr(arr, n) << endl;

    return 0;
}

void printIntArr(float arr[], const int size) {
    for (int i = 0; i < size; i++) {
        cout << "Element " << i << ": " << arr[i] << endl;
    }
}

float averageArray(float arr[], const int size){

    float sum = 0;

    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }

    return sum / size;
}

float stdArr(float arr[], const int size){

    int sum = 0;

    float avg = averageArray(arr, size);

    for (int i = 0; i < size; i++) {
        sum += pow(arr[i] - avg, 2);
    }

    return sqrt( sum / (size - 1));
}

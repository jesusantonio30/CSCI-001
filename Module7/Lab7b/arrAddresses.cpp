#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void populateIntArray(int a[], const int size);
void printArrayContents(int a[], const int size);
void printArrayAddresses(int a[], const int size);


int main() {
    srand(time(NULL));

    const int size = 5;
    int arr[size];

    populateIntArray(arr, size);
    printArrayContents(arr, size);
    printArrayAddresses(arr, size);



    return 0;
}

void populateIntArray(int a[], const int size) {
    for (int i = 0; i < size; i++) {
        a[i] = 1 + rand() % 100;
    }
}

void printArrayContents(int a[], const int size) {
    for (int i = 0; i < size; i++) {
        cout << a[i] << endl;
    }
}

void printArrayAddresses(int a[], const int size) {
    for (int i = 0; i < size; i++) {
        cout << a++ << endl;
    }
}


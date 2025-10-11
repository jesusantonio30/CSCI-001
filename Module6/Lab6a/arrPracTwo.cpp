#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

void printArr(int *arr, int size);
void printArrV2(double *arr, int size);

double randInt, randDeci, sum = 0.0;

int main() {
    srand(time(0));

    cout << fixed << setprecision(3);

    // 1ST SECTION ===============================================
        const int size = 10;
        int a[size];

        cout << '\n';

        // for loop 1 --------------------------------
        for (int i = 0; i < size; i++) {

            a[i] = 3;
        }
        printArr(a, size);

        // for loop 2 --------------------------------
        for (int i = 0; i < size; i++) {

            randInt = 2 + rand() % 24;
            a[i] = randInt;
        }
        printArr(a, size);

        // for loop 2 --------------------------------
        for (int i = 0; i < size; i++) {

            a[i] = (i + 1) * 2;
        }
        printArr(a, size);

    // 2ND SECTION ===============================================
        const int n = 100;
        double b[n];

        // for loop 1 --------------------------------
        for (int i = 0; i < n; i++) {
            randDeci = 1.0 * rand() / RAND_MAX;
            b[i] = randDeci;
        }
        printArrV2(b, n);

        // for loop 2 --------------------------------
        cout << "b = { ";
        for (int i = n - 1; i >= 0; i--) {
            if (i == 0) {
                cout << b[0] << " };\n" << endl;
            } else {
                cout << b[i] << ", ";
            }
        }

        // for loop 3 --------------------------------
        for (int i = 0; i < n; i++) {
            sum += b[i];
        }

        cout << "Sum of array b: " << sum << endl;

    return 0;
}



void printArr(int *arr, int size) {

    cout << "a = { ";

    for (int i = 0; i < size; i++) {
        if ( i != size - 1) {
            cout << arr[i] << ", ";
        } else {
            cout << arr[i] << " };\n" << endl;
        }
    }
}

void printArrV2(double *arr, int size) {
    cout << "b = { ";

    for (int i = 0; i < size; i++) {
        if ( i != size - 1) {
            cout << arr[i] << ", ";
        } else {
            cout << arr[i] << " };\n" << endl;
        }
    }
}

// ----------------------------- NOTES -----------------------------

// arr[i] is syntactic sugar for *(arr + i)
        // arr is base address of array (e.g 0x16d61ea70)
        // i is index, offsets pointer by i elements (e.g. arr[1] is 0x16d61ea74 ; an int is 4 bytes hence the difference of 4 in memory)
        // * is used to dereference (access value at address of arr[i])

// Using int *arr allows the function to accept arrays of any size
// The downside of using a pointer is the loss of size information, requiring the size parameter to prevent out-of-bounds access

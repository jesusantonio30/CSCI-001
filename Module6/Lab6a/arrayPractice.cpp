#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int func(string& arg);

void functionA(int arg[], const int arrLen);

int main() {

    srand(time(0));

    cout << "Hello addressing" << endl;
    /*

        !!!!! stored sequentially in memory !!!!!

        double x = 5.2;

        char arr[] = {'a', 'b', 'c'};

        // depending on the element, it starts at the one you asked for and outputs every element after

        // if u pass a reference to a function and then reassign it, it actually changes the value since its working on the same address
            // careful with doing this, you will accidentally alter data
        cout << &arr[2] << endl;
        cout << &arr << endl;

        string xz = "Some big essay.";

        cout << xz << endl;
        cout << func(xz) << endl;
    */

    int size = 10;
    int a[size];

    for (int i = 0; i < size; i++) {
        a[i] = 97 + rand() % 26;
    }

    for (int i = 0; i < size; i++) {
        cout << "Address: " << a[i] << " : " <<  &a[i] << endl;
    }

    functionA(a, size);

    cout << "Contents: " << a[0] << endl;
    cout << "Address: " << &a[0] << endl;

    // a without the brackets is a pointer to a. 
    cout << "Just a? " << a << endl;

    return 0;

    // 97 - 122
}

int func(string& arg){

    arg = "Some new text.";

    return 42;
}

// a IS equal to &a[0]

void functionA(int arg[], const int arrLen){
    arg[0] = 42;
}

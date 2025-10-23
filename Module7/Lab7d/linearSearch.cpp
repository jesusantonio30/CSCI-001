#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int findA(char arr[], int size, char userChar);

int main(){

    srand(time(NULL));

    char runAgain;
    char userChar;

    int size = 10;
    char charArr[size];

    cout << '\n' << endl;

    cout << "randChars = { ";
    for (int i = 0; i < size; i++) {
        charArr[i] = 97 + rand() % 26;
        if (i < size - 1) {
            cout << charArr[i] << ", ";
        } else {
            cout << charArr[i] << ' ';
        }
    }

    cout << "};" << endl;


    do {
        cout << "\nEnter a character to find: ";
        cin >> userChar;

        int foundNotFound;

        foundNotFound = findA(charArr, size, userChar);

        cout << endl;
        if (foundNotFound >= 0) {
            cout << "Character found at index: " << foundNotFound << endl;
        } else {
            cout << "Character not found" << endl;
        }

        cout << "\nFind another character? (y/n): ";
        cin >> runAgain;
    } while (runAgain == 'y');

    return 0;
}

int findA(char arr[], int size, char userChar) {

    for (int i = 0; i < size; i++) {
        if (tolower(arr[i]) == userChar) {
            
            return i;
        } 
    }

    return -1;
}

#include <iostream>
#include <string>

using namespace std;

int main() {

    // PART ONE =====================

    string userString;

    cout << "\n\nEnter a single string: ";
    getline(cin, userString);

    cout << "\nNormal: ";

    for (int i = 0; i < userString.size(); i++) {
        i != userString.size() - 1 ? cout << userString[i] << '-' : cout << userString[i] << endl;
    }

    cout << "Reverse: ";

    for (int i = userString.size() - 1; i >= 0; i--) {
        i != 0 ? cout << userString[i] << '-' : cout << userString[i] << endl;
    }

    // PART TWO =====================

    cout << "\n\n";

    const int size = 5;
    string userStrings[size];

    cout << "Enter " << size << " string(s)" << endl;
 
    for (int i = 0; i < size; i++) {
        cout << "String " << i + 1 << ": ";
        getline(cin, userStrings[i]);
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < userStrings[i].size(); j++) {
            cout << userStrings[i][j];
            if (!(i == size - 1 && j == userStrings[i].size() - 1)) {
                cout << '*';
            }
        }   
    }

    cout << endl;


    

    return 0;
}

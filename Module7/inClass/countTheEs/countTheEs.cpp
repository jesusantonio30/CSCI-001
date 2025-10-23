#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int countChars (string str, string uChar);

int main() {

    char runAgain;
    string userString;
    string userChar;

    do {
        cout << "Enter a string, any string: ";
        getline(cin, userString);

        cout << "Enter a character to look for: ";
        getline(cin, userChar);

        

        cout << "There are " << countChars(userString, userChar) << ' ' << userChar << " in your string." << endl;

        cout << "Enter another string? (y/n): ";
        cin >> runAgain;

        cin.ignore();
    } while (tolower(runAgain) == 'y');

    return 0;
}

int countChars (string str, string uChar) {
    int eCounter = 0;

    for (int i = 0; i < str.size(); i++) {
        if (tolower(str[i]) == tolower(uChar[0])) {
            eCounter++;
        }
    }

    return eCounter;
}

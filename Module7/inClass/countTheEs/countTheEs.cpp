#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {

    char runAgain;
    string userString;
    string userChar;
    int eCounter = 0;

    do {
        cout << "Enter a string, any string: ";
        getline(cin, userString);

        cout << "Enter a character to look for: ";
        getline(cin, userChar);

        for (int i = 0; i < userString.size(); i++) {
            if (tolower(userString[i]) == userChar[0]) {
                eCounter++;
            }
        }

        cout << "There are " << eCounter << ' ' << userChar << " in your string." << endl;

        cout << "Enter another string? (y/n): ";
        cin >> runAgain;

        cin.ignore();
    } while (runAgain == 'y');

    return 0;
}

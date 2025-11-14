#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <cctype>

using namespace std;

int searchVector(vector<string> vecArg, string target);
vector<char> lowerCase(string argStr);

int main() {
    srand(time(0));

    string userStr;
    int nameIndex;
    char runAgain;

    vector<string> names = {"Olivia", "Noah", "Isabella", "Leo", "Luna", "Lucas", "Mia", "Levi", "Michael", "Sofia"};

    cout << "\nNames List: \n" << endl;

    for (int i = 0; i < names.size(); i++) {
        cout << "  - " << names[i] << endl;
    }

    do {
        cout << "\nEnter a name to look for: ";
        getline(cin, userStr);

        nameIndex = searchVector(names, userStr);

        nameIndex != -1 ? 
        cout << names[nameIndex] << " is at index " << nameIndex << '!' << endl : 
        cout << "Name is not in the list..." << endl;

        cout << "\n\nLook for another name? (y/n): ";
        cin >> runAgain;
        cin.ignore();
    } while (tolower(runAgain) == 'y');


    return 0;
}

int searchVector(vector<string> vecArg, string target) {

    for (int i = 0; i < vecArg.size(); i++) {
        if (lowerCase(vecArg[i]) == lowerCase(target)) return i;
    }

    return -1;
}

vector<char> lowerCase(string argStr) {
    vector<char> lowerChars;

    for (int i = 0; i < argStr.size(); i++) {
        lowerChars.push_back(tolower(argStr[i]));
    }

    return lowerChars;

}

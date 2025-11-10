#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void printStrings(vector<string> arg);
string randomString(vector<string> arg);

int main() {

    srand(time(0));

    char stop;
    vector<string> userStrings;

    cout << "\n\n\t\t-------- Instructions --------" << endl;

    cout << "\n- Enter any number of strings and they will be used to populate a vector." << endl;
    cout << "- When you're done, press the \"/\" key to stop." << endl;
    cout << "\n\t\t------------------------------" << endl;

    while (stop != '/') {
        string userStr;

        cout << "\nEnter a string: ";
        getline(cin, userStr);

        if (userStr == "/") {
            stop = userStr[0];
        } else {
            userStrings.push_back(userStr);
        }
    }

    cout << '\n' << endl;

    printStrings(userStrings);
    
    cout << "\nRandomly selected string: " << randomString(userStrings) << endl;

    cout << '\n' << endl;


    return 0;
}

void printStrings(vector<string> arg){
    for (int i = 0; i < arg.size(); i++) {
        cout << arg[i] << endl;
    }
}

string randomString(vector<string> arg){
    return arg[rand() % arg.size()];
}

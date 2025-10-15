#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;


void printNames(string arr[], const int size);
void randPersonGener(string arr[], const int size);
string properCasing(string arg);

int main() {
    srand(time(0));

    char morePeople;
    char anotherWinner;

    const int size = 50;
    string peopleNames[size];
    int i = 0;

    string randPerson;

    cout << "\n\n=============== Enter names into the bucket hat! ===============\n" << endl;

    do {
        string person;

        cout << "\nPerson name: ";
        getline(cin, person);
        peopleNames[i] = properCasing(person);
        i++;

        if (i < size) {
            cout << "\nAdd another person? (y/n): ";
            cin >> morePeople;

            if (morePeople == 'n') {
            peopleNames[i] = "";
        }

            cin.ignore();
        }

    } while (morePeople == 'y' && i < size);

    cout << "\n\n==== Bucket Hat List ====" << '\n' << endl;

    printNames(peopleNames, size);

    cout << "\n\nLet's choose a winner!" << endl;

    do {

        randPersonGener(peopleNames, i);

        cout << "Should we select another winner? (y/n): ";
        cin >> anotherWinner;

    } while (anotherWinner == 'y');

    return 0;
}


void printNames(string arr[], const int size) {
    int i = 0;
    while (arr[i] != "") {
        cout << "- " << arr[i] << endl;
        i++;
    }
}

void randPersonGener(string arr[], const int size) {
    string randPerson;
    randPerson = arr[rand() % size];

    cout << "\nThe winner is... " << endl;
    cout << randPerson << "!\n" << endl;
}

string properCasing(string arg) {
    arg[0] = toupper(arg[0]);

    for (int i = 1; i < arg.size(); i++) {
        arg[i] = tolower(arg[i]);
    }

    return arg;
}

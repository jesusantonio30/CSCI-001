#include <iostream> 
#include <cstdlib>
#include <ctime>
#include <cctype>

using namespace std;

void generatePassword(int passSize, char passwordArr[], char randCharArr[]);

int main() {

    srand(time(NULL));

    char lovePass;

    char randChar[] = {"!@#$%^&*()_+-={}abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"};
    int passSize;
    char pass[passSize + 1];

    cout << "\nEnter desired password length: ";
    cin >> passSize;

    do {
        cout << "\nGenerated Password: ";
        generatePassword(passSize, pass, randChar);

        cout << "\n\nIs this password okay? (y/n): ";
        cin >> lovePass;
        cout << '\n' << endl;
    } while (lovePass == 'n');


    return 0;
}

void generatePassword(int passSize, char passwordArr[], char randCharArr[]) {

    int specialCount = 0;
    int intCount = 0;    
    int capitCount = 0;  

    int randCharGen;

    while (specialCount < 2 || intCount < 2 || capitCount < 1) {

        specialCount = 0;
        intCount = 0;
        capitCount = 0;

        passwordArr[0] = randCharArr[rand() % 17];
        specialCount++;

        for (int i = 1; i < passSize; i++) {
            randCharGen = rand() % 79;

            if (isupper(randCharArr[randCharGen])) {
                capitCount++;

            } else if (!isalnum(randCharArr[randCharGen])){
                specialCount++;

            } else if (isdigit(randCharArr[randCharGen])) {
                intCount++;
            }
            
            passwordArr[i] = randCharArr[randCharGen];
        }

        passwordArr[passSize] = '\0';
}

    cout << passwordArr << endl;
}

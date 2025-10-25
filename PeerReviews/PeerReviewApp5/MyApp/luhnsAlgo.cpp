#include <iostream>

using namespace std;

bool verifyCreditCard(int arr[], int size);

int main() {

    cout << "\n\nVery basic implementation of Luhn's Algorithm" << endl;
    cout << "\tFor credit card validation!" << endl;

    cout << "\n=============== How it works ===============\n" << endl;

    const int size = 16;
    int creditCardNum[size];
    // OG is being modified so using copy to output at end
    int copyCC[size];

    cout << "- Reads from left to right" << endl;
    cout << "- Right most digit is called the 'check digit' and remains unchanged " << endl;
    cout << "- Starting from the second-last digit, double every second digit (e.g. indices 14, 12, 10, etc.)" << endl;
    cout << "- If doubled digits are greater than 9, subtract 9 from them" << endl;
    cout << "- Sum all digits" << endl;
    cout << "- The sum of all digits should be a multiple of 10 to be valid\n\n" << endl;

    cout << "\nEnter 16-digit Credit Card number: \n" << endl;

    for (int i = 0; i < size; i++) {
        cout << "Digit " << i + 1 << ": ";
        cin >> creditCardNum[i];
        // copying values to copy arr
        copyCC[i] = creditCardNum[i];
    }

    bool validCC = verifyCreditCard(creditCardNum, size);

    cout << "\nCredit card ";

    // adding hyphens for easy to read cc number
    for (int i = 0; i < size; i++) {
        if (i % 4 == 0 && i != 0) {
            cout << '-';
        }
        cout << copyCC[i];
    }

    // ternary operator, concise version of if-else statement
    validCC ? cout << " is valid!" << endl : cout << " is not valid." << endl;

    return 0;
}

bool verifyCreditCard(int arr[], int size) {

    int checkSum = 0;

    // starting at second last digit and only doubling every other digit
    for (int i = (size - 2); i >= 0; i-=2) {
            arr[i] *= 2;

            // checking to see if doubled digit is greater than 9, if so then subtract 9
            if (arr[i] > 9) {
                arr[i] -= 9;
            }
    }

    for (int i = 0; i < size; i++) {
        checkSum += arr[i];
    }

    // sum of all digits has to be diviisble by 10 in order to be valid
    if (checkSum % 10 == 0) {
        return true;
    } else {
        return false;
    }
}

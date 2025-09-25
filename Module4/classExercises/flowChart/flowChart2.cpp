#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int y;

    int x = rand() % 10 + 1;

    cout << "Welcome to the guessing game!" << endl;

    cout << "To start, enter your guess! (1 - 10) : ";
    cin >> y;

    if (y < x) {
        cout << "Too low!" << endl;
    } else if (y >= x) {
        if (y != x) {
            cout << "Too high!" << endl;
        } else {
            cout << "You got it!" << endl;
        }
    }

    return 0;
}

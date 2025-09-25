#include <iostream>
using namespace std;

int main () {
    string userInp;
    string userResp;
    bool playAgain;

    do {
    cout << "======================== Char to ASCII converter ========================" << endl;

    cout << "Enter a char: ";
    cin >> userInp;

    if (userInp.size() > 1) {
        cout << "Not a char." << endl;
        
        cout << "=========================================================================" << endl;
        return 0;

    } else {
        char newInput = userInp[0];
        cout << "ASCII code: " << int(newInput) << endl;

        cout << "Want to go again (y, n)? ";

        cin >> userResp;
    }

    if (userResp.size() > 1) {
        cout << "Invalid input" << endl;
    } else {
        switch (userResp[0]) {
            case 'y':
                playAgain = true;
                break;
            case 'n':
                playAgain = false;
                break;
            default:
                cout << "Not a valid answer." << endl;
                break;
        }
    }

    cout << "=========================================================================" << endl;
    } while ( playAgain );

    return 0;

}

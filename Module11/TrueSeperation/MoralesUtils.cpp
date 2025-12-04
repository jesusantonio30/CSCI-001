#include "MoralesUtils.hpp"

namespace Morales {
    bool runAgain(void) {
        char userInput;
        string resetGet;
        cout << "\nAdd another car? (y/n): ";
        cin >> userInput;
        cin.ignore();
        return (userInput == 'y');
    }
}

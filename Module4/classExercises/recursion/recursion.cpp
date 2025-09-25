#include <iostream>

using namespace std;

int i = 1;

void csciLevels(int num);

int main() {
    csciLevels(1);
    return 0;
}

void csciLevels(int num){

    cout << "Function call " << i << endl;
    i++;

    if(num < 6) {
        cout << "CSCI " << num << endl;
        csciLevels(num + 1);
    } else {
        cout << "Congrats, you officially earned your Computer Science degree!" << endl;
    }
}

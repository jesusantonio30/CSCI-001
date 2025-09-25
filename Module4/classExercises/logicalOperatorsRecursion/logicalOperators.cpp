#include <iostream>


// A recursive function calls itself

using namespace std;

void countdown(int n) {
 if (n == 0) {
    cout << "Blastoff!" << endl;
 }else {
    cout << n << endl;
    countdown(n - 1);
    cout << "After call " << n << endl;
 }
}

int main () {

    countdown(5);

    return 0;
}

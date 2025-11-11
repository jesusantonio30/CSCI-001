#include <iostream>

using namespace std;

int main() {

    return 0;
}

int searchVector(vector<string> vecArg, string target) {
    for (int i = 0; i < vecArg.size(); i++) {
        if (vecArg[i] == target ) {
            return i;
        } else if (i == vecArg.size()) {
            return -1;
        }
    }
}

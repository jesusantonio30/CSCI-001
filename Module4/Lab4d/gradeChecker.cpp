#include <iostream>

using namespace std;

bool checkForA(int x);

int main() {

    int studentGrade;

    cout << "Enter student numerical grade to determine letter grade: ";
    cin >> studentGrade;

    if (checkForA(studentGrade)) {
        cout << "You have earned an A." << endl;
    } else {
        cout << "You have not earned an A." << endl;
    }
    
    return 0;
}

bool checkForA(int x) {
    if (x > 89 & x <= 100) {
        return true;
    } else {
        return false;
    }
}

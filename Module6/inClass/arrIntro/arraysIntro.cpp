#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;


int main() {

    srand(time(0));

    cout << "Hello Arrays" << endl;


    // =============================================== 
    // int size = 50;
    // char arr[size]; // 5 int variables available

    // for (int i = 0; i < size; i++) {
    //     arr[i] = 97 + rand() % 26; // or char(97 + rand() % 26)
    // }

    // for (int i = 0; i < size; i++) {
    //     cout << "Element " << i << " : " << arr[i] << endl;
    // }
    // ===============================================

    const int amountOfStudents = 50;
    int grades[amountOfStudents];
    double sum = 0;

    for (int i = 0; i < amountOfStudents; i++) {
        float grade = grades[i] = rand() % 101;
        cout << "Student " << i + 1 << " : Grade: " <<  grade << endl;
        sum += grade;
    }

    cout << "Total Grade: " << sum << endl;
    cout << "Average grade: " << sum / amountOfStudents << endl;


    return 0;
}

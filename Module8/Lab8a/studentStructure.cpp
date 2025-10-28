#include <iostream>
#include <string>

using namespace std;

struct Student {
    string firstName;
    string lastName;
    string school;
    float gpa;
};

void printStudent(Student arg);

int main() {

    Student stud1;

    cout << "Enter student's first name: ";
    getline(cin, stud1.firstName);

    cout << "\nEnter student's last name: ";
    getline(cin, stud1.lastName);

    cout << "\nEnter student's school: ";
    getline(cin, stud1.school);

    cout << "\nEnter student's GPA: ";
    cin >> stud1.gpa;

    cout << "\n======== Student Information ========\n" << endl;

    printStudent(stud1);

    cin.ignore();

    return 0;
}

void printStudent(Student arg) {
    cout << "First Name: " << arg.firstName << endl;
    cout << "Last Name: " << arg.lastName << endl;
    cout << "School: "  << arg.school << endl;
    cout << "GPA: " << arg.gpa << endl;
}

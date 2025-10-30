#include <iostream>
#include <string>

using namespace std;

struct Student {
    string firstName;
    string lastName;
    string school;
    float gpa;
    string id;

    // Methods
    void capitalize(Student& arg);
    void printStudent(Student arg);
};

int main() {

    Student studentObj;

    int size = 3;
    Student studentArr[size];

    for (int i = 0; i < size; i++) {

        cout << "\nStudent " << i + 1 << ": " << endl;

        cout << "\nEnter student's first name: ";
        getline(cin, studentArr[i].firstName);

        cout << "\nEnter student's last name: ";
        getline(cin, studentArr[i].lastName);

        cout << "\nEnter student's ID: ";
        getline(cin, studentArr[i].id);

        cout << "\nEnter student's school: ";
        getline(cin, studentArr[i].school);

        cout << "\nEnter student's GPA: ";
        cin >> studentArr[i].gpa;

        cout << "\n=================================" << endl;

        cin.ignore();
    }

    cout << "\n\n======== Student Information ========" << endl;

    for (int i = 0; i < size; i++) {
        studentObj.capitalize(studentArr[i]);
        cout << "\nStudent " << i + 1 << ": " << endl;
        studentObj.printStudent(studentArr[i]);
        cout << "\n=================================" << endl;
    }

    return 0;
}

void Student::printStudent(Student arg) {
    cout << "\nFirst Name: \t" << arg.firstName << endl;
    cout << "\nLast Name: \t" << arg.lastName << endl;
    cout << "\nID: \t\t" << arg.id << endl;
    cout << "\nSchool: \t"  << arg.school << endl;
    cout << "\nGPA: \t\t" << arg.gpa << endl;
}

void Student::capitalize(Student& arg) {

    // & is necessary since it doesn't create a copy of a value. Instead, it contains the address in memory where the variable or value is located in. 
    // If declared using a type, the variable name is just another alias of the original variable.
    // In this case, arg is an alias for my studentArr variable containing an array.
    // This allows us to only pass 8 bytes (size of an address) rather than whatever the size of a copy may be. Much more efficient.

    for (int i = 0; i < arg.firstName.size(); i++) {
        arg.firstName[0] = toupper(arg.firstName[0]);
        if (arg.firstName[i] == ' ') {
            arg.firstName[i + 1] = toupper(arg.firstName[i + 1]);
        }
    }
    for (int i = 0; i < arg.lastName.size(); i++) {
        arg.lastName[0] = toupper(arg.lastName[0]);
        if (arg.lastName[i] == ' ') {
            arg.lastName[i + 1] = toupper(arg.lastName[i + 1]);
        }
    }
    for (int i = 0; i < arg.school.size(); i++) {
        arg.school[0] = toupper(arg.school[0]);
        if (arg.school[i] == ' ') {
            arg.school[i + 1] = toupper(arg.school[i + 1]);
        }
    }
}

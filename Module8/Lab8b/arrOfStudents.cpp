#include <iostream>
#include <string>

using namespace std;

struct Student {
    string firstName;
    string lastName;
    string school;
    float gpa;
    int id;

    // Methods
    void capitalize();
    void printStudent();
    void addToGPA(double arg);
};

int main() {

    int size = 3;
    Student studentArr[size];

    int tempId;

    for (int i = 0; i < size; i++) {

        cout << "\nStudent " << i + 1 << ": " << endl;

        cout << "\nEnter student's first name: ";
        getline(cin, studentArr[i].firstName);

        cout << "\nEnter student's last name: ";
        getline(cin, studentArr[i].lastName);

        cout << "\nEnter student's ID (xxxxx): ";
        cin >> tempId;

            while (tempId < 10000 || tempId > 99999) {
                cout << "Enter a 5-digit ID (10000-99999): ";
                cin >> tempId;
            }
            studentArr[i].id = tempId;
            cin.ignore();

        cout << "\nEnter student's school: ";
        getline(cin, studentArr[i].school);

        cout << "\nEnter student's GPA: ";
        cin >> studentArr[i].gpa;

        cout << "\n=================================" << endl;

        cin.ignore();
    }

    cout << "\n\n======== Student Information ========" << endl;

    for (int i = 0; i < size; i++) {
        studentArr[i].capitalize();
        cout << "\nStudent " << i + 1 << ": " << endl;
        studentArr[i].printStudent();
        cout << "\n=================================" << endl;
    }

    return 0;
}

void Student::printStudent() {
    cout << "\nFirst Name: \t" << firstName << endl;
    cout << "\nLast Name: \t" << lastName << endl;
    cout << "\nID: \t\t" << id << endl;
    cout << "\nSchool: \t"  << school << endl;
    cout << "\nGPA: \t\t" << gpa << endl;
}

void Student::capitalize() {

    // & is necessary since it doesn't create a copy of a value. Instead, it contains the address in memory where the variable or value is located in. 
    // If declared using a type, the variable name is just another alias of the original variable.
    // In this case, arg is an alias for my studentArr variable containing an array.
    // This allows us to only pass 8 bytes (size of an address) rather than whatever the size of a copy may be. Much more efficient.

    firstName[0] = toupper(firstName[0]);
    lastName[0] = toupper(lastName[0]);
    school[0] = toupper(school[0]);
    
    for (int i = 0; i < firstName.size(); i++) {
        if (firstName[i] == ' ') {
            firstName[i + 1] = toupper(firstName[i + 1]);
        }
    }
    for (int i = 0; i < lastName.size(); i++) {
        if (lastName[i] == ' ') {
            lastName[i + 1] = toupper(lastName[i + 1]);
        }
    }
    for (int i = 0; i < school.size(); i++) {
        if (school[i] == ' ') {
            school[i + 1] = toupper(school[i + 1]);
        }
    }
}

void Student::addToGPA(double arg) {
    gpa += arg;
}

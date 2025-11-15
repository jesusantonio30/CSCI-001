#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

struct Student {
    string firstName;
    string lastName;
    int age;
    string school;
    float gpa;

    Student(string argFn = "John", string argLn = "Doe", int argAge = 18, string argSchl = "COS", float argGpa = 0.0);
    void setFirstName(string argFn);
    void setLastName(string argLn);
    void setAge(int argAge);
    void setSchool(string argSchl);
    void setGPA(float argGpa);

    string getFirstName();
    string getLastName();
    int getAge();
    string getSchool();
    float getGPA();

    void printStudent();
};

int main() {

    srand(time(0));

    vector<Student> randomStudents;

    vector<string> firstNames = {"Olivia", "Noah", "Isabella", "Leo", "Luna", "Lucas", "Mia", "Levi", "Michael", "Sofia"};
    vector<string> lastNames = {"Smith", "Garcia", "Rodriguez", "Davis", "Jones", "Martinez", "Thomas", "Jackson", "Hernandez", "Brown"};
    vector<string> schools = {"Yale", "MIT", "Harvard", "UCLA", "UCSD", "Berkeley", "Stanford"};

    for (int i = 0; i < 10; i++) {
        randomStudents.push_back(Student(firstNames[rand() % firstNames.size()], lastNames[rand() % lastNames.size()], 18 + rand() % 100, schools[rand() % schools.size()], 4.0 * rand() / RAND_MAX ));
    }

    cout << fixed << setprecision(2);

    for (int i = 0; i < randomStudents.size(); i++) {
        cout << "\nStudent " << i+1 << ": " << endl;
        randomStudents[i].printStudent();
    }

    return 0;
}

Student::Student(string argFn, string argLn, int argAge, string argSchl, float argGpa) {
    setFirstName(argFn);
    setLastName(argLn);
    setAge(argAge);
    setSchool(argSchl);
    setGPA(argGpa);
}


void Student::printStudent() {
    cout << "First Name: " << getFirstName() << endl;
    cout << "Last Name: " << getLastName() << endl;
    cout << "Age: " << getAge() << endl;
    cout << "School: "  << getSchool() << endl;
    cout << "GPA: " << getGPA() << endl;
}

// SETTERS ----------------------------------------------
void Student::setFirstName(string argFn) {
    firstName = argFn;
}
void Student::setLastName(string argLn) {
    lastName = argLn;
}
void Student::setAge(int argAge) {
    if (argAge < 0 ) {
        cout << "Age is invalid."<< endl;
    } else { 
        age = argAge;
    }
}
void Student::setSchool(string argSchl) {
    school = argSchl;
}
void Student::setGPA(float argGpa) {
    gpa = argGpa;
}

// GETTERS ----------------------------------------------
string Student::getFirstName() {
    return firstName;
}
string Student::getLastName() {
    return lastName;
}
int Student::getAge() {
    return age;
}
string Student::getSchool() {
    return school;
}
float Student::getGPA() {
    return gpa;
}

#include <iostream>
#include <string>

using namespace std; 

struct Person {
    string name;
    int age;
    float shoeSize;
};

void printPerson(Person& p);

int main() {

    int size = 10;
    Person a[size];

    for (int i = 0; i < size; i++) {

        cout << "Enter person name: ";
        getline(cin, a[i].name);

        cout << "Enter person age: ";
        cin >> a[i].age;

        cin.ignore();
    }

    for (int i = 0; i < size; i++) {
        printPerson(a[i]);
    }
    

    return 0;
}

void printPerson(Person& p) {
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
}

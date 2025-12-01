#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Dog {
    private:
        string name, breed;
        int age, ID;

    public:
        Dog(string argName = "", string argBreed = "", int argAge = 0, int argID = 10000);

        void setName(string mName);
        void setBreed(string mBreed);
        void setAge(int mAge);
        void setID(int mID);

        string getName() const;
        string getBreed() const;
        int getAge() const;
        int getID() const;

        void display() const;
        int humanAge() const;
};

void printDogKennel(const vector<Dog> &kennel);

int main() {

    srand(time(0));

    vector<Dog> dogKennel;

    vector<string> dogNames = {"Luna", "Charlie", "Max", "Lucy", "Teddy", "Milo", "Sadie", "Daisy", "Cooper", "Bella"};
    vector<string> dogBreeds = {"French Bulldog", "German Shepherd", "Yorkshire Terrier", "Golden Retriever", "Beagle", "Pembroke Welsh Corgi", "Shih Tzu", "Miniature Schnauzer", "Australian Shepherd", "Labrador Retriever"};

    for (int i = 0; i < 100; i++) {

        string name = dogNames[rand() % dogNames.size()];
        string breed = dogBreeds[rand() % dogBreeds.size()];
        int age = 1 + rand() % 13;
        int id = 10000 + i;

        dogKennel.push_back(Dog(name, breed, age, id));
    }

    printDogKennel(dogKennel);

    return 0;
}

// CONSTRUCTOR
Dog::Dog(string argName, string argBreed, int argAge, int argID){
    setName(argName);
    setBreed(argBreed);
    setAge(argAge);
    setID(argID);   
}

// SETTERS
void Dog::setName(string mName) {
    if (mName == "" || mName == " ") 
        cout << "Enter valid name.\n";
    else 
        name = mName;
}

void Dog::setBreed(string mBreed) {
    if (mBreed == "" || mBreed == " ") 
        cout << "Enter valid breed.\n";
    else 
        breed = mBreed;
}

void Dog::setAge(int mAge) {
    if (mAge < 0) 
        cout << "Enter valid age.\n";

    else 
        age = mAge;
}

void Dog::setID(int mID) {
    if (mID < 10000 || mID > 99999) 
        cout << "ID must be within 10000 & 99999.\n";
    else 
        ID = mID;
    
}


// GETTERS
string Dog::getName() const {
    return name;
}

string Dog::getBreed() const {
    return breed;
}

int Dog::getAge() const {
    return age;
}

int Dog::getID() const {
    return ID;
}

// METHODS
void Dog::display() const {
    cout << "\nName: " << getName() << endl;
    cout << "Age (Dog yrs): " << getAge() << endl;
    cout << "Age (Human yrs): " << humanAge() << endl;
    cout << "Breed: " << getBreed() << endl;
    cout << "ID: " << getID() << endl;
}

int Dog::humanAge() const {
    return 7 * getAge();
}

// C-TYPE FUNCS

void printDogKennel(const vector<Dog> &kennel) {
    for (int i = 0; i < kennel.size(); i++) {
        kennel[i].display();
    }
}


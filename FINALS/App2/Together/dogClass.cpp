#include <vector>
#include <iomanip>
#include <iostream>
#include <string>

class Dog {
    private:
        std::string 
            dogName,
            dogSize;
        int ID;
      float kennelHours;

    public:
        Dog(std::string argName = "", std::string argSize = "", int argID = 0, float argHours = 0);

        std::string 
            getDogName(),
            getDogSize();
        int getID();
      float getKennelHours();

        void setDogName(std::string argName),
             setDogSize(std::string argSize),
             setID(int argID),
             setKennelHours(float argHours),

             display();

        float calcBoardCost();
};


int main() {

    std::vector<Dog> dogKennel;

    Dog One("Max", "large", 1, 2.5);
    Dog Two("Martha", "medium", 2, 1);
    Dog Three("Rex", "small", 3, 3.5);

    dogKennel = {One, Two, Three};

    std::cout << std::fixed << std::setprecision(2);
    
    for (int i = 0; i < dogKennel.size(); i++) {
        dogKennel[i].display();
        std::cout << "Kennel boarding cost: $" << dogKennel[i].calcBoardCost() << std::endl;
    }

    return 0;
}


// CONSTRUCTOR
    Dog::Dog(std::string argName, std::string argSize, int argID, float argHours) {
        setDogName(argName);
        setDogSize(argSize);
        setID(argID);
        setKennelHours(argHours);
    }

// GETTERS
    std::string Dog::getDogName() {
        return dogName;
    }

    std::string Dog::getDogSize() {
        return dogSize;
    }

    int Dog::getID() {
        return ID;
    }

    float Dog::getKennelHours() {
        return kennelHours;
    }

// SETTERS
    void Dog::setDogName(std::string argName) {
        if(argName != "" && argName != " ") dogName = argName;
        else std::cout << "Invalid name.\n";
    }

    void Dog::setDogSize(std::string argSize) {
        if (argSize == "small" || argSize == "medium" || argSize == "large") dogSize = argSize;
        else std::cout << "Invalid size.\n"; 
    }

    void Dog::setID(int argID) {
        if (argID > 0) ID = argID;
        else std::cout << "Invalid ID\n";
    }

    void Dog::setKennelHours(float argHours) {
        if (argHours > 0) kennelHours = argHours;
        else std::cout << "Invalid hours.\n";
    }

// REG. METHODS
    void Dog::display() {
        std::cout << "\nName: " << getDogName() << std::endl;
        std::cout << "Size: " << getDogSize() << std::endl;
        std::cout << "ID: " << getID() << std::endl;
        std::cout << "Hours in kennel: " << getKennelHours() << std::endl;
    }

    float Dog::calcBoardCost() {
        if (getDogSize() == "small") return 0.45 * getKennelHours();
        else if (getDogSize() == "medium") return 0.75 * getKennelHours();
        
        return 1.5 * getKennelHours();
    }



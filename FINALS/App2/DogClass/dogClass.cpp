#include "./dogClass.hpp"


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


#pragma once

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

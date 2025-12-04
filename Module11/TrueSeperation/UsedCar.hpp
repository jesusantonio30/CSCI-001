#pragma once

#include <iostream>
#include <string>

using namespace std;

struct UsedCar
{
    private:
        string make, model;
        int year, mileage;

    public:
        UsedCar(string argMake = "Honda", string argModel = "Civic", int argYear = 2026, int argMileage = 0);
        void setMake(string arg);
        string getMake(void);

        void setModel(string arg);
        string getModel(void);

        void setYear(int arg);
        int getYear(void);

        void setMileage(int arg);
        int getMileage(void);

        void printCar(void);
};

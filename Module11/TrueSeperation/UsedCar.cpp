#include "UsedCar.hpp"

UsedCar::UsedCar(string argMake, string argModel, int argYear, int argMileage) {
    setMake(argMake);
    setModel(argModel);
    setYear(argYear);
    setMileage(argMileage);
}

void UsedCar::setMake(string arg)
{
    make = arg;
}

string UsedCar::getMake(void)
{
    return make;
}

void UsedCar::setModel(string arg)
{
    model = arg;
}

string UsedCar::getModel(void)
{
    return model;
}

void UsedCar::setYear(int arg)
{
    if (arg >= 0)
    year = arg;
    else
    year = 0;
}

int UsedCar::getYear(void)
{
    return year;
}

void UsedCar::setMileage(int arg)
{
    if (arg >= 0)
    mileage = arg;
    else
    mileage = 0;
}

int UsedCar::getMileage(void)
{
    return mileage;
}

void UsedCar::printCar(void)
{
    cout << "Model: " << getModel() << endl
    << "Make: " << getMake() << endl
    << "Year: " << getYear() << endl
    << "Mileage: " << getMileage() << endl << endl;
}

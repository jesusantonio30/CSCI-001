#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>

#include "UsedCar.hpp"
#include "MoralesUtils.hpp"

using namespace std;
using namespace Morales;

/*
    Notes:

    Don't compile .hpp files directly — they're headers.
    Compile source.cpp and UsedCar.cpp together.
    -o program names the output program (not UsedCar).

        g++ -std=c++17 -Wall source.cpp UsedCar.cpp MoralesUtils.cpp -o program

    Header files are for declaring functions
    Source files are for implementation
*/

int main(void)
{
    srand(time(0));

    vector<UsedCar> cars;
    string tempStr;
    int tempInt;
    UsedCar tempCar;

    cout << "This program stores car information that you enter. Please enter your car(s).\n" << endl;
    do
    {
        cout << "Enter your model: ";
        getline(cin, tempStr);
        tempCar.setModel(tempStr);

        cout << "Enter your make: ";
        getline(cin, tempStr);
        tempCar.setMake(tempStr);

        cout << "Enter your year: ";
        cin >> tempInt;
        tempCar.setYear(tempInt);

        cout << "Enter your mileage: ";
        cin >> tempInt;
        tempCar.setMileage(tempInt);

        cars.push_back(tempCar);

    } while (runAgain());


    cout << "\n\n *** Displaying cars: "<< endl;
    for (int i = 0; i < cars.size(); i++) {
        cout << "Car #" << i << ": \n";
        cars[i].printCar();
    }

    cout << endl;

    tempInt = rand() % cars.size();
    cout << "\n*** Randomly displaying car #" << tempInt + 1 << ": \n";

    cars[tempInt].printCar();

    return 0;
}

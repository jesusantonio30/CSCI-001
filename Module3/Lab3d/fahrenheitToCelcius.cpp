#include <iostream>
#include <iomanip>
using namespace std;

float celciusToFahrenheit(double celcius);

int main() {

    float celcius;

    cout << "Celcius to Fahrenheit Formula: (x°C * 9/5) + 32" << endl;
    cout << "Enter Celcius: ";
     cin >> celcius;
    cout << fixed << setprecision(1) << "Result: (" << celcius << "°C * 9/5) + 32 = " << celciusToFahrenheit(celcius) << "°F" << endl;


    return 0;
}

float celciusToFahrenheit(double celcius) {
    return celcius * 9 / 5 + 32;
}

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    float fahrenheit;
    float celcius;

    cout << "Enter fahrenheit: ";
    cin >> fahrenheit;

    celcius = ((fahrenheit - 32) * 5)/9;

    setprecision(2);
    cout << "Celcius: " << fixed << setprecision(1) << celcius << endl;
    return 0;
}

// U+00B0

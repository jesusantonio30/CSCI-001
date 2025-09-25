#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float parkingFee(float time);

int main() {

    float hoursParked;

    cout << "Enter hours parked: ";
    cin >> hoursParked;

    cout << "Hours parked: " << hoursParked << "hr(s)." << endl;
    cout << "Parking Fee: $" << fixed << setprecision(2) << parkingFee(ceil(hoursParked)) << endl;
    return 0;
}

float parkingFee(float time) {


    if(time <= 2) {
        return 5;
    } else if(time > 2 && time < 24 ) {
        float additionalHours = time - 2;
        return additionalHours * 1.5 + 5;
    } else {
        return 20;
    }
}

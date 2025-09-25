#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float bmiCalc(float weight, float height);

int main() {

    float weight;
    float heightFt;
    float heightIn;
    float height;
    float bmi;

    cout << "-----------------------------------" << endl;
    cout << "|      Body Mass Index (BMI)      |" << endl;
    cout << "| A measure of body fat in adults |" << endl;
    cout << "-----------------------------------" << endl;
    cout << "|                                 |" << endl;
    cout << "| Weight (pounds):                |" << endl;
    cout << "  "; 
    cin >> weight;
    cout << "|                                 |" << endl;
    cout << "|                                 |" << endl;
    cout << "| Height:                         |" << endl;
    cout << "|   Feet: ";
    cin >> heightFt;
    cout << "|   Inches: ";
    cin >> heightIn;
    cout << "|                                 |" << endl;
    height = heightFt * 12 + heightIn;
    cout << "-----------------------------------" << endl;
    cout << "|                                 |" << endl;
    bmi = bmiCalc(weight, height);
    cout << fixed << setprecision(2);
    cout << "|        Your BMI: " << bmi << "          |" << endl;
    if (bmi < 18.5) {
        cout << "|      You are underweight        |" << endl;
    } else if (bmi < 25 & bmi >= 18.5) {
        cout << "|    You are at healthy weight    |" << endl;
    } else if (bmi < 30 & bmi >= 25) {
        cout << "|       You are overweight        |" << endl;
    } else if (bmi >= 30) {
        if (bmi < 35 & bmi >= 30) {
            cout << "|   You are at Class 1 Obesity    |" << endl;
        } else if (bmi < 40 & bmi >= 35) {
            cout << "|   You are at Class 2 Obesity    |" << endl;
        } else {
           cout << "|    You are at Class 3 Obesity   |\n|        (Severe Obesity)         |" << endl; 
        }
    }
    cout << "|                                 |" << endl;
    cout << "-----------------------------------" << endl;
    return 0;
}

float bmiCalc(float weight, float height) {
    return weight * 703 / pow(height, 2);
}

#include <iostream>
#include <iomanip>

using namespace std;

float payroll(float hours, float hourlyRate);

int main() {
    float hoursWorked;
    float hourlyRate;

    cout << "\n-------- WORKWEEK --------" << endl;
    cout << "        Time Entry          " << endl;

    cout << "\nEnter hours worked this week: ";
    cin >> hoursWorked;

    cout << "Enter hourly rate: $";
    cin >> hourlyRate;
    cout << fixed << setprecision(2);

    cout << "\n--------- INCOME ---------" << endl;
    cout << "\nWeek's Pay: $" << payroll(hoursWorked, hourlyRate) << '\n' << endl;
    return 0;
}

float payroll(float hours, float hourlyRate) {
    float otRate;
    float otPay;

    if (hours > 40) {
        otRate = hourlyRate * 1.5;
        otPay = (hours - 40) * otRate;

        return 40 * hourlyRate + otPay;
    } else {
        return hours * hourlyRate;
    }
}

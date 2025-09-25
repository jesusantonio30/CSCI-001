#include <iostream>
#include <iomanip>

using namespace std;

string serverName;
double foodCost;
double tipPerc;


int main() {

    cout << "Enter server name: ";
    getline(cin, serverName);

    cout << "Cost of service: $";
    cin >> foodCost;

    cout << "Enter tip amount (10%, 15%, 20%): ";
    cin >> tipPerc;

    cout << "===========================================" << endl;
    cout << "\n\tServer Name:\t" << serverName << '\n';
    cout << "\tFood Cost:\t$" << foodCost << '\n';

    // Assigning tip amount
    double tipAmt = foodCost * (tipPerc / 100);

    cout << "\tTip:\t\t$" << fixed << setprecision(2) << tipAmt << '\n';
    

    tipAmt = foodCost * (tipPerc / 100);
    cout << "\tTotal Bill:\t$" << foodCost + tipAmt << '\n';
    cout << "\n===========================================\n";

    return 0;
}

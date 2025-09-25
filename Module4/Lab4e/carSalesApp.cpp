
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

float commCalc(float dollar, float rate);

int main() {
    string jobRole;
    float salesAmt;

    cout << "\n=====================================" << endl;
    cout << "Commission Calculator" << endl;
    cout << "=====================================" << endl;
    cout << "\n** Enter job role (salesperson or loan officer): ";
    getline(cin, jobRole);

    cout << "** Enter sales amount in dollars (e.g., 15000.00): $";
    cin >> salesAmt;
    cin.ignore();

    cout << "\n--- Commission Summary ---\n";
    if (jobRole == "salesperson") {
        cout << "Job Role: Sales Person" << endl;
        if (salesAmt <= 12000) {
            cout << commCalc(salesAmt, 2.1) << endl;
        } else if (salesAmt > 12000 & salesAmt <= 22000) {
            cout << commCalc(salesAmt, 2.9) << endl;
        } else {
            cout << commCalc(salesAmt, 3.2) << endl;
        }
    } else {
        cout << "Job Role: Loan Officer\n" << endl;
        if (salesAmt <= 12000) {
            cout << commCalc(salesAmt, 0.5) << endl;
        } else if (salesAmt > 12000 & salesAmt <= 22000) {
            cout << commCalc(salesAmt, 0.7) << endl;
        } else {
            cout << commCalc(salesAmt, 1.0) << endl;
        }
    }

    cout << "\n=====================================\n" << endl;
    return 0;
}

float commCalc(float dollar, float rate) {
    cout << fixed << setprecision(2);
    cout << "Commission Rate: " << rate << "%" << endl;
    cout << "Commission Amount: $" << rate / 100 * dollar << '\n';
    cout << "\nTotal (Sales + Commission): $";

    return rate / 100 * dollar + dollar;
}

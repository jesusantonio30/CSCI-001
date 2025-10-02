
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

    cout << fixed << setprecision(2);

    cout << "\n--- Commission Summary ---\n";
    if (jobRole == "salesperson") {
        cout << "Job Role: Sales Person" << endl;
        float rate;
        if (salesAmt <= 12000) {
            rate = 2.1;
        } else if (salesAmt > 12000 && salesAmt <= 22000) {
            rate = 2.9;
        } else {
            rate = 3.2;
        }
        float comm = commCalc(salesAmt, rate);
        cout << "Commission Rate: " << rate << "%" << endl;
        cout << "Commission Amount: $" << comm << endl;
        cout << "\nTotal (Sales + Commission): $" << (salesAmt + comm) << endl;
    } else {
        cout << "Job Role: Loan Officer" << endl;
        float rate;
        if (salesAmt <= 12000) {
            rate = 0.5;
        } else if (salesAmt > 12000 && salesAmt <= 22000) {
            rate = 0.7;
        } else {
            rate = 1.0;
        }
        float comm = commCalc(salesAmt, rate);
        cout << "Commission Rate: " << rate << "%" << endl;
        cout << "Commission Amount: $" << comm << endl;
        cout << "\nTotal (Sales + Commission): $" << (salesAmt + comm) << endl;
    }

    cout << "\n=====================================\n" << endl;
    return 0;
}

float commCalc(float dollar, float rate) {
    return rate / 100 * dollar;
}

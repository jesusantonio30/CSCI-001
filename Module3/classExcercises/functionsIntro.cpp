#include <iostream> 
#include <iomanip>
using namespace std;

float amountDue(float bill, float tax);
float taxCalc (float total, float taxRate);

int main() {

    float totalBill;
    float taxRate;
    // float taxAmount;


    cout << "\nEnter price: ";
    cin >> totalBill;
    cout << "Enter state tax rate: ";
    cin >> taxRate;

    // taxAmount = taxRate / 100 * totalBill;

    cout << fixed << setprecision(2);
    cout << "\n\t    Joe's Pizza" << endl;
    cout << "\nTotal Bill:\t\t$" << totalBill << endl;
    cout << "State Tax:\t\t$" << taxCalc(totalBill, taxRate) << endl;
    cout << "Amount Due:\t\t$" << amountDue(totalBill, taxRate) << endl;
    cout << '\n';

    return 0;
}




float amountDue(float bill, float tax) {
    float taxRate = tax / 100;
    return bill * taxRate + bill;
}

float taxCalc (float total, float taxRate) {
    return taxRate / 100 * total;
}

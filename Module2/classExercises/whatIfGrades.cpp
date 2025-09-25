#include <iostream>
using namespace std;

int main () {

    string userName;
    int hw, test, final;

    cout << "=============================================\n";
    cout << "\nWhat is your name?: ";
    getline(cin, userName);
    cout << "\nHello, " << userName << '\n';

    cout << "\n\tEnter Home Work Grade: ";
    cin >> hw;

    cout << "\tEnter Test Grade: ";
    cin >> test;

    cout << "\tEnter Final Grade: ";
    cin >> final;

    double classGrade = (.10*hw) + (.60*test) + (.30*final);

    // grade = (.10*hw) + (.60*test) + (.30*final)

    cout << "\nGrade = " << "( " << ".10*" << hw << " )" << " + " << "( " << ".60*" << test << " )" << " + " << "( " << ".30*" << final << " )" << endl;
    cout << "\nThank you " << userName << ", your grade is " << classGrade << '%' << endl;
    cout << "\n=============================================\n";

    return 0;
}

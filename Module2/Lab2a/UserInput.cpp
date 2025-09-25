#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int x, y, z, u, v;

    
    cout << "Enter an integer: ";
    cin >> x;

    cout << "Enter an integer: ";
    cin >> y;

    cout << "Enter an integer: ";
    cin >> z;

    cout << "Enter an integer: ";
    cin >> u;

    cout << "Enter an integer: ";
    cin >> v;
    

    cout << "You typed in " << x << ", " << y << ", " << z << ", " << u << ", " << v << '.' << endl;

    int sum = x + y + z + u + v;
    cout << "The average is: " << '(' << x << " + " << y << " + " << z << " + " << u << " + " << v << ')' << " / " << '5' << " = " << fixed << setprecision(1) << double(sum) / 5 << endl;


    return 0;
}

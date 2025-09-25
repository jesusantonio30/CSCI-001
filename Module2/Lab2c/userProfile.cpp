#include <iostream>
using namespace std;

int main () {
    
    string userName;
    string userMajor;
    string userLastMathClass;
    string userFavApp;
    string userHomeComp;


    cout << "\n=/=/=/=/=/=/=/=/=/=/=/=/ USER INPUT =/=/=/=/=/=/=/=/=/=/=/=/" << endl;

        cout << "\n\tEnter name: ";
        getline(cin, userName);

        cout << "\tEnter major: ";
        getline(cin, userMajor);

        cout << "\tEnter last math class: ";
        getline(cin, userLastMathClass);

        cout << "\tEnter favorite app: ";
        getline(cin, userFavApp);

        cout << "\tEnter home computer type: ";
        getline(cin, userHomeComp);

    cout << "\n=/=/=/=/=/=/=/=/=/=/=/=/ USER OUTPUT =/=/=/=/=/=/=/=/=/=/=/=/" << endl;
            
        cout << "\n\tMy name is " << userName << " and my major is " << userMajor << " with last math class " << userLastMathClass << '.' << endl;
        
        cout << "\n\tI like to use the app " << userFavApp << " on a " << userHomeComp << '.' << endl;
        cout << '\n';

    cout << "=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=/=" << endl;
    cout << '\n';

    return 0;
}

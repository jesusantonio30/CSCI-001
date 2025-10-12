#include <iostream>
#include <string>

using namespace std;

double average( double *a, const int size);

int main() {

    const int size = 5;
    double data[size];
    char runAgain;

    cout << "\n---------- Find The Average of " << size << " Values ----------\n" << endl;;

    int i;

    do {
        for (i = 0; i < size; i++) {
            cout << "Enter value " << i + 1 << ": " ;
            cin >> data[i];
        }

        cout << "\nYour values are: ";

        for (i = 0; i < size; i++) {
            if (i != size - 1 ){
                cout << data[i] << ", ";
            } else {
                cout << data[i] << endl;
            }
        }

        cout << "And the average is: " << average(data, size) << '\n' << endl;

        cout << "\n\nWant to run again? (y/n): ";
        cin >> runAgain;
        
    } while (runAgain == 'y');

    return 0;
}

// Switched parameter to pointer to slowly get the hang of it
double average( double *a, const int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++){
        sum += a[i];
    }
    double avg = sum / size;

    return avg;
}

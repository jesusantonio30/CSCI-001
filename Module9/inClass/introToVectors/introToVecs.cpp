#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void printVecCont(vector<int>& arg);

struct Point {
    double x, y;

    void print();
};

int main() {

    // Vectors are passed by value by default

    srand(time(NULL));

    vector<int> vec1;

    printVecCont(vec1);

    return 0;
}

void Point::print() {
    cout << "( " << x << ", " << y << " )" << endl;
}

// Vectors are passed by value by default
void printVecCont(vector<int>& arg) {
    for (int i = 0; i < 10; i++) {
        arg.push_back(rand() % 10);
        cout << "Content at " << i << ": " << arg[i] << endl;
    }

    cout << "\nVector size: " << arg.size() << endl;
}



#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Point {
    double x, y;

    void print();
};

void printVecCont(vector<char>& arg);
void printPoints(vector<Point>& arg);

int main() {

    Point temp;
    temp.x = 3;
    temp.y = 4;

    vector<Point> w;

    for (int i = 0; i < 5; i++) {
        w.push_back(temp);
    }

    printPoints(w);

    

    return 0;
}

void Point::print() {
    cout << "( " << x << ", " << y << " )" << endl;
}

// Vectors are passed by value by default
void printVecCont(vector<char> & arg) {
    for (int i = 0; i < 10; i++) {
        arg.push_back(rand() % 10);
        cout << "Content at " << i << ": " << arg[i] << endl;
    }

    cout << "\nVector size: " << arg.size() << endl;
}

void printPoints(vector<Point>& arg) {
    for (int i = 0; i < arg.size(); i++) {
        arg[i].print();
    }
}



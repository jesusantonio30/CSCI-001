
#include "./PointClass/pointClass.hpp"
#include "./LineClass/lineClass.hpp"

#include <vector>
#include <iomanip>
#include <iostream>

int main() {

    Point a(42, 56);
    Point b(7, 36);
    Line myLine(a, b);

    std::cout << std::fixed << std::setprecision(2);
    myLine.printLine();

    return 0;
}


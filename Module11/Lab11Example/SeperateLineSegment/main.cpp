#include "./PointClass/pointClass.hpp"
#include "./LineClass/lineClass.hpp"

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip>

int main() {
    srand(time(0));

    std::vector<Segment> segments;

    int numOfSegments = 50;

    for (int i = 0; i < numOfSegments; ++i) {
        double randX1 = 1.0 * rand() / RAND_MAX;
        double randY1 = 1.0 * rand() / RAND_MAX;

        double randX2 = 1.0 * rand() / RAND_MAX;
        double randY2 = 1.0 * rand() / RAND_MAX;

        segments.push_back(Segment(Point(randX1, randY1), Point(randX2, randY2)));
    }

    std::cout << std::fixed << std::setprecision(2);

    for (int i = 0; i < segments.size(); i++) {

        std::cout << "\nLine Segment " << i + 1 << " -------------------" << std::endl;

        std::cout << "\nPoint A: ";
        segments[i].getA().print();

        std::cout << "Point B: ";
        segments[i].getB().print();
        std::cout << "Length: " << segments[i].length() << std::endl;
    }

    return 0;
}

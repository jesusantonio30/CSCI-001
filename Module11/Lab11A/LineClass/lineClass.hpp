#pragma once
#include "../PointClass/pointClass.hpp"

struct Line {
    Point a, b;

    Line(Point mA = {}, Point mB = {});

    void printLine();
    double slope();
    double yIntercept();
    double evaluation(double mX);
};

#pragma once

#include "../PointClass/pointClass.hpp"


class Segment {
    private:
        Point A, B;

    public:
        Segment(Point a = {}, Point b = {});

        void setA(Point argA);
        void setB(Point argB);
        Point getA();
        Point getB();

        double length();
};

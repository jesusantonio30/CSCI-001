#pragma once

class Point {
    private:
        double X, Y;

    public:
        Point(double x = 0, double y = 0);

        void setX(double argX);
        void setY(double argY);
        double getX();
        double getY();

        void print();
};

#ifndef GEOMETRIA_H
#define GEOMETRIA_H

#include <iostream>
#include <cmath>

class point {
private:
    int x;
    int y;

public:
    point();
    point(int x, int y);
    void setX(int x);
    void setY(int y);
    int getX();
    int getY();
};

class Triangle {
private:
    point vertex1;
    point vertex2;
    point vertex3;
    double dist1;
    double dist2;
    double dist3;

public:
    Triangle();
    Triangle(point vertex1, point vertex2, point vertex3);
    double perimeter();
    double area();
    void showVertex();
};

#endif // GEOMETRY_H


#ifndef TRIANGULOEVIDENCIA_GEOMETRIA_H
#define TRIANGULOEVIDENCIA_GEOMETRIA_H

#endif //TRIANGULOEVIDENCIA_GEOMETRIA_H

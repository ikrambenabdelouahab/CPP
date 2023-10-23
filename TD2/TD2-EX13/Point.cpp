// Point.cpp (D�finition de la classe)
#include "Point.h"
#include <iostream>
using namespace std;

Point::Point(float x, float y) : x(x), y(y) {}

void Point::deplace(float dx, float dy) {
    x += dx;
    y += dy;
}

void Point::affiche() {
    cout << "Coordonn�es du point : (" << x << ", " << y << ")" << endl;
}

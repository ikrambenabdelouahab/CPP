// main.cpp (Programme principal)
#include "Point.h"

int main() {
    Point p(2.0, 3.0); // Cr�e un point avec les coordonn�es (2.0, 3.0)

    p.affiche(); // Affiche les coordonn�es du point

    p.deplace(1.0, -1.0); // D�place le point de (1.0, -1.0)

    p.affiche(); // Affiche les nouvelles coordonn�es du point

    return 0;
}

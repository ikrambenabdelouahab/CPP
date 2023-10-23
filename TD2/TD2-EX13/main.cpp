// main.cpp (Programme principal)
#include "Point.h"

int main() {
    Point p(2.0, 3.0); // Crée un point avec les coordonnées (2.0, 3.0)

    p.affiche(); // Affiche les coordonnées du point

    p.deplace(1.0, -1.0); // Déplace le point de (1.0, -1.0)

    p.affiche(); // Affiche les nouvelles coordonnées du point

    return 0;
}

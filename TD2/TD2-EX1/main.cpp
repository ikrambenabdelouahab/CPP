#include <iostream>
using namespace std;

// Variable statique pour conserver le nombre d'appels
static int nombreAppels = 0;

void afficherAppelNumero() {
    // Incr�mente le nombre d'appels � chaque appel de la fonction
    nombreAppels++;
}

int main() {
    afficherAppelNumero();
    afficherAppelNumero();
    afficherAppelNumero();

    // Affiche le nombre d'appels
    cout << "Appel numero " << nombreAppels << endl;
    return 0;
}

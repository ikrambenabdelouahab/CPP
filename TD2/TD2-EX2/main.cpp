#include <iostream>
using namespace std;

// Fonction pour vérifier si un nombre est pair (multiple de 2)
bool estMultipleDe2(int nombre) {
    return nombre % 2 == 0;
}

// Fonction pour vérifier si un nombre est multiple de 3
bool estMultipleDe3(int nombre) {
    return nombre % 3 == 0;
}

int main() {
    int nombre;
    cout << "Donnez un entier : ";
    cin >> nombre;

    if (estMultipleDe2(nombre)) {
        cout << "Il est pair" << endl;
    }
    if (estMultipleDe3(nombre)) {
        cout << "Il est multiple de 3" << endl;
    }
    if (estMultipleDe2(nombre) && estMultipleDe3(nombre)) {
        cout << "Il est divisible par 6" << endl;
    }

    return 0;
}

// Q1 ---- En Utilisant le formalisme tableau
// --------------------------------------------
#include <iostream>
using namespace std;

int main() {
    int tableau[10];
    int plusPetit, plusGrand;

    cout << "Remplissage du tableau de 10 entiers : " << endl;
    // Lecture des 10 nombres entiers dans le tableau
    for (int i = 0; i < 10; i++) {
        cout << "\t# " << i+1 << " : ";
        cin >> tableau[i];
    }

    // Initialisation des variables plusPetit et plusGrand avec les premières valeurs du tableau
    plusPetit = plusGrand = tableau[0];

    // Recherche du plus petit et du plus grand nombre
    for (int i = 1; i < 10; i++) {
        if (tableau[i] < plusPetit) {
            plusPetit = tableau[i];
        }
        if (tableau[i] > plusGrand) {
            plusGrand = tableau[i];
        }
    }

    cout << "Le plus petit nombre est : " << plusPetit << endl;
    cout << "Le plus grand nombre est : " << plusGrand << endl;

    return 0;
}

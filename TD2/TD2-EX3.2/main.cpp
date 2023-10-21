// Q2 - En Utilisant le formalisme pointeur lorsque possible
#include <iostream>
using namespace std;

int main() {
    int tableau[10];
    int *ptr = tableau; // Pointeur pointant vers le début du tableau
    int plusPetit, plusGrand;

    cout << "Remplissage du tableau de 10 entiers : " << endl;
    // Lecture des 10 nombres entiers dans le tableau en utilisant le pointeur
    for (int i = 0; i < 10; i++) {
        cout << "\t# " << i+1 << " : ";
        cin >> *(ptr + i);
    }

    // Initialisation des variables plusPetit et plusGrand avec les premières valeurs du tableau
    plusPetit = plusGrand = *ptr;

    // Recherche du plus petit et du plus grand nombre en utilisant le pointeur
    for (int i = 1; i < 10; i++) {
        if (*(ptr + i) < plusPetit) {
            plusPetit = *(ptr + i);
        }
        if (*(ptr + i) > plusGrand) {
            plusGrand = *(ptr + i);
        }
    }

    cout << "Le plus petit nombre est : " << plusPetit << endl;
    cout << "Le plus grand nombre est : " << plusGrand << endl;

    return 0;
}

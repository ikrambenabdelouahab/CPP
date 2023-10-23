#include <iostream>
using namespace std;

int main() {
    int taille;

    // Étape 1 : Allouer dynamiquement un tableau pour stocker des nombres entiers
    cout << "Entrez la taille du tableau : ";
    cin >> taille;
    int *premierTableau = new int[taille];

    // Lire les nombres entiers dans le premier tableau
    cout << "Remplissage du tableau : " << endl;
    for (int i = 0; i < taille; i++) {
        cout << "\t #" << i+1 << " : ";
        cin >> premierTableau[i];
    }

    // Étape 2 : Créer dynamiquement un nouveau tableau pour stocker les carrés des nombres
    int *deuxiemeTableau = new int[taille];

    for (int i = 0; i < taille; i++) {
        deuxiemeTableau[i] = premierTableau[i] * premierTableau[i];
    }

    // Étape 3 : Supprimer le premier tableau et afficher les valeurs du second
    cout << "Les carres des nombres du premier tableau sont : ";
    for (int i = 0; i < taille; i++) {
        cout << deuxiemeTableau[i] << " ";
    }
    cout << endl;

    // Libérer la mémoire allouée dynamiquement pour les tableaux
    delete[] premierTableau;
    delete[] deuxiemeTableau;

    return 0;
}

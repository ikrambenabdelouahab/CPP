#include <iostream>
using namespace std;


int main() {
    int entiers[10];

    // Demander à l'utilisateur de saisir 10 entiers et les stocker dans un tableau
    cout << "Veuillez entrer 10 entiers : " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> entiers[i];
    }

    // Tri à bulles
    int n = 10;
    int n_echanges;
    do {
        n_echanges = 0;
        for (int i = 0; i < n - 1; i++) {
            if (entiers[i] > entiers[i + 1]) {
                // Échange des éléments si nécessaire
                int temp = entiers[i];
                entiers[i] = entiers[i + 1];
                entiers[i + 1] = temp;
                n_echanges++;
            }
        }
    } while (n_echanges > 0);

    // Afficher le tableau trié
    cout << "Tableau trie par ordre croissant : " << endl;
    for (int i = 0; i < 10; i++) {
        cout << entiers[i] << " ";
    }
    cout << endl;

    return 0;
}

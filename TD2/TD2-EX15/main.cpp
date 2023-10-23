#include <iostream>

class Fichier {
private:
    char* P;        // Pointeur vers la zone mémoire
    int longueur;   // Longueur en nombre d'octets

public:
    // Constructeur
    Fichier(int taille) : longueur(taille) {
        P = new char[longueur]; // Alloue de la mémoire
    }

    // Destructeur
    ~Fichier() {
        delete[] P; // Libère la mémoire
    }

    // Alloue un certain espace à partir du pointeur P
    void Creation() {
        if (P != nullptr) {
            delete[] P; // Libère l'espace existant
            P = new char[longueur]; // Alloue de la mémoire
        }
    }

    // Remplit arbitrairement l'espace alloué
    void Remplit() {
        if (P != nullptr) {
            // Remplit arbitrairement la zone mémoire (à des fins de démonstration)
            for (int i = 0; i < longueur; i++) {
                P[i] = 'A' + (i % 26); // Remplit avec des lettres de l'alphabet
            }
        }
    }

    // Affiche la zone mémoire pointée par P
    void Affiche() {
        if (P != nullptr) {
            for (int i = 0; i < longueur; i++) {
                std::cout << P[i];
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    Fichier* fichier = new Fichier(100); // Crée un objet Fichier avec une longueur de 100 octets

    fichier->Creation(); // Alloue de la mémoire
    fichier->Remplit();  // Remplit la mémoire avec des données arbitraires
    fichier->Affiche();  // Affiche les données

    delete fichier; // Supprime l'objet (appelle le destructeur)

    return 0;
}

#include <iostream>

class Fichier {
private:
    char* P;        // Pointeur vers la zone m�moire
    int longueur;   // Longueur en nombre d'octets

public:
    // Constructeur
    Fichier(int taille) : longueur(taille) {
        P = new char[longueur]; // Alloue de la m�moire
    }

    // Destructeur
    ~Fichier() {
        delete[] P; // Lib�re la m�moire
    }

    // Alloue un certain espace � partir du pointeur P
    void Creation() {
        if (P != nullptr) {
            delete[] P; // Lib�re l'espace existant
            P = new char[longueur]; // Alloue de la m�moire
        }
    }

    // Remplit arbitrairement l'espace allou�
    void Remplit() {
        if (P != nullptr) {
            // Remplit arbitrairement la zone m�moire (� des fins de d�monstration)
            for (int i = 0; i < longueur; i++) {
                P[i] = 'A' + (i % 26); // Remplit avec des lettres de l'alphabet
            }
        }
    }

    // Affiche la zone m�moire point�e par P
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
    Fichier* fichier = new Fichier(100); // Cr�e un objet Fichier avec une longueur de 100 octets

    fichier->Creation(); // Alloue de la m�moire
    fichier->Remplit();  // Remplit la m�moire avec des donn�es arbitraires
    fichier->Affiche();  // Affiche les donn�es

    delete fichier; // Supprime l'objet (appelle le destructeur)

    return 0;
}

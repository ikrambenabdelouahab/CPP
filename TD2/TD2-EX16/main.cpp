#include <iostream>

// Structure pour un �l�ment de la liste
struct Element {
    int donnee;
    Element* suivant;

    Element(int val) : donnee(val), suivant(nullptr) {}
};

class Liste {
private:
    Element* premier;

public:
    Liste() : premier(nullptr) {}

    // Ajouter un �l�ment au d�but de la liste
    void ajouter(int valeur) {
        Element* nouvelElement = new Element(valeur);
        nouvelElement->suivant = premier;
        premier = nouvelElement;
    }

    // Supprimer le premier �l�ment de la liste
    void supprimer() {
        if (premier != nullptr) {
            Element* temp = premier;
            premier = premier->suivant;
            delete temp;
        }
    }

    // Afficher la liste en entier
    void afficher() {
        Element* courant = premier;
        while (courant != nullptr) {
            std::cout << courant->donnee << " ";
            courant = courant->suivant;
        }
        std::cout << std::endl;
    }

    // Destructeur pour lib�rer la m�moire
    ~Liste() {
        while (premier != nullptr) {
            supprimer();
        }
    }
};

int main() {
    Liste liste;

    liste.ajouter(10);
    liste.ajouter(20);
    liste.ajouter(30);

    std::cout << "Liste : ";
    liste.afficher();

    liste.supprimer();
    std::cout << "Apr�s suppression du premier �l�ment : ";
    liste.afficher();

    return 0;
}

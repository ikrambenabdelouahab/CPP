#include <iostream>

// Structure pour un élément de la liste
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

    // Ajouter un élément au début de la liste
    void ajouter(int valeur) {
        Element* nouvelElement = new Element(valeur);
        nouvelElement->suivant = premier;
        premier = nouvelElement;
    }

    // Supprimer le premier élément de la liste
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

    // Destructeur pour libérer la mémoire
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
    std::cout << "Après suppression du premier élément : ";
    liste.afficher();

    return 0;
}

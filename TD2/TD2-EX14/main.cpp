#include <iostream>

class ElementPile {
public:
    // liste simplement chainée
    int valeur;
    ElementPile* suivant;

    ElementPile(int val) : valeur(val), suivant(nullptr) {}
};

class Pile {
private:
    ElementPile* sommet;

public:
    Pile() : sommet(nullptr) {}

    ~Pile() {
        while (!estVide()) {
            pop();
        }
    }

    void push(int value) {
        ElementPile* nouvelElement = new ElementPile(value);
        nouvelElement->suivant = sommet;
        sommet = nouvelElement;
    }

    int pop() {
        if (!estVide()) {
            ElementPile* temp = sommet;
            sommet = sommet->suivant;
            int valeur = temp->valeur;
            delete temp;
            return valeur;
        }
        // Gérer le cas où la pile est vide (vous pouvez définir un comportement spécifique)
        return -1;
    }

    bool estVide() {
        return sommet == nullptr;
    }
};

int main() {
    Pile p1;
    Pile p2;

    p1.push(10);
    p1.push(20);
    p1.push(30);

    p2.push(5);
    p2.push(15);

    while (!p1.estVide()) {
        int valeur = p1.pop();
        std::cout << "P1 : " << valeur << std::endl;
    }

    while (!p2.estVide()) {
        int valeur = p2.pop();
        std::cout << "P2 : " << valeur << std::endl;
    }

    return 0;
}

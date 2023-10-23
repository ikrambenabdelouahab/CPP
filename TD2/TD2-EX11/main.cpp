#include <iostream>
#include <cmath>
using namespace std;

class Vecteur3D {
private:
    float x;
    float y;
    float z;

public:
    Vecteur3D(float x = 0, float y = 0, float z = 0) : x(x), y(y), z(z) {}

    void afficher() {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }

    Vecteur3D addition(Vecteur3D autre) {
        return Vecteur3D(x + autre.x, y + autre.y, z + autre.z);
    }

    float produitScalaire(Vecteur3D autre) {
        return x * autre.x + y * autre.y + z * autre.z;
    }

    bool coincide(Vecteur3D autre) {
        return x == autre.x && y == autre.y && z == autre.z;
    }

    float norme() {
        return sqrt(x * x + y * y + z * z);
    }

    static Vecteur3D normax(Vecteur3D v1, Vecteur3D v2) {
        return v1.norme() >= v2.norme() ? v1 : v2;
    }
};

int main() {
    Vecteur3D v1(1.0, 2.0, 3.0);
    Vecteur3D v2(4.0, 5.0, 6.0);

    cout << "Vecteur v1 : ";
    v1.afficher();
    cout << "Vecteur v2 : ";
    v2.afficher();

    Vecteur3D somme = v1.addition(v2);
    cout << "Somme de v1 et v2 : ";
    somme.afficher();

    float produit = v1.produitScalaire(v2);
    cout << "Produit scalaire de v1 et v2 : " << produit << endl;

    bool sontIdentiques = v1.coincide(v2);
    cout << "Les vecteurs v1 et v2 ont les mêmes composantes : " << (sontIdentiques ? "Oui" : "Non") << endl;

    float normeV1 = v1.norme();
    float normeV2 = v2.norme();
    cout << "Norme de v1 : " << normeV1 << endl;
    cout << "Norme de v2 : " << normeV2 << endl;

    Vecteur3D vecteurMax = Vecteur3D::normax(v1, v2);
    cout << "Le vecteur avec la plus grande norme est : ";
    vecteurMax.afficher();

    return 0;
}

#include <iostream>

using namespace std;

class Complexe {
private:
    double reelle;
    double imaginaire;

public:
    Complexe(double re, double im) : reelle(re), imaginaire(im) {}

    Complexe addition(Complexe autre) {
        return Complexe(reelle + autre.reelle, imaginaire + autre.imaginaire);
    }

    Complexe soustraction(Complexe autre) {
        return Complexe(reelle - autre.reelle, imaginaire - autre.imaginaire);
    }

    Complexe multiplication(Complexe autre) {
        double nouvelle_reelle = (reelle * autre.reelle) - (imaginaire * autre.imaginaire);
        double nouvelle_imaginaire = (reelle * autre.imaginaire) + (imaginaire * autre.reelle);
        return Complexe(nouvelle_reelle, nouvelle_imaginaire);
    }

    Complexe division(Complexe autre) {
        double denominateur = autre.reelle * autre.reelle + autre.imaginaire * autre.imaginaire;
        double nouvelle_reelle = (reelle * autre.reelle + imaginaire * autre.imaginaire) / denominateur;
        double nouvelle_imaginaire = (imaginaire * autre.reelle - reelle * autre.imaginaire) / denominateur;
        return Complexe(nouvelle_reelle, nouvelle_imaginaire);
    }

    void afficher() {
        cout << reelle << " + " << imaginaire << "i" << endl;
    }
};

int main() {
    cout << "Opérations sur les nombres complexes" << endl;

    double reelle1, imaginaire1, reelle2, imaginaire2;

    cout << "Entrez les parties réelle et imaginaire du premier nombre complexe:" << endl;
    cout << "Partie réelle : ";
    cin >> reelle1;
    cout << "Partie imaginaire : ";
    cin >> imaginaire1;

    cout << "Entrez les parties réelle et imaginaire du deuxième nombre complexe:" << endl;
    cout << "Partie réelle : ";
    cin >> reelle2;
    cout << "Partie imaginaire : ";
    cin >> imaginaire2;

    Complexe complexe1(reelle1, imaginaire1);
    Complexe complexe2(reelle2, imaginaire2);

    int choix;
    cout << "\nMenu:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Soustraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Choisissez une opération (1/2/3/4) : ";
    cin >> choix;

    Complexe resultat(0,0);

    switch (choix) {
        case 1:
            resultat = complexe1.addition(complexe2);
            break;
        case 2:
            resultat = complexe1.soustraction(complexe2);
            break;
        case 3:
            resultat = complexe1.multiplication(complexe2);
            break;
        case 4:
            resultat = complexe1.division(complexe2);
            break;
        default:
            cout << "Choix invalide." << endl;
            return 1;
    }

    cout << "Résultat de l'opération :" << endl;
    resultat.afficher();

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Chaîne de caractères contenant la date et l'heure sous la forme JJMMAAAAHHNN
    string dateHeure = "010920091123";

    // Extraction des différents champs
    string jour = dateHeure.substr(0, 2);
    string mois = dateHeure.substr(2, 2);
    string annee = dateHeure.substr(4, 4);
    string heure = dateHeure.substr(8, 2);
    string minute = dateHeure.substr(10, 2);

    // Affichage des champs extraits
    cout << "Jour : " << jour << endl;
    cout << "Mois : " << mois << endl;
    cout << "Année : " << annee << endl;
    cout << "Heure : " << heure << endl;
    cout << "Minute : " << minute << endl;

    return 0;
}

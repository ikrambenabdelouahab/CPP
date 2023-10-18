#include <iostream>
using namespace std;

double tauxChangeEuroMAD = 10.0; // Taux de change initial en MAD par €
double tauxChangeDollarMAD = 8.5; // Taux de change initial en MAD par $

double convertirEuroEnMAD(double montant) {
    return montant * tauxChangeEuroMAD;
}

double convertirDollarEnMAD(double montant) {
    return montant * tauxChangeDollarMAD;
}

int main() {
    int choix;
    double montant, resultatEuroMAD, resultatDollarMAD;

    while (true) {
        cout << "Menu de conversion :" << endl;
        cout << "1 - Conversion € / MAD" << endl;
        cout << "2 - Conversion $ / MAD" << endl;
        cout << "3 - Mettre à jour le taux de change €" << endl;
        cout << "4 - Quitter" << endl;
        cout << "Choisissez une option : ";
        cin >> choix;

        switch (choix) {
            case 1:
                cout << "Merci d'entrer la somme en euro : ";
                cin >> montant;
                resultatEuroMAD=convertirEuroEnMAD(montant);
                cout << "L'équivalent de " << montant << " € en MAD est : " << resultatEuroMAD << " DH" << endl;
                break;
            case 2:
                cout << "Merci d'entrer la somme en dollars : ";
                cin >> montant;
                resultatDollarMAD = convertirDollarEnMAD(montant);
                cout << "L'équivalent de " << montant << " $ en MAD est : " << resultatDollarMAD << " DH" << endl;
                break;
            case 3:
                cout << "Merci de mettre à jour le taux de change € : ";
                cin >> tauxChangeEuroMAD;
                break;
            case 4:
                cout << "Au revoir !" << endl;
                return 0;
            default:
                cout<<"Option invalide. Veuillez réessayer."<<endl;
                break;
        }
    }
    return 0;
}
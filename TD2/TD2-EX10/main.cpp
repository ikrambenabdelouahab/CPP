#include <iostream>
#include <string>

using namespace std;

class Personne {
    private:
        string nom;
        string prenom;
        string dateNaissance;

    public:
        Personne(string nom, string prenom, string dateNaissance)
            : nom(nom), prenom(prenom), dateNaissance(dateNaissance) {}

        void Afficher() {
            cout << "Nom : " << nom << endl;
            cout << "Prénom : " << prenom << endl;
            cout << "Date de naissance : " << dateNaissance << endl;
        }
};

class Employe : public Personne {
    private:
        double salaire;

    public:
        Employe(string nom, string prenom, string dateNaissance, double salaire)
            : Personne(nom, prenom, dateNaissance), salaire(salaire) {}

        void Afficher() {
            Personne::Afficher();
            cout << "Salaire : " << salaire << " euros" << endl;
        }
};

class Chef : public Employe {
    private:
        string service;

    public:
        Chef(string nom, string prenom, string dateNaissance, double salaire, string service)
            : Employe(nom, prenom, dateNaissance, salaire), service(service) {}

        void Afficher() {
            Employe::Afficher();
            cout << "Service : " << service << endl;
        }
};

class Directeur : public Chef {
    private:
        string societe;

    public:
        Directeur(string nom, string prenom, string dateNaissance, double salaire, string service, string societe)
            : Chef(nom, prenom, dateNaissance, salaire, service), societe(societe) {}

        void Afficher() {
            Chef::Afficher();
            cout << "Société : " << societe << endl;
        }
};

int main() {
    Directeur directeur("John", "Doe", "01/01/1970", 100000, "Direction Générale", "ABC Inc.");

    cout << "Informations du Directeur :" << endl;
    directeur.Afficher();

    return 0;
}

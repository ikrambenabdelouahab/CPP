#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
    string nom;
    int age;

public:
    void set_value(string nom, int age) {
        this->nom = nom;
        this->age = age;
    }
};

class Zebra : public Animal {
public:
    void set_value(string nom, int age, string lieuOrigine) {
        this->nom = nom;
        this->age = age;
        cout << "Zebra: " << nom << " a " << age << " ans et vient de " << lieuOrigine << endl;
    }
};

class Dolphin : public Animal {
public:
    void set_value(string nom, int age, string lieuOrigine) {
        this->nom = nom;
        this->age = age;
        cout << "Dolphin: " << nom << " a " << age << " ans et vient de " << lieuOrigine << endl;
    }
};

int main() {
    Zebra zebra;
    Dolphin dolphin;

    zebra.set_value("Zébulon", 5, "Afrique");
    dolphin.set_value("Flipper", 10, "Océan Atlantique");

    return 0;
}

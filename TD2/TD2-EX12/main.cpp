#include <iostream>
using namespace std;

class Test {
    public:
        static int count; // Variable statique pour compter les appels de la fonction

        static void call() {
            count++;
        }
};

int Test::count = 0; // Initialisation de la variable statique

int main() {
    Test::call(); // Premier appel
    Test::call(); // Deuxième appel
    Test::call(); // Troisième appel

    cout << "La fonction 'call' a ete appelee " << Test::count << " fois depuis main." << endl;

    return 0;
}

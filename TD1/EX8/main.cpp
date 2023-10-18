#include <iostream>
using namespace std ;
main() {
    int n=0 ;
    do {
        if (n%2==0) {
            cout << n << " est pair\n" ;
            n += 3 ;
            continue ; // force une nouvelle iteration
        }
        if (n%3==0) {
            cout << n << " est multiple de 3\n" ;
            n += 5 ;
        }
        if (n%5==0) {
            cout << n << " est multiple de 5\n" ;
            break ; // sortir de la boucle
        }
        n += 1 ;
    } while (1) ; // la boucle s'execute 5 fois
    /* Résultat ::
        0 est pair
        3 est multiple de 3
        9 est multiple de 3
        15 est multiple de 3
        20 est multiple de 5

        L’instruction continue s’emploie uniquement dans une boucle.
        Elle permet de passer prématurément au tour de boucle suivant.

    */
}


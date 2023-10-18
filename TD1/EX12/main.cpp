#include <iostream>
#include <iomanip> // pour setw
using namespace std ;
main() {
    const int NMAX = 10 ; // nombre de valeurs
    int i, j ;

    /* affichage ligne en-tête */
    cout << " I" ;

    for (j=1 ; j<=NMAX ; j++)   cout << setw(4) << j ;

    cout << "\n" ;
    printf ("-------") ;

    for (j=1 ; j<=NMAX ; j++)   cout << "----" ;

    cout << "\n" ;

    /* affichage des différentes lignes */
    for (i=1 ; i<=NMAX ; i++) {
        cout << setw(4) << i << " I" ;

        for (j=1 ; j<=NMAX ; j++)
            cout << setw(4) << i*j ;

        cout << "\n" ;
    }
}

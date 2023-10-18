#include <iostream>
using namespace std ;
main() {
    const char car = '*' ;  /* caractère de remplissage */
    int nlignes ;           /* nombre total de lignes */
    int nl ;                /* compteur de ligne */
    int nesp ;              /* nombre d'espaces précédant une étoile */
    int j ;
    cout << "combien de lignes ? " ;
    cin >> nlignes ;

    for (nl=0 ; nl<nlignes ; nl++){
        nesp = nlignes - nl - 1 ;
        for (j=0 ; j<nesp ; j++)    cout << ' ' ; // les espaces
        for (j=0 ; j<2*nl+1 ; j++)  cout << car ; // les etoiles

        cout << '\n' ; // retour à la ligne
    }
}

#include <iostream>
using namespace std ;
main() {
    int nt ; /* nombre de termes de la s�rie harmonique */
    float som ; /* pour la somme de la s�rie */
    int i ;

    do{
        cout << "combien de termes : " ;
        cin >> nt ;
    } while (nt<1) ;

    for (i=1, som=0 ; i<=nt ; i++)
        som += (float)1/i ;

    cout << "Somme des " << nt << " premiers termes = "<< som ;
}

#include <iostream>
using namespace std ;
main() {
    int u1, u2, u3 ; /* pour "parcourir" la suite */
    int n ; /* rang du terme demandé */
    int i ; /* compteur */

    do{
        cout << "rang du terme demandé (au moins 3) ? " ;
        cin >> n ;
    } while (n<3) ;

    u2 = u1 = 1 ; /* les deux premiers termes */
    i = 2 ;

    while (i++ <= n) { /* attention, l'algorithme ne fonctionne que pour n > 2 */
        u3 = u1 + u2 ;
        u1 = u2 ;
        u2 = u3 ;
    }
    // autre formulation possible :
    // for (i=3 ; i<=n ; i++, u1=u2, u2=u3) 	u3 = u1 + u2 ;

    cout << "Valeur du terme de rang " << n << " : " << u3 ;
}

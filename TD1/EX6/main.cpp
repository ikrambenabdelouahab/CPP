#include <iostream>
using namespace std ;

main() {
    int n, p, q ;

    /* Il ne faut pas oublier que les opérateurs && et || n’évaluent leur second opérande que lorsque cela est nécessaire.
    Ainsi, ici, il n’est pas évalué dans les cas 1 et 3.  */

    /* cas 1 : A : n = 6 p = 2 q = 1 */
    n = 5 ; p = 2 ;
    q = n++ > p || p++ != 3 ;
    cout << "A : n = " << n << " p = " << p << " q = " << q << "\n" ;

    /* cas 2 : B : n = 6 p = 3 q = 1 */
    n = 5 ; p = 2 ;
    q = n++ < p || p++ != 3 ;
    cout << "B : n = " << n << " p = " << p << " q = " << q << "\n" ;

    /* cas 3 : C : n = 6 p = 2 q = 0 */
    n = 5 ; p = 2 ;
    q = ++n == 3 && ++p == 3 ;
    cout << "C : n = " << n << " p = " << p << " q = " << q << "\n" ;

    /* cas 4 : D : n = 6 p = 3 q = 1 */
    n = 5 ; p = 2 ;
    q = ++n == 6 && ++p == 3 ;
    cout << "D : n = " << n << " p = " << p << " q = " << q << "\n" ;
}

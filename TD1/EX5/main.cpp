#include <iostream>
using namespace std ;
main() {

    int n=10, p=5, q=10, r ;
    r = n == (p = q) ; // n==(p=q) c'est une comparaison donc son r�sultat va �tre soit 1 ou 0 (True or False)

    cout << "A : n = " << n << " p = " << p << " q = " << q << " r = " << r << "\n" ;

    n = p = q = 5 ; // Equivalent � : n=5; p=5; q=5
    n += p += q ; // Equivalent � : n = n + (p = p + q);
    cout << "B : n = " << n << " p = " << p << " q = " << q << "\n" ;

    q = n < p ? n++ : p++ ; // op�rateur ternaire: si n<p alors q=n puis n++ , sinon q=p puis p++
    cout << "C : n = " << n << " p = " << p << " q = " << q << "\n" ;

    q = n > p ? n++ : p++ ;
    cout << "D : n = " << n << " p = " << p << " q = " << q << "\n" ;

}

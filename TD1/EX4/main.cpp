#include <iostream>
using namespace std ;
main () {
    int i, j, n ;

    i = 0 ;
    n = i++ ; // n=0, i=1 (i++ affecter puis incrementer)
    cout << "A : i = " << i << " n = " << n << "\n" ;

    i = 10 ;
    n = ++i ; // ++i incrementer puis affecter i=n=11
    cout << "B : i = " << i << " n = " << n << "\n" ;

    i = 20 ;
    j = 5 ;
    n = i++ * ++ j ; // n=20 * 6 = 120 , i=21, j=6
    cout << "C : i = " << i << " j = " << j << " n = " << n << "\n" ;

    i = 15 ;
    n = i += 3 ;
    cout << "D : i = " << i << " n = " << n << "\n" ; i = 3 ;

    j = 5 ;
    n = i *= --j ;
    cout << "E : i = " << i << " j = " << j << " n = " << n << "\n" ;
}

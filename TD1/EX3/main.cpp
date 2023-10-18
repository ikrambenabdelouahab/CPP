#include <iostream>
using namespace std;

int main() {
    int n = 5, p = 9 ;
    int q ;
    float x ;

    /* Q1 : q=1 */
    q = n < p ;
    cout << "#1\tq = n < p \t\t\t=> q=" << q << endl;

    /* Q2 : q=0 */
    q = n == p ;
    cout << "#2\tq = n == p \t\t\t=> q=" << q << endl;

    /* Q3 : q=5  => p%n vaut 4, tandis que p>n vaut 1 */
    q = p % n + (p > n) ;
    cout << "#3\tq = p % n + p > n \t\t=> q=" << q << endl;

    /* Q4 : x=1  => p/n est d’abord évalué en int, ce qui fournit 1 ; puis le résultat est converti en float, avant d’être affecté à x*/
    x = p / n ;
    cout << "#4\tx = p / n  \t\t\t=> x=" << x << endl;

    /* Q5 : x=1.8 */
    x = (float) p / n ;
    cout << "#5\tx = (float) p / n \t\t=> x=" << x << endl;

    /* Q6 : x=1.9  => p est converti en float, avant d’être ajouté à 0.5 ; le résultat est divisé par le résultat de la conversion de n en float*/
    x = (p + 0.5) / n ;
    cout << "#6\tx = (p + 0.5) / n \t\t=> x=" << x << endl;

    /* Q7 : x=1  => p est converti en float, avant d’être ajouté à 0.5 ; le résultat (5.5) est alors converti en int avant d’être divisé par n*/
    x = (int) (p + 0.5) / n ;
    cout << "#7\tx = (p + 0.5) / n \t\t=> x=" << x << endl;

    /* Q8 : q=25 */
    q = n * (p > n ? n : p) ;
    cout << "#8\tq = n * (p > n ? n : p) \t=> q=" << q << endl;

    /* Q9 : q=45 */
    q = n * (p < n ? n : p) ;
    cout << "#9\tq = n * (p < n ? n : p) \t=> q=" << q << endl;


    return 0;
}

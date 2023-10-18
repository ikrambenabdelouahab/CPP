#include <iostream>
#include <typeinfo>

using namespace std;

int main(){
    char c = '\x05' ;
    int n = 5 ;
    long p = 1000 ;
    float x = 1.25 ;
    double z = 5.5 ;

    /* 1 */
    cout << "#1\tn + c + p = " << n + c + p << "\t, type = " <<typeid(n + c + p).name() << endl;
    // type l = long

    /* 2 */
    cout << "#2\t2 * x + c = " << 2 * x + c << "\t\t, type = " <<typeid(2 * x + c).name() << endl;
    // type f = float

    /* 3 */
    cout << "#3\t(char) n + c = " << (char) n + c << "\t, type = " <<typeid((char) n + c).name() << endl;
    // type i = int

    /* 4 */
    cout << "#4\t(float) z + n / 2 = " << (float) z + n / 2 << "\t, type = " <<typeid((float) z + n / 2).name() << endl;
    // type f = float

    return 0;
}

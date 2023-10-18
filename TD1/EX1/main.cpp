#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
    char c = '\x01' ;
    /*'\x01': C'est la valeur initiale que vous attribuez à la variable c.
    Il s'agit d'une notation littérale en C/C++ pour représenter un caractère ASCII ou
    un octet de données en utilisant un format hexadécimal.
    En l'occurrence, '\x01' représente le caractère ASCII dont la valeur est 1 en décimal.*/
    short int p = 10 ;

    // Q1
    cout << "p+3 est de type : " << typeid(p+3).name() << endl; // return (i) ==> int

    // Q2
    cout << "c+1 est de type : " << typeid(c+1).name() << endl; // return (i) ==> int

    // Q3
    cout << "p+c est de type : " << typeid(p+c).name() << endl; // return (i) ==> int

    //Q4
    cout << "3 * p + 5 * c est de type : " << typeid(3 * p + 5 * c).name() << endl; // return (i) ==> int

    return 0;
}

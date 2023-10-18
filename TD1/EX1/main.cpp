#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
    char c = '\x01' ;
    /*'\x01': C'est la valeur initiale que vous attribuez � la variable c.
    Il s'agit d'une notation litt�rale en C/C++ pour repr�senter un caract�re ASCII ou
    un octet de donn�es en utilisant un format hexad�cimal.
    En l'occurrence, '\x01' repr�sente le caract�re ASCII dont la valeur est 1 en d�cimal.*/
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

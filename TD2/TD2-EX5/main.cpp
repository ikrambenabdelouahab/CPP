#include<iostream>
using namespace std;

int main() {
	int i;
	int *p_i; //pointeur

	cout<<"Donner un entier : ";
	cin>>i;

	int &ref_i=i; //Reference

	p_i=&i;

	cout<<"Le contenu des variables:"<<endl;
	cout<<"- variable i : "<<i<<endl;
	cout<<"- variable ref_i : "<<ref_i<<endl;
	cout<<"- variable p_i : "<<p_i<<endl;

	cout<<"Leur adresse: "<<endl;
	cout<<"- adresse de i : "<<&i<<endl;
	cout<<"- adresse de ref_i : "<<&ref_i<<endl;
	cout<<"- adresse de p_i : "<<&p_i<<endl;

    cout<<"La valeur pointee : "<<*p_i<<endl;

	return 0;
}

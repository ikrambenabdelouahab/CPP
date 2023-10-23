#include<iostream>
using namespace std;

//Passage par adresse
void permuter(int * x,int * y) {
    int p;
	p = *x;
	*x = *y;
	*y = p;
}
void incrementer(int * x) {
    (*x)++;
}

//Passage par référence
void incrementer(int & x) {
    x++;
}
void permuter(int & x,int & y) {
	int p;
	p = x;
	x = y;
 	y = p;
}

int main() {
	int a, b;

	cout<<"Donner la valeur de A : ";
	cin>>a;
	cout<<"Donner la valeur de B : ";
	cin>>b;

	//Appel par adresse
	cout<<"- Appel par Adresse"<<endl;
	incrementer(&a);
	cout<<"la valeur de A apres incrementation : "<<a<<endl;

	permuter(&a,&b);
	cout<<"la valeur de A apres permutation : "<<a<<endl;
	cout<<"la valeur de B apres permutation : "<<b<<endl<<endl;

	//Appel par reference
	cout<<"- Appel par Reference"<<endl;
	cout<<"la valeur de A est: "<<a<<endl;
	cout<<"la valeur de B est: "<<b<<endl;

	incrementer(a);
	cout<<"la valeur de A apres incrementation : "<<a<<endl;

	permuter(a,b);
	cout<<"la valeur de A apres permutation : "<<a<<endl;
	cout<<"la valeur de B apres permutation : "<<b<<endl;

	return 0;
}

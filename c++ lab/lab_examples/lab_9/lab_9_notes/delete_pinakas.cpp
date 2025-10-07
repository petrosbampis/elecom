#include <iostream>
using namespace std;

int main()
{
	double *p;
	p = new double[2];
	
	cout << "dose input: " << endl;
	cin >> *p;
	cout << "dose input: " << endl;
	cin >> *(p+1); //to epmeno stoixeio tou pinaka 
	
	cout << "sth dieythinsh: " << p << " einai o arithmos: " << *p << endl;
	cout << "sth dieythinsh: " << p+1 << " einai o arithmos: " << *p+1 << endl;

	
	delete []p;
	cout << "sth dieythinsh: " << p << " einai o arithmos: " << *p << endl;



}

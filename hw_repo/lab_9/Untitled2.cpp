#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	/*double *ptr;
	ptr = new double; // ari8mos tetoioy typoy, xwros gia mia double
	
	cout << "How many numbers ypu want to add?" << endl;
	cin >> *ptr; // apo8hkeysh se timh
	cout << "Sthn diey8ynsh " << ptr <<  " einai o ari8mos: " << *ptr << endl; */
	
	double *p;
	p = new double [2]; // deysmeysh mnhmhs dynamika
	
	cout << "Prwto stoixeio: ";
	cin >> *p; //p[0]
	cout << "Deytero stoixeio: ";
	cin >> *(p+1); //p[1]
	
	cout << "Sthn diey8ynsh " << p <<  " einai o ari8mos: " << *p << endl;
	cout << "Sthn diey8ynsh " << p+1 <<  " einai o ari8mos: " << *(p+1) << endl;
	
	delete []p; // san orish pinaka poy den jerame ta stoixeia toy
	
	cout << "Sthn diey8ynsh " << p <<  " einai o ari8mos: " << *p << endl;
	cout << "Sthn diey8ynsh " << p+1 <<  " einai o ari8mos: " << *(p+1) << endl;
	
	
	/*delete ptr; // apodesmeysh ptr, tvn 8esevn dld apo8hskeyshs
	
	cout << "Sthn diey8ynsh " << ptr <<  " einai o ari8mos: " << *ptr << endl;*/
	
	return 0;
}

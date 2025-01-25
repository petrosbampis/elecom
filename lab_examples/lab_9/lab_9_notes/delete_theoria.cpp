#include <iostream>
using namespace std;

int main()
{
	double *p;
	p = new double;
	
	cout << "dose input: " << endl;
	cin >> *p;
	cout << "sth dieythinsh: " << p << " einai o arithmos: " << *p << endl;
	
	delete p; //diagrafw to periexomeno tou p
	//cout << "sth dieythinsh: " << p << " einai o arithmos: " << *p << endl; an to valw edw, sto *p mou vgazei tyxaia timh

}

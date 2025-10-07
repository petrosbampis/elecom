#include <iostream>
#include <string>
using namespace std;
/*const double pi = 3.14;
#define PI 3.14
*/

int main ()
{
/*	string onoma, eponimo; 
	cout << "Dose onoma: ";
	cin >> onoma;
	cout << "Dose eponimo: ";
	cin >> eponimo;
	
	cout << "Ta stoixeia einai: " <<onoma << " " <<eponimo <<endl;
*/

/*	int x=5, y=2;
	cout << "Dose akeraio: ";
	cin >> x;
	cout << "To apotelesma einai: ";
	cout << x+y << endl; //diff way of \n
*/	

/*	int x = 6;
	float y = 2.2;
	float apotelesma;
	int apotelesma = ++x; //prota afksisi, meta anathesi
	int apotelesma = x++; //prota anathesi, meta afksisi
	
	apotelesma = (float) x/y;
	cout << "apotelesma = " << apotelesma << endl;  
*/

/*
	int x; 
	cout << "Dose x: ";
	cin >> x;
	
	if (x>=10)
	{
		cout << "eksodos 1" << endl;
	}
	else if ((x<10) && (x>=5))
	{
		cout << "eksodos 2" << endl;
	}
	else 
	{
		cout << "eksodos 3" << endl;
	}
	 

	switch (x)
	{
		case 1 ... 10:
		cout << "arxika";
		break;
	}
*/

	int i, max_value;
	cout << "Dose max value: ";
	cin >> max_value; 
	
	for (i=1; i<=max_value; i++)
	{
		cout << "Trexousa timh " << i << endl;
	}
	
	cout << "Telos epanalipshs\n"; 
	return 0; 
	
}

/*programma pou tha diavazw float arithmo apo plhktrologio
kai, afou sigourepsete pws einai sto orio [0,10), na epivevaiwsete 
pws o arithmos einai ths morfhs _._ _ (dhl, dyo dekadika) kai epeita na 
kanete storgilopoihsh sto prwto dekadiko, p.x 3.14 na ginei 3.1. 
Na ginei kai me if kai me switch.
stelnoume egrasia sto ksiop@auth.gr*/
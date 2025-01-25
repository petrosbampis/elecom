#include <iostream>
using namespace std;

int main()
{
	double x,y,z;
	cout << "dwse arithmith: ";
	cin >> x;
	cout << "dwse paronomasth: ";
	cin >> y;
	
	try
	{
		if (y==0)
			throw y;
		z = x/y;
		cout << "Result = " << z;
	}
	
	catch (double d)
	{
		cout << "LATHOS, diairesh me to " << d << endl;
	}
	

	return 0;
	
	
}

#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;
 
main()
{
	double Y[15];
	for (int i = 0; i<15; i++)
	{
		Y[i] = cos((double)(2*PI*(i+1))/(15));
		cout << Y[i] << "\n";
	}
	
	double max = Y[0];
	double min = Y[0];
	 
	for (int i = 0; i<15; i++)
	{
		if (Y[i] > max)
		{
			max = Y[i];
		}
		
		else if (Y[i] < min)
		{
			min = Y[i];
		}
		
	}
	
	cout << "max value is: " << max << "\n";
	cout << "min value is: " << min << "\n";

}

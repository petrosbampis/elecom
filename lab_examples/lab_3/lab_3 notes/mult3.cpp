#include <iostream>
#include <cmath>
using namespace std;
 
main()
{
	int A[100];
	int k = 1;
	
	for (int i = 0; i<100; i++)
	{
		A[i] = 3*k;
		k++;
		//cout << A[i] << "\n";
	}
	
	for (int i = 2; i<100; i=i+3)
	{
		cout << A[i] << "\n";
	}
}

#include <iostream>
#include <cmath>
using namespace std;

main()
{
	
	int A[5];
	int sum = 0;
	float avg;
	
	for (int i = 0; i<5; i++)
	{
		cout << "Number x" << i << ":" <<"\n";
		do
		{
			cin >> A[i];
		}while(A[i]<=0);
		
		sum = sum + A[i];
	}

	avg = (float)sum/5;
	cout << "Average value is: " << avg << "\n";
	
	for (int j = 0; j < 5; j++)
	{
		if (A[j]>avg)
		{
			cout << "Value " << j << "me timh" << A[j] <<" is bigger than avg" << "\n";
		}
	}
	
}

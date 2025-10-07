#include <iostream>
#include <cmath>
using namespace std;

main()
{
	int A[6] = {3, 6, 9, 12, 15, 18};
	int B[7] = {0, -2, 6, 1, 2, 2, 15};

	for (int i = 0; i<7; i++)
	{
		for (int j = 0; j<6; j++)
		{
			if(B[i] == A[j])
			{
				cout << "common item: " << A[j] <<"\n";
			}
		}
	}
}

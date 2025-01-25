#include <iostream>
#include <cmath>
using namespace std;

main()
{
	float sample[80];
	float t=0.25;
	
	for(int i=0; i<80; i++)
	{
		sample[i] = 2*(t-50)*(t-50)*(t-50)*(t-50) - (t-50)*(t-50) + 1;
		cout << sample[i] << endl;
		t+=0.25;
	}
}

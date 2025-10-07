#include <iostream>
using namespace std;
//>1 eksodous apo synarthsh, kalw me anafora

void swap(int *x, int *y)
{	
	int temp;
	
	temp = *x;
	*x = *y;
	*y = temp;
	
}

int main () {

	int x=5;
	int y=1;
	
	swap(&x, &y);
	
	cout << x << endl;
	cout << y << endl;
	
	return 0;
}

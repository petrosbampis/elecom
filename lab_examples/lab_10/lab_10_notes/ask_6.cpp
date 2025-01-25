#include <iostream>
using namespace std;

class polyplevro{
		int sides;
		double *length;
	public:
		polyplevro();
		~polyplevro();
		void set_sides(int n);
		double give_perimeter();
		void set_length(int i, double m);
};

polyplevro::polyplevro()
{
	length = NULL;
	sides = 0;
}

polyplevro::~polyplevro()
{
	delete [] length;
}

void polyplevro::set_sides(int n)
{
	length = new double[n];
	sides = n;
}

void polyplevro::set_length(int i, double m)
{
	*(length+i) = m;
}

double polyplevro::give_perimeter()
{
	int i; 
	double temp = 0;
	for(i=0; i<=sides-1; i++)
	{
		temp = temp+ *(length +i);
	}
	return temp;
}


int main()
{
	polyplevro p1;
	int a, i;
	double m, p;
	
	cout << "How many sides? " ;
	cin >> a;
	p1.set_sides(a);
	
	for(i=0; i<=a-1; i++)
	{
		cout << "Give length of side" << i << " : " ;
		cin >> m;
		p1.set_length(i, m);
	}
	
	cout << "Perimeter: " << p1.give_perimeter() << endl;
	
	
	return 0;
}

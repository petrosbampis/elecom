#include <iostream>
using namespace std;

class complex{
	private:
		double re, im;
	public: 
		complex(double x=0, double y=0);
		~complex();
		void print();
		complex add(complex &comp);
		complex operator+(complex b);
};

complex::complex(double x, double y) : re(x), im(y)
{
	
}

complex::~complex()
{
	
}

complex::print()
{
	cout << "o migadikos: " << re << " + " << " j" << im << endl;   
}

comlpex::complex add(complex &comp)
{
	return complex(re + comp.re, im + comp.im);
}

complex complex::operator+(complex b)
{
	float sum_re = this -> re + b.re;
	float sum_im = this -> im + b.im;  
	cout << "o migadikos c: " << sum_re << " + " << " j" << sum_im << endl;   
}

int main()
{
	complex a(4, 1);
	complex b(1, 1);
	complex c;
	
	c = a + b;
	//cout << "O migadikos c: " << 
	
	return 0;
}

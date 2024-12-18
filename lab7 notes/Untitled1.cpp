#include <iostream>
using namespace std;

struct circle
{
	float aktina;
	
	float perimetros()
	{
		return 2*3.14*aktina;
	}
	
	void scale(float factor)
	{
		aktina = aktina*factor;
	}
	void print_aktina();
	
	
	void print()
	{
		cout << "No value";
	}
	
	void print(int x1)
	{
		cout << "value is: " << x1 << endl;
	}
	
	void print(int x1, int x2)
	{
		cout << "value is: " << x1+x2 <<endl;
	}
		
};

void circle::print_aktina()
	{
		cout << "Aktina is: " << aktina << endl;
	}

//function overload
//void print()
//{
//	cout << "No value";
//}
//
//void print(int x1)
//{
//	cout << "value is: " << x1 << endl;
//}
//
//void print(int x1, int x2)
//{
//	cout << "value is: " << x1+x2 <<endl;
//}



int main()
{
	circle c1;
	circle *ptr;
	ptr = &c1;
	
	ptr->aktina=15;
	ptr->print_aktina();
	cout << "Perimetros = " << c1.perimetros() << endl;
	c1.scale(3.5);
	cout << "scaled perimetros = " << c1.perimetros() << endl;
	
	c1.print(2,8);
	
	return 0;
}

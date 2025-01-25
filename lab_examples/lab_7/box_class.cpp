//class me onma box kai mesa vazoume public platos mhkos ipsos
//kai idiothta public ogos kai print pou tha tipwnei ton ogo
//sth main na ftiaxw antikeimeno gia to box, tha tou anathesw times kai tha 
//ipollogizw ogko kai tha ton typonw

#include <iostream>
using namespace std;

class Box
{
	public:
		float platos, ipsos, mikos;
		float volume;
		void ogkos()
		{
			volume = platos*ipsos*mikos;
		}
		void print() 
		{
			cout << "The volume is: " << volume << endl;
		} 
};

class Circle
{
	public:
		void print_kalhmera() 
		{
			cout << "Kalimera " << endl;
		} 
};

class Dummy: public Box, public Circle 
{
};

int main()
{
	Box box1;
	box1.platos = 5.1;
	box1.ipsos = 2.14;
	box1.mikos = 3.45;
	
	box1.ogkos();
	box1.print();
	
	
	Dummy d1;
	d1.print_kalhmera();
	
}

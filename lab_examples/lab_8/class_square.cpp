#include <iostream>
using namespace std;

class square{
	protected:
		double width;
	public:
		double perimeter();
		square(double w=1);
		~square();
};

double square::perimeter()
{
	return 4*width;
}

square::square(double w)
{
	width = w;
}

square::~square()
{
	cout << "KATASTROFHTERAGONOY" << endl;
}


class box: public square{
		double height;
	public:
		double volume();
		box(double w, double h=1);
		~box();
};

double box::volume()
{
	return width*width*height;
}

box::box(double w, double h) : square(w)
{
	height = h;
}

box::~box()
{
	cout << "KATASTROFHPARALLHLEPIPEDOY" << endl;
}

int main ()
{
 
	box b1(5, 10);
	
	cout << "Surfice area of base: " << b1.perimeter() << endl; 
	cout << "Volume of box: " << b1.volume() << endl;
	
	return 0;
}

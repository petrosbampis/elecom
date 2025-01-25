#include <iostream>
using namespace std;

class circle{
	protected:
		float radius;
	public:
		float circumference();
		circle(double r=1);
		~circle();
};

float circle::circumference()
{
	return 2*3.1415*radius;
}

circle::circle(double r)
{
	radius = r;
}

circle::~circle()
{
	cout << "KATASTROFHKYKLOU" << endl;
}


class cylynder : public circle{
	
	protected:
		float height;
		float density;
	public:
		float mass();
		cylynder(double r, double h=1, double d=1);
		~cylynder();
};

float cylynder::mass()
{
	float vol = height*3.1415*radius*radius;
	return density * vol;
}

cylynder::cylynder(double r, double h, double d)
{
	radius = r;
	height = h;
	density = d;
}

cylynder::~cylynder()
{
	cout << "KATASTROFHKYLYNDROU" << endl;
}


int main()
{
	cylynder c1(20, 5, 2);
	
	cout << "Perimeteros vashs kylyndrou: " << c1.circumference() << endl;
	cout << "Mass tou kylyndrou: " << c1.mass() << endl;
	return 0;
}

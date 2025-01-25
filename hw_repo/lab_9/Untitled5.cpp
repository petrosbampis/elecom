#include <iostream>
#include <cmath>

using namespace std;

class migadikos {
		
	public:	
	double x,y;
	migadikos(double a=1, double b=1);
	~migadikos();
    migadikos operator+(migadikos m1);
};

migadikos::migadikos(double a, double b)
{
	x=a;//real
	y=b;//imaginary
}

migadikos::~migadikos()
{
}

migadikos migadikos::operator+(migadikos m1) 
{
	migadikos m;
	m.x = this-> x + m1.x;
	m.y = this -> y + m1.y;
	return m;
}

int main ()
{
 
	migadikos m1(1,2),m2(2,3),m3;
 
	m3 = m1 + m2; 
	cout << "H pros8esh sta x einai ish me: " << m3.x << endl;
	cout << "H pros8esh sta y einai ish me: " << m3.y << endl;
	
	return 0;
}

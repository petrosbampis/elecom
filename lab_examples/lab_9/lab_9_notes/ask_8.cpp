#include <iostream>
using namespace std;

class circle{
	private:
		double radius;
	public:
		circle(double r=1);
		~circle();
		double dive_embado();
		
		circle operator*(double pososto); //kathe fora pou kanw yperfortwsh
		circle operator+(circle c2);
};

circle::circle(double r)
{
	radius = r;
}

circle::~circle()
{
	
}

double circle::dive_embado()
{
	return 3.1415*radius*radius;
}

circle circle::operator*(double pososto)
{
	circle cTemp;
	cTemp.radius = this -> radius*pososto;
	return cTemp;
}

circle circle::operator+(circle c2)
{
	circle cTemp;
	cTemp.radius = this -> radius+c2.radius;
	return cTemp;
}

int main()
{
	circle c1(10);
	circle c2, c3;
	cout << "Embado tou kykloy: " << c1.dive_embado() << endl;
	
	double scale;
	cout << "scale factor: " << endl;
	cin >> scale;
	c2 = c1*scale;
	cout << "Embado tou kykloy: " << c2.dive_embado() << endl;
	
	c3 = c1 + c2;
	cout << "Embado tou kykloy: " << c3.dive_embado() << endl;

	
	return 0;
}

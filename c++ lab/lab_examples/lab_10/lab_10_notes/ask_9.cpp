#include <iostream>
using namespace std;

class circle{
	private:
		double radius;
	public:
		circle(double r=1);
		~circle();
		double dive_embado();
		
		friend circle operator*(circle c1, double pososto);
		friend circle operator+(circle c1, circle c2);
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

circle::operator*(circle c1, double pososto)
{
	circle cTemp;
	cTemp.radius = pososto * c1.radius;
	return cTemp;
}

circle::operator+(circle c1, circle c2)
{
	circle cTemp;
	cTemp.radius = c1.radius + c2.radius;
	return cTemp;
}

int main()
{
	circle c1(10);
	circle c2, c3;
	cout << "Embado tou kykloy c1: " << c1.dive_embado() << endl;
	
	double scale;
	cout << "scale factor: " << endl;
	cin >> scale;
	c2 = c1*scale;
	cout << "Embado tou kykloy c2: " << c2.dive_embado() << endl;
	
	c3 = c1 + c2;
	cout << "Embado tou kykloy c3: " << c3.dive_embado() << endl;

	
	return 0;
}


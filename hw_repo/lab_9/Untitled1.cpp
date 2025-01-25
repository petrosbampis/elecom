#include <iostream>
#include <cmath>

using namespace std;

class circle {
	protected: 	
		double aktina;
	
	public:
		double perimetros()
			{
				double perimetros;
				perimetros = 2*M_PI*aktina;
				return perimetros;
			}
				
			circle(double x=1);
			~circle();	
};

circle::circle(double x) // den pernaei metablhth apla deixnei oti 8a parei mia double
{
	aktina = x;
	cout << "DHMIOYRGIA KYKLOY" << endl;
}

circle::~circle()
{
	cout << "KATASTROFHKYKLOY" << endl;
}

class kylindros : public circle {
	public:
		double ypsos;
		double pyknothta;
		
		double maza()
		{
			double maza, ogkos;
			ogkos = M_PI*aktina*aktina*ypsos;
			maza = ogkos*pyknothta;
			return maza;
		}
	
	kylindros (double x, double y=1 , double z=1);
	~kylindros();
};

kylindros::kylindros(double x, double y, double z) : circle(x)
{
	pyknothta = y;
	ypsos = z;
	cout << "DHMIOYRGIA KYLINDROY" << endl;
}

kylindros::~kylindros()
{
	cout << "KATASTROFHKYLINDROY" << endl;
}

int main()
{
	kylindros k(20,5,2);
	
	//k.perimetros();
	
	cout << "Perimetros bashs kylindroy: " << k.perimetros() << endl;
	
	//k.maza();
	
	cout << "Maza kylindory: " << k.maza() << endl;

	return 0;
}




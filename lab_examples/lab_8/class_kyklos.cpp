#include <iostream>
using namespace std;

class kyklos {
    double r;
  public:
  	kyklos();
  	kyklos(double a);
  	~kyklos();
    void set_r (double a);
    double dose_emb(); 
    double dose_perimetros();
};

kyklos::kyklos()
{
	r = 1;
}

kyklos::kyklos(double a)
{
	r = a;
}

kyklos::~kyklos()
{
	cout << "O kyklos exei diagrafei" << endl;
}

void kyklos::set_r(double a)
{	
	r = a;
}

double kyklos::dose_emb()
{
	return 3.14*r*r;
}

double kyklos::dose_perimetros()
{
	return 3.14*2*r;
}

int main () {
 
	kyklos k1;
	double a;
	
//	cout << "Give radius: " << endl;
//	cin >> a;
	
//	k1.set_r(a);
	cout << "Circle area: " << k1.dose_emb() << endl;
	cout << "Circle perimeter: " << k1.dose_perimetros() << endl;
	
	
	a = 4;
	kyklos k2(a); 
	cout << "Circle area: " << k2.dose_emb() << endl;
	cout << "Circle perimeter: " << k2.dose_perimetros() << endl;
	
	return 0;
}

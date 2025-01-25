#include <iostream>
#include <cmath>

using namespace std;

class circle {
	private:
		double aktina;
		
	public:	
	
		circle (double x=1);
		~circle ();
		
		void set_aktina(double x)//ama dn 8elei epistrefei dn bazw
		{
			aktina = x;
		}
		
		double give_embadon()
		{
			double embadon;
			embadon = M_PI*aktina*aktina;
			return embadon;
		}
};

circle::circle(double x)
{
	aktina = x;
}

circle::~circle()
{
	cout << "KATASTROFH KYKLOY" << endl;
}

int main ()
{
	circle *c1; // dynamikh desmeysh
	c1 = new circle(5);
	
	double aktina1,area;

	cout << "Dwse nea timh aktinas:";
	cin >> aktina1;
	
	c1->set_aktina(aktina1);
	area = (*c1).give_embadon();
	
	cout << "Embadon = " << area << endl;
	
	delete 	c1;
	
	return 0;
}

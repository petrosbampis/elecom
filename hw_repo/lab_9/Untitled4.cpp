#include <iostream>
#include <cmath>

using namespace std;

class circle {
	private :
		double aktina;
	public:
		circle(double a=1);
		~circle();
		double give_embado();
		
		circle operator*(double pososto); // yperfortwsh ginetai se telestes(*+-/)
		circle operator+(circle c2);
};

circle circle::operator*(double pososto) // leitoyrgia yperfwrtwshs
{
	circle ctemp;
	ctemp.aktina = this -> aktina*pososto; /// gia na klhrvnomw kati apo ton eayto moy
	return ctemp;
}

circle circle::operator+(circle c2)
{
	circle ctemp;
	ctemp.aktina = this -> aktina + c2.aktina;
	return ctemp;
}

circle::circle(double a)
{
	aktina = a;
}

circle::~circle()
{
	cout << "Jerw na kanv destructor!" << endl;
}

double circle::give_embado()
{
	double embadon;
	embadon = M_PI*aktina*aktina;
	return embadon;
}

int main (){
	
	circle c1(10);
	circle c2, c3; 
	
	double e, pos, eisodos;
	
	e=c1.give_embado();
	cout << "Area toy c1 einai: " << e << endl;
	cout << "Scale factor: ";
	cin >> eisodos;
	
	c2=c1*eisodos; // apo mono toy den exei nohma ama den kanw yperfwrtwsh
	
	e=c2.give_embado();
	cout << "Area toy c2 einai: " << e << endl;
	
	c3 = c1 + c2;
	
	e=c3.give_embado();
	cout << "Area toy c3 einai: " << e << endl;
	
	
	return 0;
}

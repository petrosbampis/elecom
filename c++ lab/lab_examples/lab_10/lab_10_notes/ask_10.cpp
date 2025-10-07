#include <iostream>
using namespace std;

class parallhlogramo{
	public:
		double length, width;
		parallhlogramo(double l, double w);
		~parallhlogramo();
		parallhlogramo operator+(parallhlogramo b);
		bool operator==(parallhlogramo b);
};

parallhlogramo::parallhlogramo(double l, double w)
{
	length = l; 
	width = w;
}

parallhlogramo::~parallhlogramo(){}

parallhlogramo parallhlogramo::operator+(parallhlogramo b)
{
	parallhlogramo temp;
	temp.length = this->length + b.length;
	temp.width = this->width + b.width;
	return temp;
}


bool parallhlogramo::operator==(parallhlogramo b)
{
	if((this -> length == b.length) && (this -> width == b.width))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	parallhlogramo p1(0,0);
	parallhlogramo p2(0,0);
	parallhlogramo p3(0,0);
	int w, d;
	
	
	cout << "Give length for p1: ";
	cin >> p1.length;
	cout << "Give width for p1: ";
	cin >> p1.width;
	
	cout << "Give length for p2: ";
	cin >> p2.length;
	cout << "Give width for p2: ";
	cin >> p2.width;
	
	p3 = p1 + p1;
	cout << "length of p3: " << p3.length << "width of p3: " << p3.width;
	
	if(p1==p2)
	{
		cout << "Einai idia" << endl;
	}
	else
	{
		cout << "Den einai idia" << endl;
	}
	
	return 0;
		
}


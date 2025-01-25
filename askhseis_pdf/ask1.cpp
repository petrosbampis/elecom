#include <iostream>
using namespace std;

class circle{
        double radius;
    public:
        double perimeter();
        void circle_default();
        void circle_constructor(double r);
        ~circle();
};

double circle::perimeter()
{
    return 3.1415*2*radius;
}

void circle::circle_default()
{
    radius = 1;
}

void circle::circle_constructor(double r)
{
    radius = r;
}

circle::~circle()
{
    cout << "KATASTROFHKYKLOY" << endl;
}

int main()
{
    circle c1;
    c1.circle_default();
    circle c2;
    c2.circle_constructor(4);

    cout << "Perimeter of c1: " << c1.perimeter() << endl;
    cout << "Perimeter of c2: " << c2.perimeter() << endl;

    return 0;
}
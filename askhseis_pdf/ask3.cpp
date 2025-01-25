#include <iostream>
using namespace std;

class circle{
    protected:
        double radius;
    public:
        double perimeter();
        circle(double r=1);
        ~circle();
};

double circle::perimeter()
{
    return 2*3.1415*radius;
}

circle::circle(double r)
{
    radius = r;
}

circle::~circle()
{
    cout << "KATASTROFHKYKLOY" << endl;
}

class cylynder: public circle{
        double height;
    public:
        double density;
        double mass();
        cylynder(double r, double h=1, double d=1);
        ~cylynder();
};

double cylynder::mass()
{
    return 3.1415*radius*radius*height*density;
}

cylynder::cylynder(double r, double h, double d): circle(r)
{
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
    cout << "Perimetros vashs c1: " << c1.perimeter() << endl;
    cout << "Mass of c1: " << c1.mass() << endl;

    return 0;
}


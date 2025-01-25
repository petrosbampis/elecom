#include <iostream>
using namespace std;

class square{
    protected:
        double length;
    public:
        double perimeter();
        square(double l=1);
        ~square();
};

double square::perimeter()
{
    return 4*length;
}

square::square(double l)
{
    length = l;
}

square::~square()
{
    cout << "KATASTROFHTETRAGONOY" << endl;
}

class box: public square{
        double height;
    public:
        double volume();
        box(double l, double h=1);
        ~box();
};

double box::volume()
{
    return length*length;
}

box::box(double l, double h): square(l)
{
    height = h;
}

box::~box()
{
    cout << "KATASTROFHPARALLHLEPIPEDOU" << endl;
}

int main()
{
    box b1(5, 10);
    cout << "Perimetros vashs paralllelhpedou: " << b1.perimeter() << endl;
    cout << "Ogkos parallhlepipedou: " << b1.volume() << endl;

    return 0;
}
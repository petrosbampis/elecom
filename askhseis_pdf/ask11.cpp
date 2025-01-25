#include <iostream>
using namespace std;

class circle{
    public:
        double radius;
        circle(double r);
        double give_aktina();
        circle& operator++();
};

circle::circle(double r)
{
    radius = r;
}

double circle::give_aktina()
{
    return radius;
}

circle& circle::operator++()
{
    radius += 1;
    return *this;
}

int main()
{
    circle c1(10);
    circle c2(0);

    c2 = ++c1;
    cout << "Radius of c1: " << c1.give_aktina() << endl;
    cout << "Radius of c2: " << c2.give_aktina() << endl;

    return 0;
    
}
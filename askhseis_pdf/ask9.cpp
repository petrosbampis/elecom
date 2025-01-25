#include <iostream>
using namespace std;

class circle{
    public:
        double radius;
        circle(double r=1);
        ~circle();
        double give_embado();

        friend circle operator*(const circle &c, double n);
        friend circle operator+(const circle &a, const circle &b);
};

circle::circle(double r)
{
    radius = r;
}

circle::~circle() {}

double circle::give_embado()
{
    return 3.1415*radius;
}

circle operator*(const circle &c, double n)
{
    return circle(c.radius*n);
}

circle operator+(const circle &a, const circle &b)
{
    return circle(a.radius + b.radius);
}

int main()
{
    circle c1(10);
    circle c2;
    circle c3;

    cout << "To embado tou c1 einai: " << c1.give_embado() << endl;

    double pososto;
    cout << "Dwse pososto afksishs ths aktinas tou c1: " << endl;
    cin >> pososto;
    c2 = c1*pososto;
    cout << "To embadon tou c2 einai: " << c2.give_embado() << endl;

    c3 = c1 + c2;
    cout << "To embadon tou c3 einai: " << c3.give_embado() << endl;
    
    return 0;

}

#include <iostream>
using namespace std;

class circle{
        double radius;
    public:
        circle(double r=1);
        ~circle();
        void set_aktina(double new_r);
        double give_embado();
};

circle::circle(double r)
{
    radius = r;
}

circle::~circle()
{
    cout << "KATASTROFHKYKLOU" << endl;
}

void circle::set_aktina(double new_r)
{
    radius = new_r;
}

double circle::give_embado()
{
    return 3.1415*radius*radius;
}

int main()
{
    circle *c1;
    c1 = new circle(5);
    double new_r;

    cout << "Dwse nea aktina: " << endl;
    cin >> new_r;
    c1->set_aktina(new_r);

    cout << "To embado tou c1 einai: " << c1->give_embado() << endl;

    delete c1;

    return 0;
}

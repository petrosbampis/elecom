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

circle::~circle() {}

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
    circle c[4];
    double new_r;

    for (int i=0; i<4; i++)
    {
        cout << "Dwse aktina gia ton kyklo " << i+1 << " : " << endl;
        cin >> new_r;
        c[i].set_aktina(new_r);
    }

    for (int i=0; i<4; i++)
    {
        cout << "To embado toy kyklou " << i+1 << " einai: " << c[i].give_embado() << endl;
    }

    return 0;


}
#include <iostream>
using namespace std;

class polyplevro{
    public:
        int sides;
        double *lengths;
        polyplevro();
        ~polyplevro();
        void set_sides(int n);
        void set_lengths(int i, double l);
        double perimeter();
};

polyplevro::polyplevro()
{
    lengths = NULL;
    sides = 0;
}

polyplevro::~polyplevro()
{
    delete []lengths;
}

void polyplevro::set_sides(int n)
{
    lengths = new double[sides];
    sides = n;
}

void polyplevro::set_lengths(int i, double l)
{
    *(lengths+i) = l;
}

double polyplevro::perimeter()
{
    double sum = 0;
    for(int i=0; i<sides; i++)
    {
        sum = sum + *(lengths+i);
    }
    return sum;
}

int main()
{
    polyplevro p1;
    int n;
    double l;

    cout << "Give number of sides: " << endl;
    cin >> n;
    p1.set_sides(n);

    for (int i=0; i<n; i++)
    {
        cout << "To mhkos ths plevras " << i+1 << " einai: " << endl;
        cin >> l;
        p1.set_lengths(i, l);
    }

    cout << "H perimetros einai: " <<  p1.perimeter() << endl; 

    return 0;
}
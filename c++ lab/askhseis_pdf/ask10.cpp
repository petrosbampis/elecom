#include <iostream>
using namespace std;

class parallhlogrammo{
    public: 
        double length, width;
        parallhlogrammo(double l, double w);
        parallhlogrammo operator+(const parallhlogrammo& b) const;
        bool operator==(parallhlogrammo b);

};

parallhlogrammo::parallhlogrammo(double l, double w)
{
    length = l;
    width = w;
}

parallhlogrammo parallhlogrammo::operator+(const parallhlogrammo& b) const
{
    return parallhlogrammo(this->length + b.length, this->width + b.width);
}

bool parallhlogrammo::operator==(parallhlogrammo b)
{
    if (this->length == b.length && this->width == b.width)
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
    parallhlogrammo p1(0,0);
    parallhlogrammo p2(0,0);
    parallhlogrammo p3(0,0);

    cout << "Dwse width gia to p1: " << endl;
    cin >> p1.width;
    cout << "Dwse length gia to p1: " << endl;
    cin >> p1.length;
    cout << "Dwse width gia to p2: " << endl;
    cin >> p2.width;
    cout << "Dwse length gia to p2: " << endl;
    cin >> p2.length;

    p3 = p1 + p2;
    cout << "Oi diastaseis tou p3 einai: w= " << p3.width << " kai l= " << p3.length << endl;
    
    if(p1==p2)
    {
        cout << "Ta parallhlogramma einai idia. " << endl;
    } 
    else
    {
        cout << "Ta parallhlogramma den einai idia. " << endl;
    }


}
/*
Η άσκηση 5 από το κεφάλαιο των κλάσεων.

ΟΝΟΜΑΤΕΠΩΝΥΜΟ ΦΟΙΤΗΤΗ: ΜΠΑΜΠΗΣ ΠΕΤΡΟΣ 

*/

#include <iostream>
using namespace std;

class Circle {
    float radius;
  public:
    void set_aktina (float r)
    {
        radius = r;    
    }
    
    float give_embadon() 
    {
        return M_PI * pow(radius, 2);
    }
};

int main()
{
    
    Circle circle_1;

    float r; 
    cout << "Type the value of radius: ";
    cin >> r;

    circle_1.set_aktina(r);

    cout << "Circle area: " << circle_1.give_embadon() << endl;

    return 0;
}

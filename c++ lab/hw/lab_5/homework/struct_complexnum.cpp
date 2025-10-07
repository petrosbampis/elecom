/*
Να γραφεί struct που να έχει δυο float τιμες, μια είναι το πραγματικό μερος ενός
μιγαδικου αριθμου και μία για το φανταστικο μερος του, και να γραφούν δύο συναρτησεις.
Μεσω της μιας θα γεμίζονται τιμες στο struct (δηλ. οι μιγαδικοί αριθμοί) και μέσω της άλλης θα υπολογιζεται η 
προσθεση και η αφαίρεση των μιγαδικων αριθμων.

ΟΝΟΜΑΤΕΠΩΝΥΜΟ ΦΟΙΤΗΤΗ: ΜΠΑΜΠΗΣ ΠΕΤΡΟΣ 

*/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct Complex {
    float re;   
    float im;   
};


void inputComplex(Complex &c) {
    cout << "Type real part: " << endl; 
    cin >> c.re;
    cout << "Type imaginary part: " << endl;
    cin >> c.im;
}


void addAndSubtract(Complex c1, Complex c2, Complex &sum, Complex &difference) {

    sum.re = c1.re + c2.re;
    sum.im = c1.im + c2.im;

    difference.re = c1.re - c2.re;
    difference.im = c1.im - c2.im;
}

int main() {
    Complex z1, z2, sum, difference;

    cout << "Instert complex number z1:\n";
    inputComplex(z1);

    cout << "\nInstert complex number z2: \n";
    inputComplex(z2);

    addAndSubtract(z1, z2, sum, difference);

    cout << "Sum: " << sum.re << " + (" << sum.im << "i)\n";
    cout << "Difference: " << difference.re << " + (" << difference.im << "i)\n";

    return 0;
}
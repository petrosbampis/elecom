/*
Να βρεθεί το άθροισμα (i-1)*(i+3)/(i-5), για i=6;500. 
Όλες οι πράξεις να γραφούν με συναρτήσεις και να γίνει 
κλήση των συναρτήσεων μέσω αναφοράς.

ΟΝΟΜΑΤΕΠΩΝΥΜΟ ΦΟΙΤΗΤΗ: ΜΠΑΜΠΗΣ ΠΕΤΡΟΣ 

*/
#include <iostream>
#include <string>

using namespace std;

int a_term(const int &x)
{
    int a = x - 1;
    return a;
}

int b_term(const int &x)
{
    int b = x + 3;
    return b;
}

int c_term(const int &x)
{
    int c = x - 5;
    return c;
}

int multiply(const int &a, const int &b)
{
    int product = a * b;
    return product;
}

float division(const int &a, const int &b)
{
    float ratio = (float)a / (float)b;
    return ratio;
}

int main()
{
    float sum = 0;

    for (int i = 6; i <= 500; i++)
    {
        sum = sum + division(multiply(a_term(i), b_term(i)), c_term(i));
    }

    cout << sum;

    return 0;
}
/*
Να βρεθεί το άθροισμα (i-1)*(i+3)/(i-5), για i=6;500. 
Όλες οι πράξεις να γραφούν με συναρτήσεις.

ΟΝΟΜΑΤΕΠΩΝΥΜΟ ΦΟΙΤΗΤΗ: ΜΠΑΜΠΗΣ ΠΕΤΡΟΣ 

*/
#include <iostream>
#include <string>

using namespace std;

int a_term(int x)
{
    int a = x-1;
    return a;
}

int b_term(int x)
{
    int b = x+3;
    return b;
}

int c_term(int x)
{
    int c = x-5;
    return c;
}

int multiply(int a, int b)
{
    int product = a*b;
    return product;
}

float division(int a, int b)
{
    float ratio = (float)a/(float)b;
    return ratio;
}

int main()
{
    float sum = 0;
    
    for(int i=6; i<=500; i++)
    {
        sum = sum + division(multiply(a_term(i), b_term(i)), c_term(i));
    }
    
    cout << sum;
}
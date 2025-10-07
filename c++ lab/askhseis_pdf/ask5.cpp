#include <iostream>
using namespace std;

int main()
{
    double *numbers;
    int n;
    double sum = 0;

    cout << "How many numbers do you want to add? " << endl;
    cin >> n;

    numbers = new double[n];

    for (int i=0; i<n; i++)
    {
        cout << "Give number " << i+1 << " : ";
        cin >> numbers[i];
    }

    for (int i=0; i<n; i++)
    {
        sum = sum + numbers[i];
    }

    cout << "Sum is: " << sum << endl;
    delete []numbers;

    return 0;

}
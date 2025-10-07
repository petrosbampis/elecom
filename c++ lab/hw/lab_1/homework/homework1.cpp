/*
Να διαβάζετε float αριθμό από το πληκτρολόγιο και, αφού σιγουρέψετε πως είναι
στο διάστημα [0,10), να επιβεβαιώσετε πως ο αριθμός έχει δύο ακριβώς δεκαδικά
ψηφία. Στη συνέχεια να γίνει στρογγυλοποίηση στο πρώτο δεκαδικό ψηφίο. 
Το πρόγραμμα να γραφεί με την εντολή ελέγχου if.

ΟΝΟΜΑΤΕΠΩΝΥΜΟ ΦΟΙΤΗΤΗ: ΜΠΑΜΠΗΣ ΠΕΤΡΟΣ 

*/

#include <iostream>
using namespace std;

int main()
{
    float x;
    float rounded_x;

    do
    {
        cout << "Instert num x, 0<= x <10: ";
        cin >> x;
    } while (!((x >= 0) && (x < 10))); 

    int check_x = (int)(x*100);

    if ((x*100 == check_x) && ((int)(x*10) != x*10)){ 
        rounded_x = (int)((x*10) + 0.5) / 10.0;
        cout << "rounded x: " << rounded_x;
    }
    else 
        cout << "x = " << x << ", does not have exactly two decimal numbers.";

    return 0;
};
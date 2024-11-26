/*
Να γράψετε πρόγραμμα που θα μετατρέπει έναν αριθμό από το οκταδικό σύστημα 
αρίθμισης στο δεκαδικό και το ανάποδο.

ΟΝΟΜΑΤΕΠΩΝΥΜΟ ΦΟΙΤΗΤΗ: ΜΠΑΜΠΗΣ ΠΕΤΡΟΣ 

*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    int choice;
    cout << "1. DEC to OCT\n";
    cout << "2. OCT to DEC\n";
    cout << "Select: ";
    cin >> choice;

    if (choice == 1) {
        int decimalNumber;
        cout << "Enter a decimal number: ";
        cin >> decimalNumber;

        string octalNumber = "";

        if (decimalNumber == 0)
        {
            octalNumber = "0";
        }
        else 
        {
            while (decimalNumber > 0)
            {
                int remainder = decimalNumber % 8;
                octalNumber = char('0' + remainder) + octalNumber;
                decimalNumber /= 8;
            }
        }

        cout << "The OCT equivalent is: " << octalNumber << endl;
    } else if (choice == 2) {
        string octalNumber;
        cout << "Enter an octal number: ";
        cin >> octalNumber;

        int decimalNumber = 0;
        int base = 1; 
        for (int i = octalNumber.length() - 1; i >= 0; i--) {
            char c = octalNumber[i];
            if (c >= '0' && c <= '7') {
                int value = c - '0';
                decimalNumber += value * base;
                base *= 8;
            } else {
                cout << "Invalid octal number." << endl;
            }
        }

        cout << "The DEC equivalent is: " << decimalNumber << endl;
    } else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}

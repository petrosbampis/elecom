/*
Να γράψετε πρόγραμμα που θα μετατρέπει έναν αριθμό από το δεκαδικό σύστημα 
αρίθμισης στο δεκαεξαδικό και το ανάποδο.

ΟΝΟΜΑΤΕΠΩΝΥΜΟ ΦΟΙΤΗΤΗ: ΜΠΑΜΠΗΣ ΠΕΤΡΟΣ 

*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    int choice;
    cout << "1. DEC to HEX\n";
    cout << "2. HEX to DEC\n";
    cout << "Select: ";
    cin >> choice;

    if (choice == 1) {
        int decNumber;
        cout << "Insert DEC number: ";
        cin >> decNumber;

        string hexNumber = "";
        int remainder;
        
        if (decNumber == 0)
        {
            hexNumber = "0";
        }
        
        else
        {
            while (decNumber > 0) {
                remainder = decNumber % 16;
                if (remainder < 10) {
                    hexNumber = char('0' + remainder) + hexNumber;
                } else {
                    hexNumber = char('A' + (remainder - 10)) + hexNumber;
                }
                decNumber /= 16;
            }
        }

        cout << "The HEX equivalent is: " << hexNumber << endl;
    }
    
    else if (choice == 2) {
        string hexNumber;
        cout << "Insert HEX number: ";
        cin >> hexNumber;

        int decNumber = 0;
        int base = 1; 

        for (int i = hexNumber.length() - 1; i >= 0; i--)
        {
            char c = hexNumber[i];
            int value;
            if (c >= '0' && c <= '9') {
                value = c - '0';
            } else if (c >= 'A' && c <= 'F') {
                value = c - 'A' + 10;
            } else if (c >= 'a' && c <= 'f') {
                value = c - 'a' + 10;
            } else {
                cout << "Invalid HEX form." << endl;
            }
            decNumber += value * base;
            base *= 16;
        }

        cout << "The DEC equivalent is: " << decNumber << endl;
    }
    
    else
    {
        cout << "Invalid choice.\n";
    }

    return 0;
}

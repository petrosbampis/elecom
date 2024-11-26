/*
Σύμφωνα με τον πίνακα του βιβλίου: 
α) να βρεθεί η απόσταση μεταξύ δύο δοθέντων πόλεων.
β) να δίνεται μία πόλη και να βρίσκετε τη μέση χιλιομετρική απόσταση αππό τις υπόλοιπες.
γ) το β), αλλά για όλες τις πόλεις.
δ) να δίνεται μία απόσταση από τον χρήστη και να εμφανίζονται οι μεγαλύτερες ααπό αυτήν αποστάσεις. 

ΟΝΟΜΑΤΕΠΩΝΥΜΟ ΦΟΙΤΗΤΗ: ΜΠΑΜΠΗΣ ΠΕΤΡΟΣ 

*/
#include <iostream>
#include <string>

using namespace std;

string codenames(int city)
{
    string cityname;
    switch (city)
    {
    case 0:
        cityname = "Athens";
        break;
    case 1:
        cityname = "Thessaloniki";
        break;
    case 2:
        cityname = "Patras";
        break;
    case 3:
        cityname = "Larisa";
        break;
    case 4:
        cityname = "Xanthi";
        break;
    case 5:
        cityname = "Volos";
        break;
    }
    return cityname;
} 


int main()
{
    int city_a, city_b;
    int distances[6][6] = {
        {0, 501, 217, 354, 703, 328}, // Athens
        {501, 0, 467, 152, 205, 208}, // Thessaloniki
        {217, 467, 0, 337, 670, 314}, // Patras
        {354, 152, 337, 0, 354, 64},  // Larisa
        {703, 205, 670, 354, 0, 411}, // Xanthi
        {328, 208, 314, 64, 411, 0}   // Volos
    };

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {   
                cout << distances[i][j] << "\t";
        }
        cout << endl;
    }
    
    cout << "\n0. Athens\n1. Thessaloniki\n2. Patras\n3. Larisa\n4. Xanthi\n5. Volos\n" << endl;
    do
    {
        cout << "Select city a: " << endl;
        cin >> city_a;
    }while(city_a < 0 || city_a > 5);
    do
    {
        cout << "Select city b: " << endl;
        cin >> city_b;
    }while(city_b < 0 || city_b > 5);
    cout <<"Distance between " << codenames(city_a) << " and " << codenames(city_b) << " is " << distances[city_a][city_b] << " km. " << endl;
    
    do
    {
        cout << "Select city: " << endl;
        cin >> city_a;
    }while(city_a < 0 || city_a > 5);
    int sum_distance = 0;
    for (int i = 0; i<6; i++)
    {
        sum_distance = sum_distance + distances[city_a][i];    
    }
    float avg_distance = (float)sum_distance/5; 
    cout << "Avg distance from " << codenames(city_a) << " and the rest of the cities is: " << avg_distance << " km. " << endl;
    
    sum_distance = 0;
    for (int i = 0; i<6; i++)
    {
        for (int j = 0; j<6; j++)
        {
            sum_distance = sum_distance + distances[i][j];  
        } 
        avg_distance = (float)sum_distance/5;
        cout << "Avg distance from " << codenames(i) << " and the rest of the cities is: " << avg_distance << " km. " << endl;
    }
    
    float d;
    cout << "Type distance in km: ";
    cin >> d;
    for (int i = 0; i<6; i++)
    {
        for (int j = 0; j<6; j++)
        {
            if (distances[i][j] > d)
            {
                cout << "Distance from " << codenames(i) << " to " << codenames(j) << ", " << distances[i][j] << " km, is bigger than the typed distance " << d <<" km." <<endl;   
            }
        } 
    }
    
    
    
    return 0;
}
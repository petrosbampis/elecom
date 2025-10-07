#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    do 
    {
    cout << "Set the number of rows: " << endl;
    cin >> rows;
    cout << "Set the number of cols: " << endl;
    cin >> cols;
    }while(rows <=0 || cols <=0);
    
    int a[rows][cols], b[rows][cols], sum[rows][cols];

    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }
  
    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "The resulting matrix after addition is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << sum[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
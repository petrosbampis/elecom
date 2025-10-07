/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package java5_6;

/**
 *
 * @author petro
 */
import java.util.Scanner;
import java.lang.Math;
public class Java5_6 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int [][] a = {{5, -4, 2}, {-1, 2, 3}, {-2, 1, 0}};
        int [][] b = {{4, -3, 2}, {0, 1, 6}, {-8, 4, 9}};
        int [][] c = new int[3][3];
        
        for (int i=0; i<3; i++){
            for (int j=0; j<3; j++){
                c[i][j] = 0;
                for (int k=0; k<3; k++){
                    c[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        
        System.out.println("Matrix c:");
        for (int i=0; i<3; i++){
            for (int j=0; j<3; j++){
                System.out.print(c[i][j] + "\t");
            }
            System.out.println();
        }
        
        int det = c[0][0] * (c[1][1] * c[2][2] - c[1][2] * c[2][1])
                - c[0][1] * (c[1][0] * c[2][2] - c[1][2] * c[2][0])
                + c[0][2] * (c[1][0] * c[2][1] - c[1][1] * c[2][0]);  
        System.out.println("The determinant of matrix c is: " +det);
        
    }
    
}

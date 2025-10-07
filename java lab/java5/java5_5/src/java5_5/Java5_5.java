/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package java5_5;

/**
 *
 * @author petro
 */
import java.util.Scanner;
import java.lang.Math;
public class Java5_5 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int [][] matrix = {{5, -4, 2}, {-1, 2, 3}, {-2, 1, 0}};
        
        int norm1=0;
        int norminf=0;
        double normeucl;

        
        for (int j=0; j<3; j++){
            int columnSum = 0;
            for (int i=0; i<3; i++) {
                columnSum += Math.abs(matrix[i][j]);
            }
            if (columnSum > norm1) {
                norm1 = columnSum;
            }
        }

        
        for (int i=0; i<3; i++) {
            int rowSum = 0;
            for (int j=0; j<3; j++) {
                rowSum += Math.abs(matrix[i][j]);
            }
            if (rowSum > norminf) {
                norminf = rowSum;
            }
        }

        
        int sum = 0;
        for (int i=0; i<3; i++) {
            for (int j=0; j<3; j++) {
                sum += Math.pow(matrix[i][j], 2);
            }
        }
        normeucl = Math.sqrt(sum);
        
        System.out.println(norm1);
        System.out.println(norminf);
        System.out.println(normeucl);

        
    }
    

    
}

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package java3_1;

/**
 *
 * @author petro
 */
import java.util.Scanner;
public class Java3_1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        int max = 0;
        int min = 0;
        int sum = 0;
        double avg;
                
        for (int i = 0; i < 10; i++) {
            System.out.print("Print num no " + (i + 1) + ": ");
            int num = input.nextInt();
            
            if (num > max) {
                max = num;
            }
            if (num < min) {
                min = num;
            }
            
            sum += num;
        }
        
        avg = (double)sum / 10; 
        
        System.out.println("max num is:: " + max);
        System.out.println("min num is: " + min);
        System.out.println("sum is: " + sum);
        System.out.println("avg value is: " + avg);
    
    }
}

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package java2_1;

/**
 *
 * @author petro
 */
import java.util.Scanner;
public class Java2_1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        System.out.println("Give double: ");
        double num = input.nextDouble();
        
        System.out.println("To akeraio meros einai: " + (int)num);
        System.out.printf("To klasmatiko meros einai: %.2f \n", num%1);
    }
    
}

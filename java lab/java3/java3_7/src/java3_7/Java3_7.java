/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package java3_7;

/**
 *
 * @author petro
 */
import java.util.Scanner;
public class Java3_7 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Print integer: ");
        int n = input.nextInt();
        int rev = 0;
        
        while (n !=0){
            int digit = n % 10;
            rev = rev *10 + digit;
            n /=10;
        }
        
        System.out.println("The number in reverse is: " + rev);
    }
    
}

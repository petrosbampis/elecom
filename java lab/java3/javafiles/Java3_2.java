/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package java3_2;

/**
 *
 * @author petro
 */
import java.util.Scanner;
public class Java3_2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Print integer: ");
        int n = input.nextInt();
        
        int factorial = 1;
        for (int i=1; i<=n; i++)
        {
            factorial *= i;
        }
        
        System.out.println("to " + n + "! is: " + factorial);
    }
    
}

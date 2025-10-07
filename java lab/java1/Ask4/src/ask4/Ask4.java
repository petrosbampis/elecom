/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package ask4;

/**
 *
 * @author petro
 */
import java.util.Scanner;

public class Ask4 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        
        System.out.print("Enter int a: ");
        int a = input.nextInt();
        System.out.print("Enter int b: ");
        int b = input.nextInt();
        System.out.print("Enter int c: ");
        int c = input.nextInt();
        System.out.print("Enter int d: ");
        int d = input.nextInt();
        
        int sum = a + b + c + d;
        System.out.println("Sum is: " +sum);
    }
    
}

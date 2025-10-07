/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package java4_3;

/**
 *
 * @author petro
 */
import java.util.Scanner;
public class Java4_3 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Print string: ");
        String a = input.nextLine(); 
        
        System.out.println("Length of your string is: " +a.length());
        System.out.println("The second character is: " +a.charAt(1));
    }
    
}

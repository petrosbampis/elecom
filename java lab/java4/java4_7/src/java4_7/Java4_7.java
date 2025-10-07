/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package java4_7;

/**
 *
 * @author petro
 */
import java.util.Scanner;
public class Java4_7 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Type a phrase: ");
        String phrase = input.nextLine();

        StringBuffer reversed = new StringBuffer(phrase);
        reversed.reverse(); 

        System.out.println("Reversed phrase: " + reversed.toString());
    }
    
}

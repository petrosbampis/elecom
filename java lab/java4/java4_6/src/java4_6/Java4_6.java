/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package java4_6;

/**
 *
 * @author petro
 */
import java.util.Scanner;
public class Java4_6 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Type a phrase in english: ");
        String phrase = input.nextLine();
        
        String vowels = "aeiou";
        int count = 0;

        for (int i = 0; i < phrase.length(); i++) {
            if (vowels.indexOf(phrase.charAt(i)) != -1) { 
                count++;
            }
        }


        System.out.println("Number of vowels: " + count);
    }
    
}

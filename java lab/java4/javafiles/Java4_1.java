/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package java4_1;

/**
 *
 * @author petro
 */
import java.util.Scanner;
public class Java4_1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Print string: ");
        String a = input.nextLine();

        
        int lekseis = 1 ;
        
        
        for (int i = 0; i<a.length(); i++)
        {
            if (a.charAt(i) == ' ' && a.charAt(i - 1) != ' ')
            {
                lekseis ++;
            }
        }
        
        System.out.println("To string exei " + lekseis + " lekseis.");
        
    }
    
}

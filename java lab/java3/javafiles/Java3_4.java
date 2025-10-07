/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package java3_4;

/**
 *
 * @author petro
 */
import java.util.Scanner;
public class Java3_4 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int i = 2;
        int sum = 0;
        while (i <= 500)
        {
            sum = sum + i;
            i = i+2;
        }
        
        System.out.println("The sum is: " + sum);
    }
    
}

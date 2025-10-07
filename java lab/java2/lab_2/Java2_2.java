/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package java2_2;

/**
 *
 * @author petro
 */
import java.util.Scanner;
public class Java2_2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        System.out.println("Give double: ");
        double num = input.nextDouble();
        
        if(num%1 == 0)
        {
            System.out.println("num " +num+ " is int ");
        }
        else
        {
            System.out.println("num " +num+ " is not int ");
        }
    }
    
}

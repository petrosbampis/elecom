/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package java3_3;

/**
 *
 * @author petro
 */
import java.util.Scanner;
public class Java3_3 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Print grade: ");
        double grade = input.nextDouble();
        
        if (grade <= 10 && grade >= 8.5)
        {
            System.out.println("Excellent");
                    
        }else if(grade <= 8.5 && grade >= 6.5)
        {
            System.out.println("Very good");
        }else if(grade <= 6.5 && grade >= 5)
        {
            System.out.println("Very good");
        }
    }
    
}

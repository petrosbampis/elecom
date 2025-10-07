/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package java2_4;

/**
 *
 * @author petro
 */
import java.util.Scanner;
import java.lang.Math;
public class Java2_4 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        System.out.println("type r for the first number: ");
        double r_a = input.nextDouble();
        System.out.println("type theta for the first number: ");
        double theta_a = input.nextDouble();  
        
        
        System.out.println("type r for the second number: ");
        double r_b = input.nextDouble();
        System.out.println("type theta for the second number: ");
        double theta_b = input.nextDouble();
        
        double rad_a = Math.toRadians(theta_a);
        double rad_b = Math.toRadians(theta_b);
        
        double sum_re = (r_a*Math.cos(rad_a)) + (r_b*Math.cos(rad_b));
        double sum_im = (r_a*Math.sin(rad_a)) + (r_b*Math.sin(rad_b));
        
        System.out.println("sum is: " +sum_re+ " + j" +sum_im);
        
    }
    
}


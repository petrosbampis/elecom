/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package java2_5;

/**
 *
 * @author petro
 */
import java.util.Scanner;
import java.lang.Math;
public class Java2_5 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
                
        System.out.println("type f: ");
        double f = input.nextDouble();
        
        System.out.println("type R: ");
        double r = input.nextDouble();
        
        System.out.println("type L in mH: ");
        double l = input.nextDouble();
        double l_h = l*0.001;
        double omega = 2*Math.PI*f;
        
        double z = Math.sqrt((Math.pow(r, 2))+((Math.pow(omega, 2))*Math.pow(l_h, 2)));
        double tanf =(omega*l_h)/r;
        
        System.out.println("Z is: " +z);
        System.out.println("tanf is: " +tanf);

        
    }
    
}

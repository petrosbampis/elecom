/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package java2_3;

/**
 *
 * @author petro
 */
import java.util.Scanner;
import java.lang.Math;
public class Java2_3 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        System.out.println("type f: ");
        double f = input.nextDouble();
        
        System.out.println("type d: ");
        double d = input.nextDouble();
        
        final double c = 3.0e8;
        double loss = 20*(Math.log10(d)) + 20*(Math.log10(f)) + 20*(Math.log10((4*Math.PI)/c));
        System.out.println("Path loss is: " +loss+ " dB.");
    }
    
}

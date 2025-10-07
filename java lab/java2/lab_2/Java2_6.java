/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package java2_6;

/**
 *
 * @author petro
 */
import java.util.Scanner;
public class Java2_6 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        System.out.println("type Vm: ");
        double v_m = input.nextDouble();

        double v_dc = (2*v_m)/Math.PI;
        double v_rms = v_m/Math.sqrt(2);
        double v_r = Math.sqrt(Math.pow(v_rms, 2) - Math.pow(v_dc, 2));
        double r = v_r/v_dc;
        
        System.out.println("Vdc: " +v_dc+ " V");
        System.out.println("Vrms: " +v_rms+ " V");
        System.out.println("Vr: " +v_r+ " V");
        System.out.println("r: " +r+ " V");
    }
    
}

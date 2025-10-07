/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package java5_3;

/**
 *
 * @author petro
 */
import java.util.Scanner;
public class Java5_3 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[] a = new int[10];
        int[] b = new int[10];
        
        for (int i=0; i<10; i++){
            System.out.println("For array a, type value no " + i +" : ");
            a[i] = input.nextInt();
        }
        
        for (int i=0; i<10; i++){
            System.out.println("For array b, type value no " + i +" : ");
            b[i] = input.nextInt();
        }
        
        int[] c = new int[20]; 
        for (int i=0; i<10; i++){
            c[i] = a[i];
            c[i+10]=b[i];
        }

        
        for (int i=0; i<20; i++){
            System.out.println("Value of index " +i+ " is: " +c[i]);
        }
    }
    
}

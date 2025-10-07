/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package javaapplication1;

/**
 *
 * @author petro
 */


public class JavaApplication1 {

    /**
     * @param args the command line arguments
     */
    
    public static void main(String[] args) {
        int a = 4;
        int b = 2;
        int temp = b;
        b = a;
        a = temp;
        
        System.out.println("after swap a: " +a +" and b: " +b);
    }
    
}

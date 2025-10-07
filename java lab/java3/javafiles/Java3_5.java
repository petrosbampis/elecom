/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package java3_5;

/**
 *
 * @author petro
 */
import java.util.Scanner;
import java.lang.Math;
public class Java3_5 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        System.out.println("prime numbers from 2 to 1000: ");
        for (int n= 2; n <= 1000; n++)
        {
            boolean isPrime = true;
            for (int i = 2;  i <= Math.sqrt(n); i++)
            {
                if (n % i == 0)
                {
                    isPrime = false;
                    break;
                }
            }
                
                if(isPrime)
                {
                    System.out.println("Prime: " + n);
                }
            }
        }
        
    }
    


/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package java5_1;

/**
 *
 * @author petro
 */
import java.util.Scanner;
public class Java5_1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[] myList = new int[10];
        
        for (int i=0; i<10; i++){
            System.out.println("Type value no " + i +" : ");
            myList[i] = input.nextInt();
        }
        
        int count = 0;
        
        for (int i=0; i<10; i++){
            if(myList[i]>10){
                count++;
            }
        }
        
        System.out.println("Number of values that re greater then 10: " +count);
        
        
        
    }
    
}

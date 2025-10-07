/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package java5_2;

/**
 *
 * @author petro
 */
import java.util.Scanner;
public class Java5_2 {

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
        
        int max = myList[0];
        int min = myList[0];
        int max_index = 0;
        int min_index = 0;
        
        for (int i=0; i<10; i++){
            if (myList[i]>max){
                max = myList[i];
                max_index = i;
            }
            else if(myList[i]<min){
                min = myList[i];
                min_index = i;
            }
        }
        
        System.out.println("max value is: " +max+ " and its index is: " +max_index);
        System.out.println("min value is: " +min+ " and its index is: " +min_index);
        
    }
    
}

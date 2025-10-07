/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package java5_4;


/**
 *
 * @author petro
 */
import java.util.Scanner;
public class Java5_4 {

    /**
     * @param args the command line arguments
     */
    
    static void bubbleSort(int[] arr){
        int n = arr.length;
        int temp=0;
        for (int i=0; i<n; i++){
            for(int j=1; j < (n-i); j++){
                if(arr[j-1] > arr[j]){
                    temp = arr[j-1];
                    arr[j-1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[] myList = new int[10];
        
        for (int i=0; i<10; i++){
            System.out.println("Type value no " + i +" : ");
            myList[i] = input.nextInt();
        }
        
        System.out.println("Array before sorting");
        
        for (int i=0; i<10; i++){
        System.out.println("Value of index " +i+ " is: " +myList[i]);
        }
        
        bubbleSort(myList);
        System.out.println("Array after sorting");
        
        for (int i=0; i<10; i++){
        System.out.println("Value of index " +i+ " is: " +myList[i]);
        }
    }
    
}

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package java4_5;

/**
 *
 * @author petro
 */
import java.util.Scanner;
public class Java4_5 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Print date: ");
        String date = input.nextLine();
        
        String month = date.substring(0, 2);
        String day = date.substring(3, 5);
        String year = date.substring(6, 8);
        String fullYear = "20" + year;
        
        String newDate = day + "/" + month + "/" + fullYear;
        System.out.println("New format of the date: " + newDate);
        

    }
    
}

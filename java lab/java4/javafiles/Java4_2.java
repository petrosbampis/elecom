/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package java4_2;

/**
 *
 * @author petro
 */
import java.util.Scanner;
public class Java4_2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Print string: ");
        String a = input.nextLine();     
        
        int count_dig = 0;
        int count_char = 0;
        int count_others = 0;
        for (int i = 0; i < a.length(); i++ ){
            if(a.codePointAt(i) >= 48 && a.codePointAt(i) <= 57){
                count_dig++;
            }
            
            else if(a.codePointAt(i) >= 65 && a.codePointAt(i) <= 90){
                count_char++;
            }
            
            else if(a.codePointAt(i) >= 97 && a.codePointAt(i) <= 122){
                count_char++;
            }
            
            else{
                count_others++;
            }
        }
        
        System.out.println("Your string has " +count_dig+ " digits.");
        System.out.println("Your string has " +count_char+ " letters.");
        System.out.println("Your string has " +count_others+ " other charaters.");

        
    }
    
}

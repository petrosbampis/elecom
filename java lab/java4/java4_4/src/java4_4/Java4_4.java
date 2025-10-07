/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package java4_4;

/**
 *
 * @author petro
 */
import java.util.Scanner;
public class Java4_4 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        String a = "The quick brown fox jumps over the lazy dog.";
        for(char i='a'; i<='z'; i++){
            System.out.println("Letter " +i+ " is in position " +a.indexOf(i));
        }
        
    }
    
}

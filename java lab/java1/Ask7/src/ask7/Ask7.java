/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package ask7;

/**
 *
 * @author petro
 */
import java.util.Scanner;
public class Ask7 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        System.out.println("Onomatepwnymo: ");
        String onomatepwnymo = input.nextLine();
        System.out.println("Idiothta: ");
        String idiotita = input.next();
        System.out.println("AEM: ");
        int aem = input.nextInt();
        System.out.println("email: ");
        String email = input.next();
        System.out.println("Mathima: ");
        String mathima = input.next();
        System.out.println("Vathmos: ");
        double vathmos = input.nextDouble();
        
        System.out.println("Onomatepwymo: " +onomatepwnymo);
        System.out.println("Idiothta: " +idiotita);
        System.out.println("AEM: " +aem);
        System.out.println("email: " +email);
        System.out.println("Mathima: " +mathima);
        System.out.println("Vathmos: " +vathmos);
        
    }
    
}

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package java6_4;

/**
 *
 * @author petro
 */
import java.util.Scanner;


class Member{
    private String firstName;
    private String lastName;
    private String address;
    private int birthYear;
    private int registrationYear;
    
    
    public Member(){
        Scanner input = new Scanner(System.in);

        System.out.println("First name: ");
        firstName = input.nextLine();
      
        System.out.println("Last name: ");
        lastName = input.nextLine();
        
        System.out.println("Address: ");
        address = input.nextLine();
        
        System.out.println("Birth Year: ");
        birthYear = input.nextInt();
        
        System.out.println("Registration Year: ");
        registrationYear = input.nextInt();
    }

    public void print(){
        System.out.println(firstName+ " " +lastName+ ", Address: " +address+ ", Birth year: " +birthYear+ ", Registration Year: " + registrationYear);
    }
    
    public String getFullName() {
        return firstName + " " + lastName;
    }

    public void update() {
        Scanner input = new Scanner(System.in);

        System.out.println("New first name: ");
        firstName = input.nextLine();
      
        System.out.println("New last name: ");
        lastName = input.nextLine();
        
        System.out.println("New address: ");
        address = input.nextLine();
        
        System.out.println("New birth Year: ");
        birthYear = input.nextInt();
        
        System.out.println("New registration Year: ");
        registrationYear = input.nextInt();
    }
}


class Syllogos {
    private Member[] members;
    private int count;

    public Syllogos() {
        members = new Member[200];
        count = 0;
    }

    public void addMember() {
        if (count < 200) {
            System.out.println("New member entry:");
            members[count++] = new Member();
            System.out.println("New member has been added.\n");
        } else {
            System.out.println("No more space for new members.");
        }
    }

    public void showAll() {
        if (count == 0) {
            System.out.println("No members yet.");
            return;
        }

        System.out.println("Members list:");
        for (int i = 0; i < count; i++) {
            System.out.print((i + 1) + ". ");
            members[i].print();
        }
    }

    public void deleteMember(String name) {
        for (int i = 0; i < count; i++) {
            if (members[i].getFullName().equalsIgnoreCase(name)) {
                for (int j = i; j < count - 1; j++) {
                    members[j] = members[j + 1];
                }
                count--;
                System.out.println("Mmeber has been succesfully deleted.\n");
                return;
            }
        }
        System.out.println("Couldn't find member.\n");
    }

    public void updateMember(String name) {
        for (int i = 0; i < count; i++) {
            if (members[i].getFullName().equalsIgnoreCase(name)) {
                System.out.println("Uptading member information:");
                members[i].update();
                System.out.println("Information has been updated.\n");
                return;
            }
        }
        System.out.println("Couldn't find member.\n");
    }
}



public class Java6_4 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        Syllogos syllogos = new Syllogos();
        int choice;

        do {
            System.out.println("\n******** Programma Diaxeirisis Syllogou ********");
            System.out.println("1. Eggrafi neou melous");
            System.out.println("2. Emfanisi stoixeion olon ton melon");
            System.out.println("3. Diagrafi melous");
            System.out.println("4. Allagi stoixeion melous");
            System.out.println("0. Exodos...");
            System.out.println("-----------------------------------------------");
            System.out.print("Epilogi: ");
            choice = Integer.parseInt(input.nextLine());

            switch (choice){
                case 1:
                    syllogos.addMember();
                    break;
                case 2:
                    syllogos.showAll();
                    break;
                case 3:
                    System.out.print("Type the name of the student you wish to delete: ");
                    String deleteName = input.nextLine();
                    syllogos.deleteMember(deleteName);
                    break;
                case 4:
                    System.out.print("Type the name of the student whose information you wish to update: ");
                    String updateName = input.nextLine();
                    syllogos.updateMember(updateName);
                    break;
                case 0:
                    System.out.println("Exiting program.");
                    break;
                default:
                    System.out.println("Invalid option.");
            }

        } while (choice != 0);
    }
    
}

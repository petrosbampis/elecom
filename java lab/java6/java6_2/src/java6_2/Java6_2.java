/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package java6_2;

/**
 *
 * @author petro
 */
import java.util.Scanner;

class Student{

    private String name;
    private int am;
    private int grade;

    public Student(){
        this.name = "New Student";
        this.am = 99999;
        this.grade = 0;
    }

    public Student(String name, int am, int grade){
        this.name = name;
        this.am = am;
        this.grade = grade;
    }

    public void setName(String name){
        this.name = name;
    }

    public void setId(int am){
        this.am = am;
    }

    public void setGrade(int grade){
        this.grade = grade;
    }

    public String getName(){
        return name;
    }

    public int getAm(){
        return am;
    }

    public int getGrade(){
        return grade;
    }

    public void setAll(){
        Scanner input = new Scanner(System.in);
        System.out.print("Student name: ");
        this.name = input.nextLine();
        System.out.print("Student am: ");
        this.am = input.nextInt();
        System.out.print("Student grade: ");
        this.grade = input.nextInt();
    }

    public void print() {
        System.out.println("Name: " + name);
        System.out.println("AM: " + am);
        System.out.println("Grade: " + grade);
    }
}

public class Java6_2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Student[] students = new Student[3];
        
        students[0] = new Student("Petros", 99999, 7);
        students[1] = new Student("Giorgos", 11111, 7);
        students[2] = new Student();
        students[2].setAll();
        
        for (int i = 0; i<3; i++){
            students[i].print();
            System.out.println();
        }
        
        for (int i = 0; i<3; i++){
            if(students[i].getGrade() > 5){
                System.out.println("Student " +students[i].getName()+ " has a grade over 5.");
            }
        }
    }
    
}

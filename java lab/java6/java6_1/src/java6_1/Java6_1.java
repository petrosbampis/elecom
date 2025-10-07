/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package java6_1;

/**
 *
 * @author petro
 */
import java.util.Scanner;
import java.lang.Math;

    class Circle{
        private double x=0, y=0, r=0;
        
        public Circle(double x, double y, double r){
            this.x = x;
            this.y = y;
            this.r = r;
        }
        
        public double getCircumference(){
            return 2*Math.PI*r;
        }
        
        public double getArea(){
            return Math.PI*r*r;
        }    
    }
public class Java6_1 {
    
    public static void main(String[] args) {
        Circle c = new Circle(0, 0, 3);
        System.out.println("Circumference is: " +c.getCircumference());
        System.out.println("Area is: " +c.getArea());  
    }
    
}

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package java6_3;

/**
 *
 * @author petro
 */
import java.util.Scanner;
import java.lang.Math;

class Point{
    double x, y;

    public Point(double x, double y){
        this.x = x;
        this.y = y;
    }

    public static double distance(Point p1, Point p2){
        return Math.sqrt(Math.pow(p2.x - p1.x, 2) + Math.pow(p2.y - p1.y, 2));
    }

    public String toString(){
        return "(" + x + ", " + y + ")";
    }
}

class Rectangle{
    Point p1, p2, p3, p4;
    double length, width;

    
    public Rectangle(Point p1, Point p2, Point p3, Point p4){
        this.p1 = p1;
        this.p2 = p2;
        this.p3 = p3;
        this.p4 = p4;

        calculateDimensions();
    }

    public void calculateDimensions(){
        double d1 = Point.distance(p1, p2);
        double d2 = Point.distance(p2, p3);

        this.length = Math.max(d1, d2);
        this.width = Math.min(d1, d2);
    }

    public double getArea(){
        return length * width;
    }

    public void show(){
        System.out.println("rectangle Points:");
        System.out.println("p1: " + p1);
        System.out.println("p2: " + p2);
        System.out.println("p3: " + p3);
        System.out.println("p4: " + p4);
        System.out.println("length: " + length);
        System.out.println("width: " + width);
        System.out.println("area: " + getArea());
    }
}


public class Java6_3 {

    /**
     * @param args the command line arguments
     */

    public static void main(String[] args) {
        Point a = new Point(0, 0);
        Point b = new Point(4, 0);
        Point c = new Point(4, 3);
        Point d = new Point(0, 3);

        Rectangle rect = new Rectangle(a, b, c, d);
        rect.show();
    }
    
}

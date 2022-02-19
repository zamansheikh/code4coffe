import java.lang.Math;
public class Circle {
    private double radius;
    Circle(){}
    Circle(double radius){
        this.radius = radius;
    }
    void setRadius(double radius){
        this.radius = radius;
    }
    double getRadius(){
        return radius;
    }
    double getArea(){
        return Math.PI * radius * radius;
    }
    void DisplayArea(){
        System.out.println("Area of Circle is: " + getArea()); 
    }
}

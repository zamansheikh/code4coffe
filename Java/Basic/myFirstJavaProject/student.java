package myFirstJavaProject;
import java.util.Scanner;
public class student {
    int id;
    String name;
    String Department;
    int courseNumber;
    int mark;
    //Constructor
    student(int id, String name, String Department, int courseNumber, int mark) {
        this.id = id;
        this.name = name;
        this.Department = Department;
        this.courseNumber = courseNumber;
        this.mark = mark;
    }
    //Method _input
    public static void studentmethod() {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter student id: ");
        int id = input.nextInt();
        System.out.println("Enter student name: ");
        String name = input.next();
        System.out.println("Enter student Department: ");
        String Department = input.next();
        System.out.println("Enter student course number: ");
        int courseNumber = input.nextInt();
        System.out.println("Enter student mark: ");
        int mark = input.nextInt();
        student myStudent = new student(id, name, Department, courseNumber, mark);
        
    }

    //print method
    public static void studentprint() {
        System.out.println("Student ID: " + id);
        System.out.println("Student Name: " + name);
        System.out.println("Student Department: " + Department);
        System.out.println("Student Course Number: " + courseNumber);
        System.out.println("Student Mark: " + mark);
        if (mark >= 40) {
            System.out.println("Student passed");
        } else {
            System.out.println("Student failed");
        }
    }
    
    
}
import java.util.Scanner;

public class student {
    int id;
    String name;
    String Department;
    int courseNumber;
    int mark;
    

    // Method _input
    public void studentmethod() {
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
        this.name = name;
        this.id = id;
        this.Department = Department;
        this.courseNumber = courseNumber;
        this.mark = mark;
    }

    // print method
    public void studentprint() {
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
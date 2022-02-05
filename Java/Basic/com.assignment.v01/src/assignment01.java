import java.util.Scanner;
public class assignment01 {
    public static void assign_01(){
        System.out.println("find the grade for a given mark according to the grading rule of your university.");

        Scanner input = new Scanner(System.in);
        System.out.print("Enter the mark: ");
        int mark = input.nextInt();
        if (mark >= 80 & mark <= 100) {
            System.out.println("A+");
        } else if (mark >= 75 & mark < 80) {
            System.out.println("A");}
        else if (mark >= 70 & mark < 75) {
            System.out.println("A-");}
        else if (mark >= 65 & mark < 70) {
            System.out.println("B+");}
        else if (mark >= 60 & mark < 65) {
            System.out.println("B");}
        else if (mark >= 55 & mark < 60) {
            System.out.println("B-");}
        else if (mark >= 50 & mark < 55) {
            System.out.println("C+");}
        else if (mark >= 45 & mark < 50) {
            System.out.println("C");}
        else if (mark >= 40 & mark < 45) {
            System.out.println("D");}
        else if (mark >= 0 & mark < 40) {
            System.out.println("F");}
        else {
            System.out.println("Invalid mark");
        }
        System.out.println("Press any key to continue..."); 
        input.next();
       return;
    }
}

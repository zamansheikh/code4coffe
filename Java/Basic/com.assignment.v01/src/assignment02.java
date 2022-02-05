import java.util.Scanner;
public class assignment02 {
    public static void assign02(){
        System.out.println("Write a program to test a year if it is leap year or not.");
        Scanner input = new Scanner(System.in);
        System.out.println("Enter a year: ");
        int year = input.nextInt();
        if ( (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            System.out.println("The year " + year + " is a leap year.");
        } else {
            System.out.println("The year " + year + " is not a leap year.");
        }
        System.out.println("Press any key to continue..."); 
        input.next();
       return;
    }
    
}

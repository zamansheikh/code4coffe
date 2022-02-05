import java.util.Scanner;
public class assignment05 {
    public static void assign05(){
        System.out.println("Write a program to find the factorial of a number.");
            Scanner input = new Scanner(System.in);
            System.out.println("Enter a number: ");
            int n = input.nextInt();
            int factorial = 1;
            for (int i = 1; i <= n; i++){
                factorial *= i;
            }
            System.out.println("Factorial of " + n + " is " + factorial);

            System.out.println("Press any key to continue...");
            input.next();
            return;
    }
    
}

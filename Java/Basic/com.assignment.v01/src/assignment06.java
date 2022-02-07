import java.util.Scanner;
public class assignment06 {
    public static void assign06(){
        System.out.println("Write a program to find the power for a given base and exponent.");
            Scanner input = new Scanner(System.in);
            System.out.println("Enter a Base: ");
            int n = input.nextInt();
            System.out.println("Enter an Exponent: ");
            int m = input.nextInt();
            int power = 1;
            for (int i = 1; i <= m; i++){
                power *= n;
            }
            System.out.println("Power of " + n + "^" + m + " is " + power);

            System.out.println("Press any key to continue...");
            input.next();
            return;
    }
    
}

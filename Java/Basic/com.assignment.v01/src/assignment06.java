import java.util.Scanner;
public class assignment06 {
    public static void assign06(){
        System.out.println("Write a program to find the power for a given base and exponent.");
            Scanner input = new Scanner(System.in);
            System.out.println("Enter a Base: ");
            int base = input.nextInt();
            System.out.println("Enter an Exponent: ");
            int exp = input.nextInt();
            for (int i = 0; i < exp; i++) {
                if (Math.pow(base, i) == exp) {
                    System.out.println("The power is: " + i);
                }
            }

            System.out.println("Press any key to continue...");
            input.next();
            return;
    }
    
}

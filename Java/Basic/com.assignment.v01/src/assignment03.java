import java.util.Scanner;
public class assignment03 {
    public static void assign03(){
        System.out.println("Write a program to evaluate the following series 1^2 +3^2 +5^2 +………………………. Up to n terms");
        Scanner input = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int n = input.nextInt();
        // int sum = 0;
        // for (int i = 1; i <= n; i++) {
        //     sum += Math.pow(i, 2);
        // }
        //Accually I don't understand the assignment. that's why I use the above code.
        
        for( int i = 1; i <= n; i+=2){
            System.out.print(i);
            if(i != n){
                System.out.print("^2 + ");
            }
            else{
                System.out.print("^2");
            }
        }
        System.out.println("\nPress any key to continue..."); 
        input.next();
       return;
    }
    
}

import java.util.Scanner;
public class assignment04 {
        public static void assign04(){
            System.out.println("Write a program to evaluate the following series 1-2+3-4+………………………. Up to n terms");
            Scanner input = new Scanner(System.in);
            System.out.println("Enter a number: ");
            int n = input.nextInt();
            for ( int i = 1; i <= n; i++){
                if(i % 2 == 0){
                    if (i == n){
                        System.out.print(i);
                    }
                    else{
                        System.out.print(i + "+");
                    }
                }
                else{
                    if (i == n){
                        System.out.print(i);
                    }
                    else{
                        System.out.print(i + "-");
                    }
                }
            }
            System.out.println("\nPress any key to continue..."); 
            input.next();
           return;
        }
    
}

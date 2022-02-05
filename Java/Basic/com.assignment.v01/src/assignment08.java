import java.util.Scanner;
public class assignment08 {
    public static void assign08(){
        System.out.println("Write a program to find the largest number in a list of Array.");
            Scanner input = new Scanner(System.in);
            System.out.println("Enter the number of elements in the list: ");
            int n = input.nextInt();
            int[] list = new int[n];
            System.out.println("Enter the elements of the list: ");
            for (int i = 0; i < n; i++){
                list[i] = input.nextInt();
            }
            int max = list[0];
            for (int i = 1; i < n; i++){
                if (list[i] > max){
                    max = list[i];
                }
            }
            System.out.println("The largest number in the list is " + max);
            
            System.out.println("Press any key to continue...");
            input.next();
            return;
    }
    
    
}

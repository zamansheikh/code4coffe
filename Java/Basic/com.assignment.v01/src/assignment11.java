import java.util.Scanner;
public class assignment11 {
    public static void assign11(){
        System.out.println("Write a program to find frequency of a number with highest occurrence");
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the number of elements: ");
        int n = input.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            System.out.print("Enter element " + (i + 1) + ": ");
            arr[i] = input.nextInt();
        }
        int max = 0;
        int maxIndex = 0;
        for (int i = 0; i < n; i++) {
            int count = 1;
            for (int j = 0; j < n; j++) {
                if (i != j && arr[i] == arr[j]) {
                    count++;
                }
            }
            if (count > max && count > 1) {
                max = count;
                maxIndex = i;
            }

        }
        
        System.out.println("The number with highest occurrence is: " + arr[maxIndex]);
        System.out.println("Press any key to continue...");
        input.next();
        return;
    }
}  

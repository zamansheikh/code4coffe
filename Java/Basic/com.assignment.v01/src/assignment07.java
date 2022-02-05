import java.util.Scanner;
public class assignment07 {
    public static void assign07(){
        System.out.println("Write a program to find the Bangla season form a given month using if/switch.");
            Scanner input = new Scanner(System.in);
            System.out.println("Enter a month: ");
            int month = input.nextInt();
            switch (month){
                case 1:
                case 2:
                System.out.println("Season: Grishmo");
                break;
                case 3:
                case 4:
                System.out.println("Season: Borsha");
                break;
                case 5:
                case 6:
                    System.out.println("Season: Shorot");
                    break;
                case 7:
                case 8:
                System.out.println("Season: Hemonto");
                break;
                case 9:
                case 10:
                System.out.println("Season: Sheet");
                break;
                case 11:
                case 12:
                    System.out.println("Season: Basanta");
                    break;
                default:
                    System.out.println("Invalid Input");
                    break;
            }
            
            System.out.println("Press any key to continue...");
            input.next();
            return;
    }
    
}

import java.util.Scanner;

public class choiceSetup {
    public static void runProgram(){
        Scanner input = new Scanner(System.in);
        String holderName;
        String accountNo;
        String accountType;
        float balance;
        int choie;
        do {
            System.out.println("1. Create \n 2. Deposit \n 3. Withdraw \n 4. View Info \n 5. Exit");
            choie = input.nextInt();
            switch (choie) {
                case 1:
                    System.out.println("Enter holder name: ");
                    holderName = input.next();
                    System.out.println("Enter account no: ");
                    accountNo = input.next();
                    System.out.println("Enter account type: ");
                    accountType = input.next();
                    System.out.println("Enter balance: ");
                    balance = input.nextFloat();
                    userdata user = new userdata(holderName, accountNo, accountType, balance);
                    break;
                case 2:
                    System.out.println("Enter account no: ");
                    accountNo = input.next();
                    user.deposit();
                    break;
                case 3:
                    System.out.println("Enter account no: ");
                    accountNo = input.next();
                    user.withdraw();
                    break;
                case 4:
                    System.out.println("Enter account no: ");
                    accountNo = input.next();
                    user.viewInfo();
                    break;
                case 5:
                    System.out.println("Exit");
                    break;
                default:
                    System.out.println("Invalid choice");
                    break;
            }
        } while (choie != 5);

    }
}

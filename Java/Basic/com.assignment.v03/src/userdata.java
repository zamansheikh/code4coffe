import java.util.Scanner;

public class userdata {
    //4 veriable
    String holderName;
    String accountNo;
    String accountType;
    float balance;
    userdata(String holderName, String accountNo, String accountType, float balance) {
        this.holderName = holderName;
        this.accountNo = accountNo;
        this.accountType = accountType;
        this.balance = balance;
    }
    //method 1
    public void deposit() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter amount to deposit: ");
        float amount = sc.nextFloat();
        this.balance += amount;
    }
    //method 2
    public void withdraw() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter amount to withdraw: ");
        float amount = sc.nextFloat();
        if(amount > this.balance) {
            System.out.println("Insufficient balance");
        } else {
            this.balance -= amount;
        }
    }
    //method 3
    public void viewInfo() {
        System.out.println("Holder Name: " + this.holderName);
        System.out.println("Balance: " + this.balance);
    }
    
    

}

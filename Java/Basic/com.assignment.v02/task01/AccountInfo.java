class AccountInfo{

    String name;
    String accountNumber;
    String Type;
    double balance;
    AccountInfo(){this.balance = 0;}
    AccountInfo(String name, String accountNumber, String Type, double balance){
        this.name = name;
        this.accountNumber = accountNumber;
        this.Type = Type;
        this.balance = balance;
    }
    void deposit(double amount){
        balance += amount;
    }
    void withdraw(double amount){
        this.balance = (this.balance - amount) < 0 ? 0 : this.balance - amount;
        System.out.println((this.balance - amount) < 0 ? "Insufficient Balance" : "Withdrawal Successful");
         }
    void viewInfo(){
        System.out.println("Name: " + this.name);
        System.out.println("Balance: " + this.balance);
    }
}
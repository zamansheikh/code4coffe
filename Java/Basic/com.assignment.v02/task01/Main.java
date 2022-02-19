public class Main {
    public static void main(String[] args) {
        AccountInfo account1 = new AccountInfo("Zaman Sheikh", "123456789", "Savings", 1000);
        account1.deposit(500);
        account1.withdraw(500);
        account1.viewInfo();
    }
}

import java.util.Scanner;
import java.lang.Math;

class Customer {
    String customerId;
    String customerName;
    double customerBill;
    Customer(){}
    Customer(String customerId, String customerName, double customerBill){
        this.customerId = customerId;
        this.customerName = customerName;
        this.customerBill = customerBill;
    }
    Scanner sc = new Scanner(System.in);
    void InputForm(){
        System.out.println("Enter customer name: "); customerName = sc.nextLine();
        System.out.println("Hello " + customerName + "\nYour Generated ID is: " + (Math.random()));
        System.out.println("How Much you wanna pay: "); customerBill = sc.nextDouble();
    }
    boolean is10PercentDiscount(){
        return customerBill > 2000;
    }
    void ComputeBill(){
        if(is10PercentDiscount()){
            customerBill = customerBill * 0.9;
            System.out.println("Your bill is: " + customerBill);
        }
    }
}

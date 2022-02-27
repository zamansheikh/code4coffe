public class Payment extends Student {
    private double costPerCredit;
    private double creditHours;
    Payment (int id, String name, double costPerCredit, double creditHours){
        super(id, name);
        this.costPerCredit = costPerCredit;
        this.creditHours = creditHours;
    }
    void displayPayment(){
        System.out.println("Total Cost: " + (this.costPerCredit * this.creditHours));
    }
    

}

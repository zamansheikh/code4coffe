// package task2;
public class Pension extends Employee {
    private int number_of_years;
    private double lastBasic;
    Pension(int id, String name, String Dept, int number_of_years, double lastBasic){
        super(id, name, Dept);
        this.number_of_years = number_of_years;
        this.lastBasic = lastBasic;
    }
    void DisplayPension(){
        double pension = 0;
        pension = number_of_years * 10 * (lastBasic * 7);
        System.out.println("Pension: " + pension);
    }
    
}

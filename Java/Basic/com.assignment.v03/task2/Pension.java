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
        if(number_of_years >= 10){
            pension = lastBasic * 0.1;
        }
        else if(number_of_years >= 5){
            pension = lastBasic * 0.05;
        }
        else if(number_of_years >= 2){
            pension = lastBasic * 0.02;
        }
        else{
            pension = lastBasic * 0.01;
        }
        System.out.println("Pension: " + pension);
    }
    
}

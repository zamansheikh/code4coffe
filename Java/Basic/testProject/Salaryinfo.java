package testProject;

public class Salaryinfo extends Employee {
    String month;
    double basic_salary;
    Salaryinfo(){
        basic_salary = 5000;
    }
    Salaryinfo(int id, String name, String dept, String Road_No, String house_no, String City){
        super(id, name, dept, Road_No, house_no, City);
        this.month = month;
        this.basic_salary = basic_salary;
    }



    void Calculate_salary() {
        if (basic_salary >= 3000){
            double salary = basic_salary*1.4;
            System.out.println("Salary of "+Name+" is "+salary);
        }
        else {
            double salary = basic_salary*1.5;
            System.out.println("Salary of "+Name+" is "+salary);
        }
    }
    void Display_salary() {
        System.out.println("Salary of "+Name+" is "+basic_salary);
        
    }

   
}

// package task2;
public class Salaryinfo extends Employee {
    String Month;
    double Basic_Salary;
    Salaryinfo(){
        super();
    }
    Salaryinfo(int id, String name, String Dept, String Month, double Basic_Salary){
        super(id, name, Dept);
        this.Month = Month;
        this.Basic_Salary = Basic_Salary;
    }
    void CalculateSalary(){
        double salary;
        double houseRent = Basic_Salary >= 30000 ?  Basic_Salary * 0.6 : Basic_Salary * 0.5;
        salary = Basic_Salary + houseRent;
        System.out.println("Total Salary: " + salary);
    }
    void DisplaySalary (){
        System.out.println("ID: " + id);
        System.out.println("Name: " + name);
        System.out.println("Department: " + Dept);
        System.out.println("Month: " + Month);
        System.out.println("Basic Salary: " + Basic_Salary);
        CalculateSalary();
    }

}

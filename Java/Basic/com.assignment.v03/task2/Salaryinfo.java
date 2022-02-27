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

    
}

// package task2;
public class Main {
    public static void main(String[] args) {
        SalaryInfo employee1 = new SalaryInfo(1, "John", "Java", "Jan", 100);
        employee1.DisplaySalary();
        Pension employee2 = new Pension(2, "Jane", "Java", 10, 100);
        employee2.DisplayPension();
    }

}

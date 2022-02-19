import java.util.Scanner;
class Employee {
    String id; 
    String name;
    double salary;
    double houseRent;
    Employee(){}
    Scanner sc = new Scanner(System.in);
    void input(){
        System.out.println("Enter id: "); id = sc.nextLine();
        System.out.println("Enter name: "); name = sc.nextLine();
        System.out.println("Enter salary: "); salary = sc.nextDouble();
    }
    void ComputeRent(){
        this.houseRent = this.salary > 20000 ? this.salary * 0.5 : this.salary * 0.6;
    }
    void viewInfo(){
        System.out.println("Name: " + name);
        System.out.println("Salary: " + (salary + houseRent));
    }
}

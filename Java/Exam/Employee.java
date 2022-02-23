
public class Employee {
    private int id;
    private String name;
    double basic;
    double houseRent;
    Employee(){
        this(0,"",0.0);
    }
    Employee(int id,String name,double basic){
        this.id=id;
        this.name=name;
        this.basic=basic;
    }
    public void calculate(){
        houseRent = basic > 40000 ? basic * 0.6 : basic * 0.6;
    }
    public void displaySalary(){
        System.out.println("Name: "+name);
        System.out.println("ID: "+id);
        System.out.println("Basic: "+basic);
        System.out.println("House Rent: "+houseRent);
        System.out.println("Total Salary of "+ name +" is "+ (basic+houseRent));
    }
}

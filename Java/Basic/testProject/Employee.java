package testProject;

public class Employee {
    protected int Id;
    public String Name;
    public String dept;
    Employee(){
        Address a = new Address();
    }
    Employee(int id, String name, String dept, String road_no, String house_no, String city) {
        Address a = new Address();
        a.Road_No = road_no;
        a.House_no = house_no;
        a.City = city;
        this.Id = id;
        this.Name = name;
        this.dept = dept;
    }
    
}

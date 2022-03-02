<<<<<<< HEAD
// package task2;
public class Employee {
    protected int id;
    public String name;
    public String Dept;
    Employee(){
        Address address = new Address();
    }
    Employee(int id, String name, String Dept){
        Address address = new Address();
        this.id = id;
        this.name = name;
        this.Dept = Dept;
    }
=======
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
    
>>>>>>> 4b583c6a5b3b76e27a59da56f22acbf512c94918
}

public class Employee {
    protected int id;
    public String name;
    public String Dept;
    Employee(){
        Address address = new Address();
    }
    Employee(int id, String name, String Dept){
        this.id = id;
        this.name = name;
        this.Dept = Dept;
    }
}

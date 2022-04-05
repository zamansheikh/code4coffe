package N001;

public class Vehicle {
    protected String model;
    public Vehicle(String model){
        this.model = model;
    }
    public void display(){
        System.out.println("Model: " + model);
    }
    
}

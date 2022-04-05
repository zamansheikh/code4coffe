package N001;

public class Volvo extends Vehicle implements Drive {
    private double price;
    public Volvo(String model,double price){
        super(model);
        this.price = price;
    }
    public void startEngine(){
        System.out.println("Starting Volvo Engine");
    }
    public void stopEngine(){
        System.out.println("Stopping Volvo Engine");
    }

    public static void main(String[] args) {
        //I) Implement the following UML object model using Java:
        //ID: 211-15-4031
        //Shamsuzzaman
        Volvo newVolvo = new Volvo("BNW", 3600000);
        newVolvo.display();
        newVolvo.startEngine();
        newVolvo.stopEngine();
        
    }
    
}

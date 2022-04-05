package NO02;

public class Honda extends Vahicle implements Drive, Race {
    private int nowheel;
    private double price;
    public Honda(String model, double weight, int nowheel, double price){
        super(model, weight);
        this.nowheel = nowheel;
        this.price = price;
    }
    public void drive(){
        System.out.println("Driving Honda");
    }
    public void stop(){
        System.out.println("Stopping Honda");
    }
    public void turn(){
        System.out.println("Turning Honda");
    }
    public void startRace(){
        System.out.println("Starting Honda Race");
    }
    public void stopRace(){
        System.out.println("Stopping Honda Race");
    }
    @Override
    void display() {
        super.display();
        System.out.println("NowWheel: " + nowheel);
        System.out.println("Price: "+ price);

    }
    public static void main(String[] args) {
        //II) Implement the following UML object model using Java:
        //ID: 211-15-4031
        //Shamsuzzaman
        Honda newHonda = new Honda("BNW", 360, 4, 3600000);
        newHonda.display();
        newHonda.drive();
        newHonda.stop();
        newHonda.turn();
        newHonda.startRace();
        newHonda.stopRace();

    }
}

package NO02;
class Vahicle{
    protected String model;
    protected double weight;
    public Vahicle(String model, double weight){
        this.model = model;
        this.weight = weight;
    }
    void display(){
        System.out.println("Model: " + model);
        System.out.println("Weight: " + weight);
    }
}
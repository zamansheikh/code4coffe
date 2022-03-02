class User{
    protected String userid;
    protected String paswrd;
    public User(String userid, String password){
        this.userid = userid;
        this.paswrd = paswrd;
        
    }

    public void display(){
        System.out.println(paswrd);
        System.out.println(userid);
    }

}

class Customer extends User {
    private String name;
    private String Email;
    public Customer(String name, String Email ){
        this.name =name;
        this.Email = Email;
    }
    public static void main(String[] args) {
        Customer customer1 = new Customer("Rahik", "rahik4050@hotmail.com");
        System.out.println(customer1.Email);
        System.out.println(customer1.name);
    }
}

class Item{
    private String item;
    private double price;

    public Item(String itemName, double price){
        item = itemName;
        this.price = price;
    }
    public void display(){
        System.out.println("Welcome to rahik shop");
        System.out.println("Item name = " + item);
        System.out.println("Price = " + price);
    }
}


//underline means the static keyword

//# tag means protected
//example protected int abc;


int getDimantion(){
    return Dimantion;
}
void deti




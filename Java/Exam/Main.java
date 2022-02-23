public class Main {

    public static void main(String args[]) {
        CallTest2 ob = new CallTest2();
        ob.CallV(35,9);
        System.out.println("Before call 1: " + ob.x + " " + ob.y); 
        System.out.println("Before call 2: " + (ob.x + ob.y));
        ob.calc(ob); 
        System.out.println("after call 1: " + ob.x + " " + ob.y); 
        System.out.println("after call 2: " + (ob.x + ob.y)); 
        }
    
}

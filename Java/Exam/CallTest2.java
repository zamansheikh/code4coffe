public class CallTest2 {
    int x, y;
    void CallV(int i, int j) {
    i = i+3;
    y = j-2;
    System.out.println("Expression in calcV method is: "+ i+" " +j);
    }
    void calc(CallTest2 o) {
        System.out.println("Expression in calc method is: "+ (o.x*3)+o.y);
        o.x += 6;
        o.y /= 7;
        }
    
}

    
   
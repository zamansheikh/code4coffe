class Number {
    public int number1;
    public int number2;
    public int number3;
    public double number4;
    public double number5;
    
    void Maximum(int number1, int number2, int number3) {
        if (number1 > number2 && number1 > number3) {
            System.out.println("Maximum number is " + number1);
        } else if (number2 > number1 && number2 > number3) {
            System.out.println("Maximum number is " + number2);
        } else {
            System.out.println("Maximum number is " + number3);
        }
    }
    void Maximum(double number1, double number2) {
        if (number1 > number2) {
            System.out.println("Maximum number is " + number1);
        } else {
            System.out.println("Maximum number is " + number2);
        }
    }
    void Maximum(int number1, int number2) {
        if (number1 > number2) {
            System.out.println("Maximum number is " + number1);
        } else {
            System.out.println("Maximum number is " + number2);
        }
    }
    
    
}

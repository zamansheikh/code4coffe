public class Structure {
    public static void main(String[] args) {
        Sphere sphere1 = new Sphere(2.02);
        System.out.println(sphere1.getRadius);
        System.out.println(sphere1.getVolume);
        Rectangle rect1 = new Rectangle();
        rect1.length = 50;
        rect1.breadth = 60;
        System.out.println(rect1.getArea);
        System.out.println(rect1.getCircumferece);
    }
    
}

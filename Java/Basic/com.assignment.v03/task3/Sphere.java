public class Sphere extends GeometricStructure {


    private double radius;
    double area;
    double volume;


    Sphere(double radius) {
        this.radius = radius;
    }

    public double getRadius() {
        return radius;
    }

    public void setRadius(double radius) {
        this.radius = radius;
    }

    double getArea(){
        double area = 4 * Math.PI * radius; 
        return area;
    }
    double getVolume(){
        double volume = 4* Math.PI * (radius * radius *radius);
        return volume;
    }
}
